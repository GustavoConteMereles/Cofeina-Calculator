/*
  Name: Cofeina Calculator 
  Copyright: Gustavo Conte
  Author: Gustavo Conte Mereles
  Date: 14/12/16 18:06
  Description: Calculadora simples e obejtiva, ultilizando lógica simples e organizada.
*/

#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>


int main() 
{

  setlocale(LC_ALL, "Portuguese");//habilita a acentuação para o português
  system("color A");
  printf("Bem Vindo Ao Cofeina Calculator\n\n");
  printf("Ver. 1.0.0\n");
  Sleep(1500);  //Exibe mensagem de boas vindas e espera 1 segundo
 
  system("cls");
   
  system("color 7");  
  int n1;
  printf("Digite um número inteiro\n\n");
  scanf("%d", &n1);  //Declara Variável que recebe o primeiro número do usuário
  
  system("cls");
  
  int n2;
  printf("Agora digite outro\n\n");
  scanf("%d", &n2);  //Declara Variável que recebe o segundo número do usuário

  system("cls");
  /*A partir deste ponto declaramos as variáveis inteiras para as operações e resultado em seguida realizamos as operacões*/
  int soma, subt, mult;
  
  soma = n1 + n2;
  subt = n1 - n2;
  mult = n1 * n2;
  
  printf("O resultado da soma entre %d e %d é %d\n\n", n1, n2, soma);
  printf("O resultado da subtração entre %d e %d é %d\n\n", n1, n2, subt);
  printf("O resultado da mutiplicação entre %d e %d é %d\n\n", n1, n2, mult);
  
  Sleep(10000);  //Pausa do Software
  system("cls");
  printf("Presione:\n\n");
  printf("1. Realizar outra equação | 2. Informações do software | 3. Sair\n\n");
  
  system("pause");
}
