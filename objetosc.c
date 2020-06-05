#include <stdio.h>
#include "objetosc.h"
#include "pola.h"

void objetosc(double x)
{
  if(x<=0)
  {
    printf("\n");
    printf("Nieprawidlowa liczba!\n");
    stop123();
    return;
  }
  printf("Szecian o krawedzi dlugosci %f ma objetosc: %f\n", x, x*x*x);
  stop123();
}
