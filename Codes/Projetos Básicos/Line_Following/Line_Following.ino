/* Autor(es): ArcBotics
   Source: https://arcbotics.com/lessons/sparki/
   Data: 25/08/2026

   Objetivo: Demonstrar como utilizar os sensores infravermelhos
   de linha do Sparki para detectar uma linha e fazer o robô
   acompanhá-la.
*/

/* Variáveis
   threshold: define o valor limite utilizado para diferenciar
   a linha da superfície.

   lineLeft: armazena a leitura do sensor infravermelho de linha
   esquerdo.

   lineCenter: armazena a leitura do sensor infravermelho de linha
   central.

   lineRight: armazena a leitura do sensor infravermelho de linha
   direito.
*/

/* Execução
   O programa lê continuamente os três sensores infravermelhos
   de linha. Se o sensor central detectar a linha, o Sparki se
   move para frente. Caso contrário, o robô verifica os sensores
   laterais: se o sensor esquerdo detectar a linha, vira para a
   esquerda; se o sensor direito detectar a linha, vira para a
   direita. As leituras dos sensores também são exibidas no LCD.
*/

#include <Sparki.h> // inclui a biblioteca do Sparki

void setup() 
{
}

void loop() {
  int threshold = 700;
  
  int lineLeft   = sparki.lineLeft();   // mede o sensor infravermelho esquerdo
  int lineCenter = sparki.lineCenter(); // mede o sensor infravermelho central
  int lineRight  = sparki.lineRight();  // mede o sensor infravermelho direito

  if ( lineCenter < threshold ) // se a linha estiver abaixo do sensor de linha central
  {  
    sparki.moveForward(); // move-se para frente
  }
  else{
    if ( lineLeft < threshold ) // se a linha estiver abaixo do sensor de linha esquerdo
    {  
      sparki.moveLeft(); // vira para a esquerda
    }
  
    if ( lineRight < threshold ) // se a linha estiver abaixo do sensor de linha direito
    {  
      sparki.moveRight(); // vira para a direita
    }
  }

  sparki.clearLCD(); // limpa a tela
  
  sparki.print("Line Left: "); // exibe o valor do sensor de linha esquerdo na tela
  sparki.println(lineLeft);
  
  sparki.print("Line Center: "); // exibe o valor do sensor de linha central na tela
  sparki.println(lineCenter);
  
  sparki.print("Line Right: "); // exibe o valor do sensor de linha direito na tela
  sparki.println(lineRight);
  
  sparki.updateLCD(); // exibe todas as informações escritas na tela

  delay(100); // aguarda 0,1 segundo
}
