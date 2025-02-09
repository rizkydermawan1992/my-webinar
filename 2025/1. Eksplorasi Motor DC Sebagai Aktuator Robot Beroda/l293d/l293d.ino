// Definisi pin motor
const int ENA = 9;   // Enable motor A
const int ENB = 10;  // Enable motor B
const int IN1 = 2;   // Input 1 motor A
const int IN2 = 3;   // Input 2 motor A
const int IN3 = 4;   // Input 1 motor B
const int IN4 = 5;   // Input 2 motor B

void setup() {
  Serial.begin(9600);
  // Atur pin sebagai output
  pinMode(ENA, OUTPUT);
  pinMode(ENB, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  // Aktifkan motor dengan kecepatan penuh (PWM = 255)
  analogWrite(ENA, 255);
  analogWrite(ENB, 255);

  // Pastikan motor berhenti saat awal
  stopMotors();
}

void loop() {
  // Contoh gerakan motor
  maju();
  delay(2000);  // Bergerak maju selama 2 detik

  mundur();
  delay(2000);  // Bergerak mundur selama 2 detik

  putarKiri();
  delay(2000);  // Putar ke kiri selama 2 detik

  putarKanan();
  delay(2000);  // Putar ke kanan selama 2 detik

  stopMotors();
  delay(2000);  // Berhenti selama 2 detik
}

// Fungsi untuk bergerak maju
void maju() {
  Serial.println("Maju");
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}

// Fungsi untuk bergerak mundur
void mundur() {
  Serial.println("Mundur");
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
}

// Fungsi untuk putar ke kiri
void putarKiri() {
  Serial.println("Putar Kiri");
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}

// Fungsi untuk putar ke kanan
void putarKanan() {
  Serial.println("Putar Kanan");
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
}

// Fungsi untuk menghentikan motor
void stopMotors() {
  Serial.println("Berhenti");
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
}

