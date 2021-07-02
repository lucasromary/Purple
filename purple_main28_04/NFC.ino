void scan_pwd(){
    if (nfc.scan()) {
      NFCcard = nfc.getInformation();
    if ((NFCcard.AQTA[1] == 0x02 || NFCcard.AQTA[1] == 0x04)) {
       nfc.readData(dataRead, 2);
      Serial.print("Data read(string):");
      Serial.println((char *)dataRead);
      Serial.print("Data read(HEX):");
      for (int i = 0; i < BLOCK_SIZE; i++) {
        if (dataRead[i]!=pwd[i]){
          pwd_check +=1;
        }
        dataRead[i] = 0;
      }
      if(pwd_check ==0){
        Serial.println("Success");
        vert_bloc();
        removing_card();
      }
      else{
        Serial.print("Failed with counter : ");
        Serial.println(pwd_check);
        pwd_check = 0;
        rouge_bloc();
      }
      Serial.println();
    }
    else {
      Serial.println("The card type is not mifareclassic...");
    }
  }
  else {
    chenillard_rouge();
  }
}


void waiting_pwd(){
    if (nfc.scan()) {
    NFCcard = nfc.getInformation();
    if ((NFCcard.AQTA[1] == 0x02 || NFCcard.AQTA[1] == 0x04)) {
      nfc.readData(dataRead, 2);
      Serial.print("Data read(string):");
      Serial.println((char *)dataRead);
      Serial.print("Data read(HEX):");
      for (int i = 0; i < BLOCK_SIZE; i++) {
        if (dataRead[i]!=pwd[i]){
          pwd_check +=1;
        }
        Serial.print(dataRead[i], HEX);
        Serial.print(" ");
        dataRead[i] = 0;
        
      }
      if(pwd_check ==0){
        Serial.println("Success validation");
        vert_bloc();
        removing_card();
      }
      else{
        Serial.print("Failed validation with counter : ");
        Serial.println(pwd_check);
        pwd_check = 0;
        rouge_bloc();
      }
      Serial.println();
    }
    else {
      Serial.println("The card type is not mifareclassic...");
    }
    }
    else{
      jaune_respirant();
    }
}

void removing_card(){
  while(nfc.scan()) {
      NFCcard = nfc.getInformation();
      if ((NFCcard.AQTA[1] == 0x02 || NFCcard.AQTA[1] == 0x04)) {
        Serial.println("En attente du retrait de la carte");
      }
  }
  validation = !validation;
}
