#include <stdio.h>
#include <stdlib.h>
#include "clean.h"

int clean()
{
  int Feedback = -1;
  
  printf("\n ---- Cleanup-Funktion started ---- \n");

  //Code for the Future
  sleep(3);
  Feedback = 0;
  // Code

  if(Feedback < 0)
      printf("\n ---- Cleanup failed .. please Restart Computer! ---- \n");
  else
      printf("\n ---- Cleanup finished ---- \n");
      
  
  return(Feedback);
}