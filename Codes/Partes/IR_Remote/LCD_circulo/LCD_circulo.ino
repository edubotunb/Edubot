//LCD círculo 
/* Autor(es): 
   Source: Exemplo básico de desenho de dois círculos no LCD do Sparki
   Data: data do teste
  
   Objetivo: Testar as funções de desenho do LCD do Sparki,
   desenhando dois círculos na tela: um círculo pequeno sem
   preenchimento e um círculo maior preenchido.
  
   Testado em:
     Ex: ArduinoIDE versão x.x.x Linux/Windows 64 Bit
*/

/* Variáveis
   --não tem
*/

/* Execução
   Este programa utiliza o LCD do Sparki para desenhar dois
   círculos em posições diferentes da tela.

   Inicialmente, o comando sparki.clearLCD() limpa o conteúdo
   do LCD.

   Em seguida, o comando sparki.drawCircle() desenha um círculo
   pequeno sem preenchimento na posição (10,10), com raio de
   5 pixels.

   Depois, o comando sparki.drawCircleFilled() desenha um círculo
   maior e preenchido na posição (90,40), com raio de 20 pixels.

   O comando sparki.updateLCD() atualiza a tela para que os
   desenhos sejam exibidos.

   Por fim, o programa aguarda 1 segundo e repete todo o
   processo continuamente.
*/

#include <Sparki.h> // Inclui a biblioteca do Sparki

void setup()
{
}

void loop()
{
    sparki.clearLCD(); // Limpa o LCD
    
    sparki.drawCircle(10,10,5);
    // Desenha um círculo pequeno sem preenchimento na posição (10,10)
    // com raio de 5 pixels
    
    sparki.drawCircleFilled(90,40,20);
    // Desenha um círculo grande preenchido na posição (90,40)
    // com raio de 20 pixels
    
    sparki.updateLCD(); // Atualiza o LCD para exibir os desenhos
    
    delay(1000); // Aguarda 1 segundo
}