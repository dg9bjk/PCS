/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "main.h"

int init(struct Cfg *Config) // Now in demo-Mode...only Show
{
  int Feedback = -1;
  
  printf("\n ---- Init-Funktion startet ---- \n");

  strcpy(Config->InfoPath,"/opt/pcs/info/");
  strcpy(Config->LogPath ,"/opt/pcs/log/");
  strcpy(Config->VisuPath,"/opt/pcs/visu/");
  strcpy(Config->WebPath ,"/opt/pcs/web/");
  // Active Clients
  Config->Clt_Cnt = 0;
  // Serverport for Remoteaccess
  Config->Svr_Port = 22774;
  // Init-Pointer for Client-Config
  Config->Clt_Ptr = malloc(sizeof(struct Clt_Conf));
  Config->Clt_Ptr->next_Clt_Conf = 0;
  Config->Clt_Ptr->pos           = 0;
  
  sleep(3);
  Feedback = 0;
  // Code
  
  if(Feedback < 0)
      printf("\n ---- Init-Funktion error ---- \n");
  else
      printf("\n ---- Init-Funktion ready ---- \n");

  return(Feedback);
}