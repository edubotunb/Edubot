//RGB rainbow
/* Autor(es): 
   Source: Exemplo básico do arco-íris RGB do Sparki
   Data: data do teste
  
   Objetivo: Testar o LED RGB do Sparki utilizando diferentes
   combinações de vermelho, verde e azul para reproduzir as
   principais cores do espectro visível, seguindo a sequência
   de cores do arco-íris.
  
   Testado em:
     Ex: ArduinoIDE versão x.x.x Linux/Windows 64 Bit
*/

/* Variáveis
   --não tem
*/

/* Execução
   Este programa utiliza o LED RGB localizado na parte
   traseira do Sparki para apresentar diferentes cores
   do espectro.

   O programa acende o LED nas cores vermelho, laranja,
   amarelo, verde, azul, índigo e violeta, seguindo a
   sequência tradicional das cores do arco-íris.

   Cada cor é mantida acesa durante 500 milissegundos.
   Depois de apresentar todas as cores do arco-íris,
   o programa acende o LED na cor branca e, em seguida,
   o desliga.

   Após completar todas as etapas, a função loop() reinicia
   o processo continuamente.
*/

#include <Sparki.h> // Inclui a biblioteca do Sparki

void setup()
{
}

void loop()
{ 
  sparki.RGB(RGB_RED); // Acende o LED na cor vermelha
  delay(500); // Aguarda 0,5 segundo

  sparki.RGB(RGB_ORANGE); // Acende o LED na cor laranja
  delay(500); // Aguarda 0,5 segundo
  
  sparki.RGB(RGB_YELLOW); // Acende o LED na cor amarela
  delay(500); // Aguarda 0,5 segundo
  
  sparki.RGB(RGB_GREEN); // Acende o LED na cor verde
  delay(500); // Aguarda 0,5 segundo
  
  sparki.RGB(RGB_BLUE); // Acende o LED na cor azul
  delay(500); // Aguarda 0,5 segundo
  
  sparki.RGB(RGB_INDIGO); // Acende o LED na cor índigo
  delay(500); // Aguarda 0,5 segundo

  sparki.RGB(RGB_VIOLET); // Acende o LED na cor violeta
  delay(500); // Aguarda 0,5 segundo

  sparki.RGB(RGB_WHITE); // Acende o LED na cor branca
  delay(500); // Aguarda 0,5 segundo
  
  sparki.RGB(RGB_OFF); // Desliga o LED
  delay(500); // Aguarda 0,5 segundo
}