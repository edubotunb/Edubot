//LCD bitmap
/* Autor(es): 
   Source: Exemplo básico de desenho de bitmap no LCD do Sparki
   Data: data do teste
  
   Objetivo: Testar a capacidade do LCD do Sparki de exibir
   uma imagem no formato bitmap, utilizando uma matriz de
   dados que representa a imagem.
  
   Testado em:
     Ex: ArduinoIDE versão x.x.x Linux/Windows 64 Bit
*/

/* Variáveis
   sparki_image: matriz de dados que armazena as informações
   necessárias para representar a imagem de um Sparki em
   formato bitmap.

   x e y: coordenadas utilizadas pelo comando drawBitmap()
   para determinar a posição em que a imagem será desenhada
   no LCD.

   16 e 16: representam a largura e a altura da imagem,
   respectivamente, em pixels.
*/

/* Execução
   Este programa utiliza o LCD do Sparki para desenhar uma
   imagem no formato bitmap.

   A imagem é armazenada na variável sparki_image como uma
   sequência de valores em hexadecimal. Esses valores
   representam os pixels que formam a imagem.

   A cada execução do loop(), o LCD é primeiro limpo através
   do comando sparki.clearLCD().

   Em seguida, o comando sparki.drawBitmap() desenha a imagem
   na posição (20, 20) do LCD. A imagem possui 16 pixels de
   largura e 16 pixels de altura.

   Depois, o comando sparki.updateLCD() atualiza a tela para
   que o desenho seja exibido.

   O programa aguarda 1 segundo e então repete todo o processo.
*/

#include <Sparki.h> // Inclui a biblioteca do Sparki

void setup()
{
}

// Define a imagem do Sparki
// Utiliza o tipo de variável necessário para armazenar imagens
const static unsigned char __attribute__ ((progmem)) sparki_image[] = { 
  0xF0,0x08,0xFE,0x03,0x01,0x3F,0x21,0xA1,
  0xA1,0x21,0x3F,0x01,0x03,0xFE,0x08,0xF0,
  0x01,0x1A,0x27,0x20,0xE2,0x2E,0x2F,0x22,
  0x22,0x2F,0x2E,0xE2,0x20,0x27,0x1A,0x01
};

void loop()
{
  sparki.clearLCD(); // Limpa o LCD
  
  sparki.drawBitmap(20, 20, sparki_image, 16, 16);
  // Desenha a imagem na posição (20,20), com 16x16 pixels
  
  sparki.updateLCD(); // Atualiza o LCD para exibir o desenho
  
  delay(1000); // Aguarda 1 segundo
}