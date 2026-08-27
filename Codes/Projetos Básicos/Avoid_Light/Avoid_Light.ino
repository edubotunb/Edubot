/* Autor(es): ArcBotics
   Source: https://arcbotics.com/lessons/sparki/
   Data: 25/08/2026

   Objetivo: Demonstrar o uso dos sensores de luz do Sparki
   para identificar a direção de uma fonte de luz e fazer o
   robô se afastar dela.
*/

/* Variáveis
   left: armazena a leitura do sensor de luz esquerdo.

   center: armazena a leitura do sensor de luz central.

   right: armazena a leitura do sensor de luz direito.
*/

/* Execução
   O programa lê continuamente os três sensores de luz do
   Sparki. O robô compara os valores medidos para determinar
   qual sensor está recebendo mais luz. Se a luz central for
   a mais forte, o Sparki se move para trás. Se a luz esquerda
   for a mais forte, o robô se move para a direita. Se a luz
   direita for a mais forte, o robô se move para a esquerda.
*/
#include <Sparki.h> // inclui a biblioteca do Sparki

void setup() 
{
}

void loop() {
  int left   = sparki.lightLeft();   // mede o sensor de luz esquerdo
  int center = sparki.lightCenter(); // mede o sensor de luz central
  int right  = sparki.lightRight();  // mede o sensor de luz direito

  if ( (center > left) && (center > right) ){  // se a luz central for a mais forte
    sparki.moveBackward();
  }

  if ( (left > center) && (left > right) ){    // se a luz esquerda for a mais forte
    sparki.moveRight();
  }

  if ( (right > center) && (right > left) ){   // se a luz direita for a mais forte
    sparki.moveLeft();
  }
  
  delay(100); // aguarda 0,1 segundo
}
