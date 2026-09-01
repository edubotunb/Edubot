/* Autor(es):
Source: Documentação Sparki
Data: 31/08/2026
Objetivo: Imprimir string estática ("def") no display LCD de forma cíclica.
Testado em:
ArduinoIDE versão 1.8.19 Windows 64 Bit
*/
/* Variáveis
--não tem
*/
/* Execução
Limpa o buffer do LCD, escreve a string "def" na tela e executa uma
temporização de 1000 ms antes de reiniciar o ciclo.
*/
#include <Sparki.h>
void setup()
{
}
void loop()
{
sparki.clearLCD(); // Limpa o display LCD[cite: 1]
sparki.println("def"); // Imprime a string no display[cite: 1]
delay(1000); // Aguarda 1000 milissegundos[cite: 1]
}