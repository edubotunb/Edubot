// LCD pixels
/* Autor(es): 
   Source: Exemplo básico de desenho de pixels no LCD do Sparki
   Data: data do teste
  
   Objetivo: Testar a função de desenho de pixels do LCD
   do Sparki, utilizando pontos individuais para formar
   uma pequena carinha sorridente.
  
   Testado em:
     Ex: ArduinoIDE versão x.x.x Linux/Windows 64 Bit
*/

/* Variáveis
   --não tem
*/

/* Execução
   Este programa utiliza o LCD do Sparki para desenhar uma
   pequena carinha sorridente no canto superior esquerdo
   da tela.

   Inicialmente, o comando sparki.clearLCD() limpa o conteúdo
   do LCD.

   Em seguida, o comando sparki.drawPixel() é utilizado para
   desenhar cada ponto individualmente.

   Quatro pixels são utilizados para formar o olho esquerdo
   e outros quatro pixels são utilizados para formar o olho
   direito.

   Depois, oito pixels são utilizados para formar o sorriso,
   posicionados de maneira a criar o formato curvado da boca.

   O comando sparki.updateLCD() atualiza a tela para exibir
   todos os pixels desenhados.

   Por fim, o programa aguarda 1 segundo e repete o processo
   continuamente.
*/

#include <Sparki.h> // Inclui a biblioteca do Sparki

void setup()
{
}

void loop()
{
    sparki.clearLCD(); // Limpa o LCD
    
    // Desenha uma carinha sorridente no canto superior esquerdo
    
    // Olho esquerdo
    sparki.drawPixel(4, 4);
    sparki.drawPixel(4, 5);
    sparki.drawPixel(5, 4);
    sparki.drawPixel(5, 5);
    
    // Olho direito
    sparki.drawPixel(10, 4);
    sparki.drawPixel(10, 5);
    sparki.drawPixel(11, 4);
    sparki.drawPixel(11, 5);

    // Sorriso
    sparki.drawPixel(4, 8);
    sparki.drawPixel(5, 9);
    sparki.drawPixel(6, 10);
    sparki.drawPixel(7, 11);
    sparki.drawPixel(8, 11);
    sparki.drawPixel(9, 10);
    sparki.drawPixel(10, 9);
    sparki.drawPixel(11, 8);  

    sparki.updateLCD(); // Atualiza o LCD para exibir o desenho
    
    delay(1000); // Aguarda 1 segundo
}