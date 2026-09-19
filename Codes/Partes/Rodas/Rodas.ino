/* Autor(es):
Source: http://arcbotics.com/products/sparki/parts/wheels/
Data: 31/08/2026

Objetivo: Teste básico de movimentação dos motores do Sparki, executando sequencialmente
deslocamentos para frente, para trás, rotações direcionais e parada.

Testado em:
ArduinoIDE versão 1.8.19 Windows 64 Bit
*/

/* Variáveis
--não tem
*/

/* Execução
Move o robô para frente por 1 segundo, para trás por 1 segundo, rotaciona à direita
e à esquerda por 1 segundo cada, aciona a parada total dos motores por 2 segundos
e reinicia o ciclo em loop.
*/

#include <Sparki.h> // Inclusão da biblioteca do Sparki

void setup()
{
}

void loop()
{
sparki.moveForward();// Move o robô para frente
delay(1000); // Aguarda 1000 milissegundos

sparki.moveBackward(); // Move o robô para trás
delay(1000);

sparki.moveRight(); // Rotaciona o robô no sentido horário
delay(1000);

sparki.moveLeft(); // Rotaciona o robô no sentido anti-horário
delay(1000);

sparki.moveStop(); // Interrompe o acionamento de todas as rodas
delay(2000); // Aguarda 2000 milissegundos
}