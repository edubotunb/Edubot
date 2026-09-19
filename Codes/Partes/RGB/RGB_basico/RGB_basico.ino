//RGB básico
/* Autor(es): 
   Source: Exemplo básico do teste do LED RGB do Sparki
   Data: data do teste
  
   Objetivo: Testar o funcionamento do LED RGB do Sparki,
   utilizando as cores vermelho, verde, azul, branco e
   desligado. O programa também demonstra como controlar
   a intensidade de cada uma das três cores.
  
   Testado em:
     Ex: ArduinoIDE versão x.x.x Linux/Windows 64 Bit
*/

/* Variáveis
   --não tem
*/

/* Execução
   Este programa utiliza o LED RGB localizado na parte
   traseira do Sparki para testar diferentes cores.

   O LED RGB é formado pelas cores vermelho (R), verde (G)
   e azul (B). A intensidade de cada cor pode variar de
   0 (desligada) até 100 (intensidade máxima).

   Inicialmente, o comando sparki.RGB(100,0,0) acende o LED
   na intensidade máxima da cor vermelha. O programa aguarda
   500 milissegundos e, em seguida, acende a cor verde.

   Depois, o programa acende a cor azul e, posteriormente,
   utiliza RGB_WHITE para acender o LED na cor branca.

   Por fim, o comando RGB_OFF desliga o LED.

   Cada cor permanece acesa durante 500 milissegundos.
   Após completar todas as etapas, a função loop() reinicia
   o processo continuamente.
*/

#include <Sparki.h> // Inclui a biblioteca do Sparki

void setup()
{
}

void loop()
{
  sparki.RGB(100,0,0); // Acende o LED na intensidade máxima do vermelho
  delay(500); // Aguarda 0,5 segundo (500 milissegundos)

  sparki.RGB(0,100,0); // Acende o LED na intensidade máxima do verde
  delay(500); // Aguarda 0,5 segundo

  sparki.RGB(0,0,100); // Acende o LED na intensidade máxima do azul
  delay(500); // Aguarda 0,5 segundo

  sparki.RGB(RGB_WHITE); // Acende o LED na cor branca
  delay(500); // Aguarda 0,5 segundo

  sparki.RGB(RGB_OFF); // Desliga o LED
  delay(500); // Aguarda 0,5 segundo
}