/* Autor(es): ArcBotics
   Source: https://arcbotics.com/lessons/sparki/
   Data: 25/08/2026

   Objetivo: Demonstrar o uso do acelerômetro do Sparki para
   identificar sua inclinação e fazer o robô se orientar
   corretamente em relação a uma subida ou descida.
*/

/* Variáveis
   x: armazena a aceleração medida no eixo X.

   y: armazena a aceleração medida no eixo Y.
*/

/* Execução
   O programa utiliza o acelerômetro para verificar a inclinação
   do Sparki. Se o robô estiver alinhado com a subida ou descida,
   ele se movimenta para frente ou para trás de acordo com a
   direção da inclinação. Caso esteja inclinado para um dos lados,
   o Sparki gira até ficar orientado corretamente.
*/
#include <Sparki.h> // inclui a biblioteca do Sparki
 
void setup()
{
 
}
 
void loop()
{
    float x = sparki.accelX();
    float y = sparki.accelY();
 
    // o Sparki já está apontado para baixo ou para cima?
    if ( (x < 1) && (x > -1) )
    {
      if ( y < 0 ) // se o Sparki estiver apontado para cima
      {
        sparki.moveForward();
      }
      if ( y > 0 ) // se o Sparki estiver apontado para baixo
      {
        sparki.moveBackward();
      }      
    }
    else{ // se o Sparki não estiver apontado para cima ou para baixo, faça-o girar até ficar
      if ( x > 1 ) // se estiver inclinado para a direita
      {
        sparki.moveLeft();
      }
      if ( x < -1 ) // se estiver inclinado para a esquerda
      {
        sparki.moveRight();
      }   
    }
    delay(100);
}
