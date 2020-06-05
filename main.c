#include <stdio.h>
#include "pola.h"
#include "objetosc.h"

int main()
{
  int prog = 1;
  while(prog==1){
    unsigned figura = 0;
    unsigned wybor;
    printf("Witaj w programie!\n");
    printf("Wybierz figure: \n");
    printf("  1. Kwadrat\n");
    printf("  2. Szescian\n");
    printf("Lub: 0 - Aby wyjsc z programu \n");
    printf("  Wybor: ");
    scanf("%i", &wybor);
    printf("\n");
    switch(wybor){
      case 0:
      {
        printf("Wychodzisz z programu\n");
        prog = 0;
        break;
      }
      case 1:
      {
        figura = 1;
        float a;
        printf("Wybrales kwadrat\n");
        printf("Podaj dlugosc boku: ");
        scanf("%f", &a);
        pola(a, figura);
        break;
      }
      case 2:
      {
        figura = 2;
        float a;
        printf("Wybrales szescian\n");
        printf("Podaj dlugosc krawedzi: ");
        scanf("%f", &a);
        pola(a, figura);
        if(a<=0)break;
        objetosc(a);
        break;
      }
      default:
      {
        printf("Nieprawidlowy wybor!\n\n");
        break;
      }
    }
  }
  return 0;
}
