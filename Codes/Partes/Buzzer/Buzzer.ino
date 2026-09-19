/* Autor(es):
Source: http://arcbotics.com/products/sparki/parts/buzzer/
Data: 31/08/2026

Objetivo: Emissão periódica de sinal sonoro via buzzer piezoelétrico.

Testado em:
ArduinoIDE versão 1.8.19 Windows 64 Bit
*/

/* Variáveis
--não tem
*/

/* Execução
Aciona o transdutor acústico (buzzer) e aplica um atraso fixo de 1000 ms
em loop contínuo.
*/

#include <Sparki.h> // Inclusão da biblioteca do Sparki

void setup()
{
}

void loop()
{
sparki.beep(); // Dispara sinal sonoro no buzzer
delay(1000); // Aguarda 1000 milissegundos
}