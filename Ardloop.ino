int recButtonPins[8] = {30,32,36,41,42,44,51,52};
int potPins[4] = {0,1,2,3};
int startButtons[2] = {24, 39};
int midButt[3]={4,5,7};
int recLights[8] = {29,34,35,40,45,47,50,53};
int midLights [3] = {10,11,12};
int recBig [2]={23,35};

void setup(){
  
  Serial.begin(115200);
   for(int i=0;i<2;i++){
    pinMode(startButtons[i],INPUT_PULLUP);
  }
  
  for(int i=0;i<8;i++){
    pinMode(recButtonPins[i],INPUT_PULLUP);
  }
  
    for(int i=0;i<3;i++){
    pinMode(midButt[i],INPUT_PULLUP);
  }
  
}

void loop(){
  
   for(int i=0;i<2;i++){
    Serial.print(digitalRead(startButtons[i]));
    Serial.print(' ');
  }
  
  for(int i=0;i<8;i++){
    Serial.print(digitalRead(recButtonPins[i]));
    Serial.print(' ');
  }
   for(int i=0;i<3;i++){
    Serial.print(digitalRead(midButt[i]));
    Serial.print(' ');
  }
 
  for(int i=0;i<4;i++){
    Serial.print(analogRead(potPins[i]));
    Serial.print(' ');
  }
  
  Serial.println();
  
  delay(10);
}
