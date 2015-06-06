int Empfaenger = analogRead(A0);
int time = 0;
int distance = 0;
void setup() {
  pinMode(Empfaenger, INPUT);
  Serial.begin(9600);
}

void loop(){
  time =pulseIn(Empfaenger, HIGH);
  distance=time /58;
  delay(100);
  Serial.println(analogRead(A0));
}
