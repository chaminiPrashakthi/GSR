
/* GSR Sensor data reading */
int GSR= A2;
int sensorValue;

void setup() {
 
  Serial.begin(9600);
  pinMode(A2,INPUT);

  }

void loop() {
  int temp;
  sensorValue=analogRead(GSR);
  Serial.print("Sessor Value =");
  Serial.println(sensorValue);
}
