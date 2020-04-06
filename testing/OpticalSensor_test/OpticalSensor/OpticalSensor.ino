#define SENS_PIN 7
#define TIMOUT    3000

unsigned long pulse_width = 0;
void setup() {
  pinMode(SENS_PIN, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  pulse_width = pulseIn(SENS_PIN, HIGH, 10000000);
  Serial.print("Pulse width = \t");
  Serial.println(pulse_width);
  delay(25);
}
