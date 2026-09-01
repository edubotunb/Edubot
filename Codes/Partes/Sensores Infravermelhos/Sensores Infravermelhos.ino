/* Autor(es):
Source: http://arcbotics.com/products/sparki/parts/infrared-reflectance-sensor/
Data: 31/08/2026

Objetivo: Aquisição e display em tempo real dos dados coletados pelos 5 sensores de reflectância
inferiores.

Testado em:
ArduinoIDE versão 1.8.19 Windows 64 Bit
*/

/* Variáveis
- int edgeLeft: Leitura analógica do sensor de borda esquerdo.
- int lineLeft: Leitura analógica do sensor de linha esquerdo.
- int lineCenter: Leitura analógica do sensor de linha central.
- int lineRight: Leitura analógica do sensor de linha direito.
- int edgeRight: Leitura analógica do sensor de borda direito.
*/

/* Execução
Limpa o buffer do LCD a cada iteração, realiza a leitura sequencial das portas
dos sensores IR, formata e imprime os valores tabulados, atualizando o display
periodicamente.
*/

#include <Sparki.h> // Inclusão da biblioteca de controle do Sparki

void setup()
{
}

void loop() {
sparki.clearLCD(); // Limpa o buffer do LCD

// Executa amostragem dos sensores IR inferiores
int edgeLeft = sparki.edgeLeft();
int lineLeft = sparki.lineLeft();
int lineCenter = sparki.lineCenter();
int lineRight = sparki.lineRight();
int edgeRight = sparki.edgeRight();

// Escreve os parâmetros amostrados no buffer do LCD
sparki.print("Edge Left: ");
sparki.println(edgeLeft);

sparki.println();

sparki.print("Line Left: ");
sparki.println(lineLeft);

sparki.print("Line Center: ");
sparki.println(lineCenter);

sparki.print("Line Right: ");
sparki.println(lineRight);

sparki.println();

sparki.print("Edge Right: ");
sparki.println(edgeRight);

sparki.updateLCD(); // Atualiza o display físico com o buffer
delay(100); // Temporização de amostragem (100 ms)
}