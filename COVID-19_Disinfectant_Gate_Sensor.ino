//************ Muhammad Taha
//********** +92-330-8530186
//********** www-rex-es.com
#define echoPin 5 
#define trigPin 4


long duration;   // variable for the duration of sound wave travel
int distance;    // variable for the distance measurement

void setup()
{
  pinMode(10, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(trigPin, OUTPUT); // Sets the trigPin as an OUTPUT
  pinMode(echoPin, INPUT); // Sets the echoPin as an INPUT
  digitalWrite(10, LOW);
  digitalWrite(13, LOW);

  //Serial.begin(9600);      // Serial Communication is starting with 9600 of baudrate speed
}
void loop()
{
  // Clears the trigPin condition
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn(echoPin, HIGH);
  // Calculating the distance
  distance = duration * 0.034 / 2; // Speed of sound wave divided by 2 (go and back)
  if (distance <= 90)
  {
    digitalWrite(10, HIGH);
    digitalWrite(13, HIGH);
    delay(5000);
  }
  else
  {
    digitalWrite(10, LOW);
    digitalWrite(13, LOW);
  }
  delay(100);

  //
  //  Serial.print("Distance: ");
  //  Serial.print(distance);
  //  Serial.println(" cm");
}
