const int pinA = 9;
const int pinB = 10;
void setup()
{
  Serial.begin(9600);
  pinMode(pinA, OUTPUT);
  pinMode(pinB, OUTPUT);
}

void loop()
{
  digitalWrite(pinA, HIGH);
  digitalWrite(pinB, LOW);
  Serial.println("Maju...");
  delay(5000);
  digitalWrite(pinA, LOW);
  digitalWrite(pinB, HIGH);
  Serial.println("Mundur...");
  delay(5000);
}
