/* Autor(es):
Source: Documentação Sparki
Data: 31/08/2026

Objetivo: Navegação autônoma frontal com verificação de obstáculo via ultrassom. Dispara rotina
evasiva se a distância for inferior ao limiar estipulado.

Testado em:
ArduinoIDE versão 1.8.19 Windows 64 Bit
*/

/* Variáveis
- int cm: Armazena o valor de distância retornado pelo sensor ultrassônico (ping).
*/

/* Execução
Inicializa o servo na posição central. Em loop, o robô avança com LED verde ativo.
Ao detectar distância inferior a 20 cm, altera o LED para vermelho, emite sinal sonoro,
executa translação reversa e rotação angular para desvio.
*/

#include <Sparki.h>

void setup() {
sparki.servo(SERVO_CENTER); // Posiciona o servo centralizado (0 graus)
}

void loop()
{
sparki.RGB(RGB_GREEN); // Aciona LED RGB na cor verde
sparki.moveForward(); // Aciona motores para avanço
int cm = sparki.ping(); // Executa leitura de distância via ultrassom

if(cm != -1) // Valida retorno do sensor (filtra erros de leitura)
{
if(cm < 20) // Condicional de proximidade (< 20 cm)
{
sparki.RGB(RGB_RED); // Altera LED RGB para vermelho
sparki.beep(); // Aciona o buzzer
sparki.moveBackward(10); // Executa recuo de 10 cm
sparki.moveRight(30); // Executa rotação de 30 graus à direita
}
}
delay(100); // Intervalo de estabilização do ciclo (100 ms)
}