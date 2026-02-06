#define LIGHT 2 // pin 2 - sensor
#define RELAY 9 // pin 9 - relay


/* 
   true - digital and control the sensitivity with potentiometer on the module
   false - control A0 value
*/
boolean digital = false;


unsigned int LightValue = 1015;   // LightValue to determine at what value the realy should be ON                      

void setup() {
  Serial.begin(9600);            //to display information
  pinMode(LIGHT, INPUT_PULLUP);  // define pin as INPUT for sensor
  pinMode(RELAY, OUTPUT);        // define pin as OUTPUT for relay
}

void loop() {
  delay(500);
  relay();
}

void relay() {
   if(digital == true) {
    int L =digitalRead(LIGHT);   // read the sensor 
     if(L == 1){
        Serial.println(" light is ON");
        digitalWrite(RELAY,LOW);
      }else{
         Serial.println("  === light is OFF");
         digitalWrite(RELAY,HIGH);
      }
   } else {
    int a0Value = analogRead(A0);
    
      if( a0Value >= LightValue){
        Serial.print(analogRead(A0));
        Serial.println(" Light is ON");
        digitalWrite(RELAY, LOW);
      }else{
         Serial.print(analogRead(A0));
         Serial.println("  === light OFF");
         digitalWrite(RELAY, HIGH);
      }
   }
}