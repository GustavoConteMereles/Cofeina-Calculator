/*
  Name: Cofeina Calculator 
  Copyright: Gustavo Conte
  Author: Gustavo Conte Mereles
  Date: 14/12/16 18:06
  Description: Calculadora simples e obejtiva, ultilizando l�gica simples e organizada.
*/

#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>


int main() 
{

  setlocale(LC_ALL, "Portuguese");//habilita a acentua��o para o portugu�s
  system("color A");
  printf("Bem Vindo Ao Cofeina Calculator\n\n");
  printf("Ver. 1.0.0\n");
  Sleep(1500);  //Exibe mensagem de boas vindas e espera 1 segundo
 
  system("cls");
   
  system("color 7");  
  int n1;
  printf("Digite um n�mero inteiro\n\n");
  scanf("%d", &n1);  //Declara Vari�vel que recebe o primeiro n�mero do usu�rio
  
  system("cls");
  
  int n2;
  printf("Agora digite outro\n\n");
  scanf("%d", &n2);  //Declara Vari�vel que recebe o segundo n�mero do usu�rio

  system("cls");
  /*A partir deste ponto declaramos as vari�veis inteiras para as opera��es e resultado em seguida realizamos as operac�es*/
  int soma, subt, mult;
  
  soma = n1 + n2;
  subt = n1 - n2;
  mult = n1 * n2;
  
  printf("O resultado da soma entre %d e %d � %d\n\n", n1, n2, soma);
  printf("O resultado da subtra��o entre %d e %d � %d\n\n", n1, n2, subt);
  printf("O resultado da mutiplica��o entre %d e %d � %d\n\n", n1, n2, mult);
  
  Sleep(2000);  //Pausa do Software
  int variavel;
  variavel = getch();
  switch(variavel){
  
  case '1': execute isso;break;
  case '2': execute aquilo;break;
  default: n�o execute nada;break;
  
  system("pause");
  system("cls");
    
  printf("ol�");
  Sleep(5000);
  return 0;
}
