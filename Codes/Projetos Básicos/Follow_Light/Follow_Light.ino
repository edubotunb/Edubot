/* Autor(es): ArcBotics
   Source: https://arcbotics.com/lessons/sparki/
   Data: 25/08/2026

   Objetivo: Demonstrar como utilizar os sensores de luz do
   Sparki para identificar a direção de uma fonte de luz e
   fazer o robô se movimentar em direção a ela.
*/

/* Variáveis
   left: armazena a leitura do sensor de luz esquerdo.

   center: armazena a leitura do sensor de luz central.

   right: armazena a leitura do sensor de luz direito.
*/

/* Execução
   O programa lê continuamente os três sensores de luz do
   Sparki e compara os valores obtidos. Se o sensor central
   detectar a maior intensidade de luz, o Sparki se move para
   frente. Se o sensor esquerdo detectar a maior intensidade,
   o robô vira para a esquerda. Se o sensor direito detectar
   a maior intensidade, o robô vira para a direita.
*/
#include <Sparki.h> // inclui a biblioteca do Sparki

void setup() 
{
}

void loop() {
  int left   = sparki.lightLeft();   // mede o sensor de luz esquerdo
  int center = sparki.lightCenter(); // mede o sensor de luz central
  int right  = sparki.lightRight();  // mede o sensor de luz direito

  if ( (center > left) && (center > right) ) // se a luz central for a mais forte
  {  
    sparki.moveForward(); // move-se para frente
  }

  if ( (left > center) && (left > right) )  // se a luz esquerda for a mais forte
  {   
    sparki.moveLeft(); // vira para a esquerda
  }

  if ( (right > center) && (right > left) )  // se a luz direita for a mais forte
  {  
    sparki.moveRight(); // vira para a direita
  }
  
  delay(100); // aguarda 0,1 segundo
}
