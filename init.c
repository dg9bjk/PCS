#include <stdio.h>
#include <stdlib.h>
#include "init.h"

int init() // Now in demo-Mode...only Show
{
  int Feedback = -1;
  
  printf("\n ---- Init-Funktion startet ---- \n");

  // Here we have Code for the Future
  sleep(3);
  Feedback = 0;
  // Code
  
  if(Feedback < 0)
      printf("\n ---- Init-Funktion error ---- \n");
  else
      printf("\n ---- Init-Funktion ready ---- \n");

  return(Feedback);
}
