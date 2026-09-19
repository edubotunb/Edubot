/* Autor(es):
Source: http://arcbotics.com/products/sparki/parts/status-led/
Data: 31/08/2026

Objetivo: Controle de IO digital e modulação por largura de pulso (PWM) aplicada ao LED de status.

Testado em:
ArduinoIDE versão 1.8.19 Windows 64 Bit
*/

/* Variáveis
- int i: Variável de índice iterativa para incremento/decremento do ciclo de trabalho (PWM).
*/

/* Execução
Comuta o estado lógico do LED (HIGH/LOW) com temporização de 1 segundo.
Posteriormente, executa loops de varredura PWM para modulação de intensidade luminosa

(fade in / fade out).
*/

#include <Sparki.h> // Inclusão da biblioteca do Sparki

void setup()
{
}

void loop()
{
digitalWrite(STATUS_LED, HIGH); // Seta nível alto no pino do LED de status
delay(1000); // Aguarda 1000 ms
digitalWrite(STATUS_LED, LOW); // Seta nível baixo no pino do LED de status
delay(1000); // Aguarda 1000 ms

// Incremento gradual do duty cycle (Fade In)
for(int i = 0; i < 255; i++)
{
analogWrite(STATUS_LED, i);
delay(5);
}

// Decremento gradual do duty cycle (Fade Out)
for(int i = 255; i > 0; i--)
{
analogWrite(STATUS_LED, i);
delay(5);
}
}