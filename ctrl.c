/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "main.h"

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