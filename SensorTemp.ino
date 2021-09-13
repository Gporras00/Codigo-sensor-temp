float V=0.0;
float T=0.0;
void setup() {
  // put your setup code here, to run once:
pinMode (A0,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  V=analogRead(A0);
  Serial.print("La temperatura actual es: ");
  T=V*140/1023;
Serial.print(T);
Serial.println(" Grados");
delay(1000);

}
