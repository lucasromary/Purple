void chenillard_rouge(){

    for(int i=1; i<7; i++){
    previousTime=currentTime;
    while((currentTime-previousTime)<DELAYVAL && state==0){
      currentTime=millis();
      pixels.clear();
      pixels.setPixelColor(0, pixels.Color(180, 0, 0));
      pixels.setPixelColor(i, pixels.Color(180, 0, 0));
      pixels.show();   // Send the updated pixel colors to the hardware.
    }
  }
}

void vert_bloc(){
   pixels.clear();
   for(int i=0; i<7; i++) { // For each pixel...
    pixels.setPixelColor(i, pixels.Color(0, 180, 0));
    pixels.show();   // Send the updated pixel colors to the hardware.
  }
  delay(1000);
  pixels.clear();
}

void jaune_respirant(){
   pixels.clear();
   for(int j=60; j>0; j--) { 
    for(int i=0; i<7; i++) { // For each pixel...
      pixels.setPixelColor(i, pixels.Color(j, j, 0));
      pixels.show();   // Send the updated pixel colors to the hardware.
    }
   }
   for(int j=0; j<60; j++) {
    for(int i=0; i<7; i++) { // For each pixel...
      pixels.setPixelColor(i, pixels.Color(j, j, 0));
      pixels.show();   // Send the updated pixel colors to the hardware.
    }
   }
}

void rouge_bloc(){
   pixels.clear();
   for(int i=0; i<7; i++) { // For each pixel...
     pixels.setPixelColor(i, pixels.Color(180, 0, 0));
     pixels.show();   // Send the updated pixel colors to the hardware.
    
   }
  delay(2000);
  pixels.clear();
}

void bleu_bloc(){
   pixels.clear();
   for(int i=0; i<NUMPIXELS; i++) { // For each pixel...
    pixels.setPixelColor(i, pixels.Color(0, 0, 180));
    pixels.show();   // Send the updated pixel colors to the hardware.
  }
  delay(1000);
  pixels.clear();
}
void fleche_haut_gauche(){
  pixels.clear();
  //////////////////////// 1ere ligne ///////////////////////////////
  for(int i=7; i<12; i++) { // For each pixel...
    pixels.setPixelColor(i, pixels.Color(0, 150, 0));
    pixels.show();   // Send the updated pixel colors to the hardware.
  }
  //////////////////////// 2eme ligne ///////////////////////////////
  for(int i=15; i<21; i++) { // For each pixel...
    pixels.setPixelColor(i, pixels.Color(0, 150, 0));
    pixels.show();   // Send the updated pixel colors to the hardware.
  //////////////////////// 3eme ligne ///////////////////////////////
  }
  for(int i=23; i<27; i++) { // For each pixel...
    pixels.setPixelColor(i, pixels.Color(0, 150, 0));
    pixels.show();   // Send the updated pixel colors to the hardware.
  }
  //////////////////////// 4eme ligne ///////////////////////////////
  for(int i=31; i<33; i++) { // For each pixel...
    pixels.setPixelColor(i, pixels.Color(0, 150, 0));
    pixels.show();   // Send the updated pixel colors to the hardware.
  }
  for(int i=33; i<36; i++) { // For each pixel...
    pixels.setPixelColor(i, pixels.Color(0, 150, 0));
    pixels.show();   // Send the updated pixel colors to the hardware.
  }
  //////////////////////// 5eme ligne ///////////////////////////////
  for(int i=39; i<41; i++) { // For each pixel...
    pixels.setPixelColor(i, pixels.Color(0, 150, 0));
    pixels.show();   // Send the updated pixel colors to the hardware.
  }
  for(int i=42; i<45; i++) { // For each pixel...
    pixels.setPixelColor(i, pixels.Color(0, 150, 0));
    pixels.show();   // Send the updated pixel colors to the hardware.
  }
  //////////////////////// 6eme ligne ///////////////////////////////
  pixels.setPixelColor(48, pixels.Color(0, 150, 0));
  for(int i=51; i<54; i++) { // For each pixel...
    pixels.setPixelColor(i, pixels.Color(0, 150, 0));
    pixels.show();   // Send the updated pixel colors to the hardware.
  }
  //////////////////////// 7eme ligne ///////////////////////////////
  for(int i=60; i<63; i++) { // For each pixel...
    pixels.setPixelColor(i, pixels.Color(0, 150, 0));
    pixels.show();   // Send the updated pixel colors to the hardware.
  }
  //////////////////////// 8eme ligne ///////////////////////////////
  for(int i=69; i<71; i++) { // For each pixel...
    pixels.setPixelColor(i, pixels.Color(0, 150, 0));
    pixels.show();   // Send the updated pixel colors to the hardware.
  }
  pixels.show();   // Send the updated pixel colors to the hardware.
  delay(1500);
  pixels.clear();
}


void PMR(){
  pixels.clear();
  //////////////////////// 1ere ligne ///////////////////////////////
  for(int i=7; i<15; i++) { // For each pixel...
    pixels.setPixelColor(i, pixels.Color(0, 0, 70));
  }
  
  //////////////////////// 2eme ligne ///////////////////////////////
  for(int i=15; i<17; i++) { // For each pixel...
    pixels.setPixelColor(i, pixels.Color(0, 0, 70));
  }
  for(int i=17; i<21; i++) { // For each pixel...
    pixels.setPixelColor(i, pixels.Color(100, 100, 100));
  }
  
  //////////////////////// 3eme ligne ///////////////////////////////
  for(int i=21; i<23; i++) { // For each pixel...
    pixels.setPixelColor(i, pixels.Color(0, 0, 70));
  }
  for(int i=23; i<25; i++) { // For each pixel...
    pixels.setPixelColor(i, pixels.Color(0, 0, 70));
  }
  pixels.setPixelColor(25, pixels.Color(100, 100,100));
  for(int i=26; i<28; i++) { // For each pixel...
    pixels.setPixelColor(i, pixels.Color(0, 0, 70));
  }
  pixels.setPixelColor(28, pixels.Color(100, 100, 100));
  for(int i=29; i<31; i++) { // For each pixel...
    pixels.setPixelColor(i, pixels.Color(0, 0, 70));
  }
  
  //////////////////////// 4eme ligne ///////////////////////////////
  for(int i=31; i<33; i++) { // For each pixel...
    pixels.setPixelColor(i, pixels.Color(0, 0, 70));
  }
  for(int i=33; i<37; i++) { // For each pixel...
    pixels.setPixelColor(i, pixels.Color(100, 100, 100));
  }
  for(int i=37; i<39; i++) { // For each pixel...
    pixels.setPixelColor(i, pixels.Color(0, 0, 70));
  }
  
  //////////////////////// 5eme ligne ///////////////////////////////
  for(int i=39; i<41; i++) { // For each pixel...
    pixels.setPixelColor(i, pixels.Color(0, 0, 70));
  }
  pixels.setPixelColor(41, pixels.Color(100, 100, 100));

  for(int i=42; i<47; i++) { // For each pixel...
    pixels.setPixelColor(i, pixels.Color(0, 0, 70));
  }
  //////////////////////// 6eme ligne ///////////////////////////////
  for(int i=47; i<49; i++) { // For each pixel...
    pixels.setPixelColor(i, pixels.Color(0, 0, 70));
  }
  pixels.setPixelColor(49, pixels.Color(100, 100, 100));

  for(int i=50; i<55; i++) { // For each pixel...
    pixels.setPixelColor(i, pixels.Color(0, 0, 70));
  }
  //////////////////////// 7eme ligne ///////////////////////////////
  for(int i=55; i<63; i++) { // For each pixel...
    pixels.setPixelColor(i, pixels.Color(0, 0, 70));
  }
  //////////////////////// 8eme ligne ///////////////////////////////
  for(int i=63; i<71; i++) { // For each pixel...
    pixels.setPixelColor(i, pixels.Color(0, 0, 70));
  }
  
  pixels.show();   // Send the updated pixel colors to the hardware.
  delay(5000);
  pixels.clear();
}
