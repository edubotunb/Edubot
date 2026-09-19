//RGB fading
/* Autor(es): 
   Source: Exemplo básico de transição de cores do LED RGB do Sparki
   Data: data do teste
  
   Objetivo: Testar o LED RGB do Sparki realizando transições
   graduais de brilho nas cores vermelho, verde e azul.
   O programa aumenta e diminui progressivamente a intensidade
   de cada cor.
  
   Testado em:
     Ex: ArduinoIDE versão x.x.x Linux/Windows 64 Bit
*/

/* Variáveis
   time: define o tempo de espera, em milissegundos, entre
         cada alteração na intensidade do LED.

   i: variável utilizada pelos laços for para controlar
      progressivamente a intensidade das cores.
*/

/* Execução
   Este programa utiliza o LED RGB do Sparki para realizar
   transições graduais de intensidade nas cores vermelho,
   verde e azul.

   Primeiro, a intensidade da cor vermelha aumenta
   gradualmente de 0 até 99. Em seguida, sua intensidade
   diminui gradualmente de 100 até 1.

   Depois, o mesmo processo é realizado com a cor verde:
   sua intensidade aumenta gradualmente e depois diminui.

   Por fim, o processo é repetido com a cor azul.

   A variável "time" determina o intervalo entre cada
   alteração de intensidade. Como seu valor é 3, o programa
   aguarda 3 milissegundos a cada alteração.

   Após a conclusão das três cores, a função loop() reinicia
   todo o processo continuamente.
*/

#include <Sparki.h> // Inclui a biblioteca do Sparki

void setup()
{
}

int time = 3; // Define o intervalo entre as alterações de brilho

void loop()
{ 
  // Aumenta gradualmente o brilho da cor vermelha
  for(int i=0; i<100; i++)
  {
    sparki.RGB(i,0,0);
    delay(time);
  }

  // Diminui gradualmente o brilho da cor vermelha
  for(int i=100; i>0; i--)
  {
    sparki.RGB(i,0,0);
    delay(time);
  }

  // Aumenta gradualmente o brilho da cor verde
  for(int i=0; i<100; i++)
  {
    sparki.RGB(0,i,0);
    delay(time);
  }

  // Diminui gradualmente o brilho da cor verde
  for(int i=100; i>0; i--)
  {
    sparki.RGB(0,i,0);
    delay(time);
  }

  // Aumenta gradualmente o brilho da cor azul
  for(int i=0; i<100; i++)
  {
    sparki.RGB(0,0,i);
    delay(time);
  }

  // Diminui gradualmente o brilho da cor azul
  for(int i=100; i>0; i--)
  {
    sparki.RGB(0,0,i);
    delay(time);
  }
}