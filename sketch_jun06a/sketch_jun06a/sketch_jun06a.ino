int Empfaenger = analogRead(A0);
int time = 0;
int distance = 0;
void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop(){
  int Distance = analogRead(A0);
  delay(1000);
  if(Distance <= 654.72){
    digitalWrite(12, HIGH);
    digitalWrite(13, LOW);
    String fuelstand = "voll!";
    Serial.println(fuelstand);
  }
  else{
    digitalWrite(12, LOW);
    digitalWrite(13, HIGH);
    String fuelstand = "noch nicht voll";
    Serial.println(fuelstand);
    }
}
