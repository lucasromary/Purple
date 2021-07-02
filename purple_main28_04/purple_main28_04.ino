////////////////////////////////////// NEOPIXEL //////////////////////////////////////

#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
 #include <avr/power.h>
#endif

#define PIN        A0
#define NUMPIXELS 71

Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);
#define DELAYVAL 100

////////////////////////////////////// NFC //////////////////////////////////////

#include <DFRobot_PN532.h>

#define BLOCK_SIZE      16
#define  PN532_IRQ      (2)
#define  INTERRUPT      (1)
#define  POLLING        (0)

DFRobot_PN532_IIC  nfc(PN532_IRQ, POLLING);
uint8_t dataRead[16] = {0};
struct card NFCcard;
uint8_t pwd[16] ={"A"};
int pwd_check = 0;
int validation = 0;
int number_scan = 0;
int validation_scan = 0;
////////////////////////////////////// INTERRUPT //////////////////////////////////////

const byte interruptPin = 2;
volatile byte state = LOW;
unsigned long currentTime=0;
unsigned long previousTime=0;

void setup() {

  Serial.begin(115200);
  
  ////////////////////////////////////// NEOPIXEL //////////////////////////////////////

  #if defined(__AVR_ATtiny85__) && (F_CPU == 16000000)
    clock_prescale_set(clock_div_1);
  #endif

  pixels.begin();
  pixels.clear();
  pixels.show();
  ////////////////////////////////////// NFC //////////////////////////////////////
  
  while (!nfc.begin()) {
    Serial.println("init failure");
    delay (1000);
  }
  Serial.println("Waiting for a card......");

  ////////////////////////////////////// INTERRUPT //////////////////////////////////////

  pinMode(interruptPin, INPUT);
  attachInterrupt(digitalPinToInterrupt(interruptPin), activation, FALLING);
}
void loop() {
  //Scan, write and read NFC card every 2s
  //Print all what is to be written and read
  

  if (!state){
    if (validation == 0){
      //chenillard_rouge();
      scan_pwd();
    }
    else{
      waiting_pwd();
    }
  }
  else{
    PMR();
    state = !state;
  }

}

void activation() {
  state = !state;
}
