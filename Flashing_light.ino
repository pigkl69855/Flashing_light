const int Led1=7;

void setup() {
  // put your setup code here, to run once:

pinMode(Led1,OUTPUT);
}
void loop() {
  // put your main code here, to run repeatedly:

digitalWrite(Led1,HIGH);
delay(50);
digitalWrite(Led1,LOW);
delay(50);

}
