/* Autor(es):
Source: http://arcbotics.com/light-sensor/
Data: 31/08/2026

Objetivo: Leitura e exibição dos valores dos fotorresistores (LDR) dispostos na face frontal.

Testado em:
ArduinoIDE versão 1.8.19 Windows 64 Bit

*/

/* Variáveis
- int left: Valor analógico do sensor fotométrico esquerdo.
- int center: Valor analógico do sensor fotométrico central.
- int right: Valor analógico do sensor fotométrico direito.
*/

/* Execução
Limpa a tela, obtém os valores de intensidade luminosa dos três canais frontais,
grava os dados formatados no display e atualiza a interface a cada 100 ms.
*/

#include <Sparki.h> // Inclusão da biblioteca do Sparki

void setup()
{
}

void loop() {
sparki.clearLCD(); // Limpa o display LCD

// Amostragem dos canais de luz frontais
int left = sparki.lightLeft();
int center = sparki.lightCenter();
int right = sparki.lightRight();

// Impressão dos dados no buffer do LCD
sparki.print("Left ");
sparki.println(left);

sparki.print("Center ");
sparki.println(center);

sparki.print("Right ");
sparki.println(right);

sparki.updateLCD(); // Atualiza o display LCD
delay(100); // Delay de 100 ms
}