#include <WiFiNINA.h>
#include <Arduino_MKRIoTCarrier.h>
MKRIoTCarrier carrier;

//sensor value for player
float Ax, Ay, Az;

char ssid[] = SECRET_SSID;
char pass[] = SECRET_PASS;

int status = WL_IDLE_STATUS;

char server[] = "192.168.248.50"; // enter your IP


WiFiClient client;

void setup() {

  Serial.begin(9600);
  
  CARRIER_CASE = true;
  carrier.begin();
  
  // "connecting" display
  carrier.display.fillScreen(ST77XX_BLACK);
  carrier.display.setTextColor(ST77XX_WHITE);
  carrier.display.setTextSize(3);
  carrier.display.setCursor(30, 120);
  carrier.display.print("Connecting!");
  
  while (status != WL_CONNECTED) {
    Serial.print("Attempting to connect to Network named: ");
    Serial.println(ssid);
    status = WiFi.begin(ssid, pass);
    delay(10000);
  }
  carrier.display.fillScreen(ST77XX_BLACK);
  carrier.display.setTextColor(ST77XX_WHITE);
  carrier.display.setTextSize(3);
  carrier.display.setCursor(30, 120);
  carrier.display.print("Connected!");
  delay(5000);
  
  Serial.print("SSID: ");
  Serial.println(WiFi.SSID());
  IPAddress ip = WiFi.localIP();
  IPAddress gateway = WiFi.gatewayIP();
  Serial.print("IP Address: ");
  Serial.println(ip);

  carrier.display.fillScreen(ST77XX_BLACK);
  carrier.display.setTextColor(ST77XX_WHITE);
  carrier.display.setTextSize(2);
  carrier.display.setCursor(30, 120);
  carrier.display.print("Press to Start!");
  
  while(!carrier.Button0.onTouchDown()) {
      carrier.Buttons.update();
  }
  
  while (!client.connect(server, 80)) {}
  
  if (client.connect(server, 80)) {
    client.println("GET /insert_temp.php?STARTED2=1");
    client.println(" HTTP/1.1");
    client.println("Host: 192.168.248.50"); // enter IP here aswell
    client.println("Connection: close");
    client.println(); // end HTTP request header
    Serial.println("SENT STARTED2 value"); // HTTP request sent
  }

  if (client.connected()) {
    client.stop();
  }
  
  carrier.display.fillScreen(ST77XX_BLACK);
  carrier.display.fillCircle(50, 40, 20, ST77XX_RED);
  carrier.display.fillCircle(130, 65, 20, ST77XX_RED);
  carrier.display.fillCircle(170, 15, 20, ST77XX_RED);
  carrier.display.fillCircle(70, 130, 20, ST77XX_RED);
  carrier.display.fillCircle(190, 115, 20, ST77XX_RED);
  carrier.display.fillCircle(30, 230, 20, ST77XX_RED);
  carrier.display.fillCircle(150, 180, 20, ST77XX_RED);
  carrier.display.fillCircle(210, 205, 20, ST77XX_RED);
  carrier.display.setTextColor(ST77XX_WHITE);
  carrier.display.setTextSize(5);
  carrier.display.setCursor(30, 60);
  carrier.display.print("Player    #2");
  
}

void loop() {
  
  carrier.IMUmodule.readAcceleration(Ax, Ay, Az);
  
  if (client.connect(server, 80)) {
    client.print("GET /insert_temp.php?P2=");
    client.print(Ax);
    client.println(" HTTP/1.1");
    client.println("Host: 192.168.248.50"); // enter IP here aswell
    client.println("Connection: close");
    client.println(); // end HTTP request header
    Serial.println("SENT P2 value"); // HTTP request sent
  }

  if (client.connected()) {
    client.stop();
  }

}
