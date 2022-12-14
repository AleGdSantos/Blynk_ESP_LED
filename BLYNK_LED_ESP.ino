// ESP32, Button Blynk
//-------- Bibliotecas -----------
#define BLYNK_PRINT Serial // Blynk Serial Print
#include <WiFi.h> // Wi-Fi
#include <WiFiClient.h> // Wi-Fi client 
#include <BlynkSimpleEsp32.h> // Blynk-ESP32
//-------- Token de Autenticação -----------
char auth[] = "Insira seu token";
//-------- Configurações de Wi-Fi -----------
char ssid[] = "Usuário";
char pass[] = "Senha";
//-------- Pino Virtual -----------
BLYNK_CONNECTED()
{         // Se conectar com Blynk
  Blynk.syncVirtual(V1);    // Sincroniza com o pino virtual V1 
  Blynk.syncVirtual(V2);    // Sincroniza com o pino V2
  Blynk.syncVirtual(V3);    // Sincroniza com o pino V3
}
void setup()
{
  Serial.begin(115200);     // Taxa de transmissão 115200
  pinMode(23, OUTPUT);           // LED Azul
  pinMode(4, OUTPUT);           // LED Verde
  pinMode(2, OUTPUT);           // LED Vermelho
  Blynk.begin(auth, ssid, pass); // TOKEN+REDE+SENHA
}
void loop() 
{
  Blynk.run();
}
