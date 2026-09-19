/* Autor(es):
Source: http://arcbotics.com/products/sparki/parts/servo/
Data: 31/08/2026

Objetivo: Posicionamento angular do servomotor do eixo panorâmico utilizando macros e literais
numéricos.

Testado em:
ArduinoIDE versão 1.8.19 Windows 64 Bit
*/

/* Variáveis
--não tem
*/

/* Execução
Executa o posicionamento do servo utilizando macros predefinidas (LEFT, CENTER, RIGHT)
e em seguida valida o posicionamento por graus discretos (-90, 0, 90), com temporização
de 1 segundo por estado.
*/

#include <Sparki.h> // Inclusão da biblioteca do Sparki

void setup()
{
}

void loop()
{
// Posicionamento via constantes de macro
sparki.servo(SERVO_LEFT); // Posiciona em -90 graus
delay(1000); // Aguarda 1000 ms

sparki.servo(SERVO_CENTER); // Posiciona em 0 graus
delay(1000); // Aguarda 1000 ms

sparki.servo(SERVO_RIGHT); // Posiciona em 90 graus
delay(1000); // Aguarda 1000 ms

// Posicionamento via parâmetros escalares diretos
sparki.servo(-90); // Posiciona em -90 graus
delay(1000); // Aguarda 1000 ms

sparki.servo(0); // Posiciona em 0 graus
delay(1000); // Aguarda 1000 ms

sparki.servo(90); // Posiciona em 90 graus
delay(1000); // Aguarda 1000 ms
}