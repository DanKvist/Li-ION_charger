

int Battery1_Vpin = A0;
int Battery2_Vpin = A1;
int Battery3_Vpin = A2;
int Battery4_Vpin = A3;

float Voltage_Bat1;

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

  Voltage_Bat1 = analogRead(Battery1_Vpin) * 5.0 / 1024.0;

  Serial.print("Battery 1 Volt: ");
  Serial.println(Voltage_Bat1);

  delay(1000);


}
