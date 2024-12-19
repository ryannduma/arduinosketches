// Pin definitions
const int redPin = 9;    // Connect the red pin of the RGB LED to pin 9
const int greenPin = 10; // Connect the green pin of the RGB LED to pin 10
const int bluePin = 11;  // Connect the blue pin of the RGB LED to pin 11

void setup() {
  // Set the RGB LED pins as outputs
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  // Turn on red
  digitalWrite(redPin, HIGH);
  digitalWrite(greenPin, LOW);
  digitalWrite(bluePin, LOW);
  delay(1000); // Wait for 1 second

  // Turn on green
  digitalWrite(redPin, LOW);
  digitalWrite(greenPin, HIGH);
  digitalWrite(bluePin, LOW);
  delay(1000); // Wait for 1 second

  // Turn on blue
  digitalWrite(redPin, LOW);
  digitalWrite(greenPin, LOW);
  digitalWrite(bluePin, HIGH);
  delay(1000); // Wait for 1 second
}
