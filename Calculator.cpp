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
#include "inicio.h"

int main() 
{
  setlocale(LC_ALL, "Portuguese");  //habilita a acentua��o para o portugu�s
  system("color A");
  printf("                   Bem Vindo Ao Cofeina Calculator");
  Sleep(1600);  //Exibe mensagem de boas vindas e espera 1 segundo
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
  
  printf("%d + %d = %d\n\n", n1, n2, soma);
  printf("%d - %d = %d\n\n", n1, n2, subt);
  printf("%d x %d = %d\n\n", n1, n2, mult);
  
  Sleep(800);  //Pausa do Software
  
  int opcao;  //Menu Funcional
  printf("Presione:\n");
  printf("1. Relizar outra equa��o | 2. Sobre o software | 3. Sair do programa\n\n");
  
  scanf("%d", &opcao);  //Obtem a escolha do usu�rio e armazena na variavel (opcao)
  if (opcao==1)
  {
  inicio();
  }
  if (opcao==2)  //Algoritmo da fun��o 2
  { 
  system("cls"); 
  system("color A");                        
  printf("      CCCCC  OOOOO  FFFFF  EEEEE  II  NN    N  AAAAA\n");
  printf("      C      O   O  F      E      II  N N   N  A   A\n");
  printf("      C      O   O  F      E      II  N  N  N  A   A\n");
  printf("      C      O   O  FFF    EEEEE  II  N  N  N  A A A\n");
  printf("      C      O   O  F      E      II  N  N  N  A   A\n");
  printf("      C      O   O  F      E      II  N  N N   A   A\n");
  printf("      CCCCC  OOOOO  F      EEEEE  II  N   N    A   A  Ver. 0.1.4.7\n\n\n");
  printf("Cofeina Calculator � um software open-source desenvolvido com C++\n");
  printf("livre para implementa��es p�blicas, e sem fins lucrativos.\n\n");
  printf("Vers�o 0.1.4.7, Build 1 - 17/12/2016\n\n");
  printf("Este software � fornecido sem garantia e pode ser reditribu�do \n");
  printf("trabalhos derivados devem ser acompanhados da licen�a Apache 2.0\n\n");
  printf("Para saber mais visite - http://www.apache.org/licenses/LICENSE-2.0\n\n\n");
  printf("Contribuintes: Gustavo C.\n\n");
  Sleep(120000);
  }
  if (opcao==3)  //Algoritmo da fun��o 3    
  system("exit");
}
