// Control-System Main-Program
#include <stdio.h>
#include <stdlib.h>
#include "ctrl.h"

int ctrl() // Demo-Mode
{
  int Feedback = -1;
  
  printf("\n ---- Control-System startet ----\n");
  
  // Code for the Future
  sleep(10);
  Feedback = 0;
  // Code

  if(Feedback < 0)
      printf("\n ---- Controll-System failed ----\n");
  else
      printf("\n ---- Control-System stopped ----\n");
  
  
  return(Feedback);

}