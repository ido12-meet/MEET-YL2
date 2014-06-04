int b1 = 7;
int b2 = 6;
int b3 = 2;
int b4 = 3;
int b5 = 4;
int led = 13;

String password
;

void setup() {
  Serial.begin(9600);
  Serial.println("Program started succesfully!");
  pinMode(b1, INPUT);
  pinMode(b2, INPUT);
  pinMode(b3, INPUT);
  pinMode(b4, INPUT);
  pinMode(b5, INPUT);
  pinMode(led, OUTPUT);
}



void loop() {
  if(password == "34521"){
    Serial.println("Welcome to SKYNET! ");
  }
  
  //CurrentButtonState
  int b1S = digitalRead(b1);
  int b2S = digitalRead(b2); 
  int b3S = digitalRead(b3); 
  int b4S = digitalRead(b4); 
  int b5S = digitalRead(b5);


    if (b1S == 1) {
      digitalWrite(led, LOW);
      Serial.println("button 1 is pressed");
      while (true){
      if(digitalRead(b1) == 0){break;}
      }
      delay(500);
      password = password + "1";
    }
      if (b2S == 1) {
        digitalWrite(led, LOW);
      Serial.println("button 2 is pressed");
      while (true){
      if(digitalRead(b2) == 0){break;}
      }
      delay(500);
      password = password + "2";
    }
        if (b3S == 1) {
          digitalWrite(led, LOW);
      Serial.println("button 3 is pressed");
      while (true){
      if(digitalRead(b3) == 0){break;}
      }
      delay(500);
      password = password + "3";
    }
        if (b4S == 1) {
          digitalWrite(led, LOW);
      Serial.println("button 4 is pressed");
      while (true){
      if(digitalRead(b4) == 0){break;}
      }
      delay(500);
      password = password + "4";
    }
        if (b5S == 1) {
          digitalWrite(led, LOW);
      Serial.println("button 5 is pressed");
      while (true){
      if(digitalRead(b5) == 0){break;}
      }
      delay(500);
      password = password + "5";
    }
    digitalWrite(led, HIGH);
    
}
/*this might not do anything but i didn't want to earse it and by that making a mistake
int checkForButtonPress(){

  while (true){
      int b1S = digitalRead(b1);
  int b2S = digitalRead(b2); 
  int b3S = digitalRead(b3); 
  int b4S = digitalRead(b4); 
  int b5S = digitalRead(b5);
  if (b1S == 1) {
      return 1;
    }
      if (b2S == 1) {
        return 2;
    }
        if (b3S == 1) {
          return 3;
    }
        if (b4S == 1) {
          return 4;
    }
        if (b5S == 1) {
          return 5;
    }
  }
} 

*/


