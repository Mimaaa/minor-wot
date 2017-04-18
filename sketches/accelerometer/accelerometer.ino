//Analog read pins
const int xPin = 0;


void setup(){
  Serial.begin(9600); 
}


void loop(){

  //read the analog values from the accelerometer
  int xRead = analogRead(xPin);

  //Output the caculations
  Serial.println(xRead);

}
