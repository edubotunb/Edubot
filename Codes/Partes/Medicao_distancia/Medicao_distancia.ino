//Medição de distância sensor ultrasônico
/* Autor(es): 
   Source: Exemplo básico do sensor ultrassônico do Sparki
   Data: data do teste
  
   Objetivo: Testar o funcionamento do sensor ultrassônico
   do Sparki, medindo a distância até um objeto e exibindo
   o valor medido no LCD. O robô também emite um sinal sonoro
   quando um objeto está a menos de 10 centímetros de distância.
  
   Testado em:
     Ex: ArduinoIDE versão x.x.x Linux/Windows 64 Bit
*/

/* Variáveis
   cm: armazena a distância medida pelo sensor ultrassônico,
       em centímetros.
*/

/* Execução
   Este programa utiliza o sensor ultrassônico do Sparki para
   medir a distância entre o robô e um objeto à sua frente.

   Inicialmente, o LCD é limpo através do comando
   sparki.clearLCD().

   Em seguida, o comando sparki.ping() realiza a medição da
   distância e armazena o resultado na variável "cm".

   O valor da distância é exibido no LCD utilizando os comandos
   sparki.print() e sparki.println().

   O programa verifica se o valor medido é diferente de -1.
   Esse valor indica que o sensor não conseguiu realizar uma
   medição válida, normalmente porque o objeto está muito
   próximo ou muito distante.

   Caso a medição seja válida e a distância seja menor que
   10 centímetros, o comando sparki.beep() faz o Sparki emitir
   um sinal sonoro.

   Por fim, o comando sparki.updateLCD() atualiza a tela e o
   programa aguarda 100 milissegundos antes de realizar uma
   nova medição.
*/

#include <Sparki.h> // Inclui a biblioteca do Sparki

void setup()
{
}

void loop()
{
    sparki.clearLCD(); // Limpa o LCD
    
    int cm = sparki.ping(); // Mede a distância com o sensor ultrassônico
    
    sparki.print("Distance: "); 
    sparki.print(cm); // Exibe a distância medida
    sparki.println(" cm"); 
    
    if(cm != -1) // Verifica se a distância medida é válida
    { 
        if(cm < 10) // Verifica se o objeto está a menos de 10 cm
        {
            sparki.beep(); // Emite um sinal sonoro
        }
    }
    
    sparki.updateLCD(); // Atualiza o LCD
    delay(100); // Aguarda 0,1 segundo (100 milissegundos)
}