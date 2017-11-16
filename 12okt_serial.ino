float pi = 3.14;
int diameter;
int height;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println("Hoogte cilinder?");
  while(Serial.available() == 0) {}
  height = Serial.parseInt();
  Serial.println(height);
  Serial.println("Diameter cilinder?");
  while(Serial.available() == 0) {}
  diameter = Serial.parseInt();
  Serial.println(diameter);
  calculateVolume(diameter, height);
}

void calculateVolume(int diameter, int height)
{
  int volume = pi * (diameter / 2) * (diameter / 2) * height;
  Serial.println("De inhoud is: " + String(volume));
}

