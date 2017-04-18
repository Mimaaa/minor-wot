const int bar = A0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  pinMode(bar, OUTPUT);
}


void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(bar, 2);
}
