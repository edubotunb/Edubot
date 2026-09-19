/* Autor(es): ArcBotics
   Source: https://arcbotics.com/lessons/sparki/
   Data: 25/08/2026

   Objetivo: Demonstrar como utilizar os sensores infravermelhos
   de borda do Sparki para detectar a ausência de uma superfície
   e evitar que o robô caia.
*/

/* Variáveis
   edgeLeft: armazena a leitura do sensor infravermelho de borda
   esquerdo.

   edgeRight: armazena a leitura do sensor infravermelho de borda
   direito.

   threshold: define o valor limite utilizado para determinar
   se existe uma superfície abaixo dos sensores.
*/

/* Execução
   O programa verifica continuamente os sensores infravermelhos
   de borda. Quando um dos sensores detecta que não há superfície
   abaixo do Sparki, o robô muda de direção para evitar a borda.
   Após realizar as verificações, o Sparki continua se movendo
   para frente.
*/
#include <Sparki.h> // inclui a biblioteca do Sparki

void setup()
{       
}

void loop() {
  int edgeLeft   = sparki.edgeLeft();   // mede o sensor infravermelho de borda esquerdo
  int edgeRight  = sparki.edgeRight();  // mede o sensor infravermelho de borda direito
  
  int threshold = 200; // abaixo deste valor, não há superfície abaixo do sensor
  
  if (edgeLeft < threshold) // se não houver superfície abaixo do sensor esquerdo
  {
    sparki.moveRight(20); // vira para a direita
  }

  if (edgeRight < threshold) // se não houver superfície abaixo do sensor direito
  {
    sparki.moveLeft(20); // vira para a esquerda
  }
  if (edgeRight < threshold && edgeLeft < threshold)// se não houver superfície abaixo de ambos sensores
  {
    sparki.moveBackward();
    delay(400);
    sparki.moveLeft(20);
  }
  sparki.moveForward(); // move-se para frente
  delay(100); // aguarda 0,1 segundo
}
