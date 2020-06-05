#include <stdio.h>
#include "pola.h"

void stop123()
{
  printf("Wprowadz 0 i nacisnij enter, aby kontynuowac...: ");
  int c = 1;
  while(c!=0){scanf("%i", &c);}
  printf("\n");
}

void pola(double x, unsigned figura)
{
  if(x<=0)
  {
    printf("\n");
    printf("Nieprawidlowa liczba!\n");
    stop123();
    return;
  }
  switch(figura)
  {
    case 1:
    {
      printf("\n");
      printf("Kwadrat o boku dlugosci %f ma pole powierzchni: %f\n", x, x*x);
      stop123();
      break;
    }
    case 2:
    {
      printf("\n");
      printf("Szecian o krawedzi dlugosci %f ma pole powierzchni calkowitej: %f\n", x, 6*x*x);
      break;
    }
  }
}
