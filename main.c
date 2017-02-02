/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: jens
 *
 * Created on 2. Februar 2017, 15:57
 */

#include "main.h"

/*
 * 
 */
void displayhelp()
{
    ;
}

/*
 * 
 */
int main(int argc, char** argv) {

    int Feedback   = -1; // Feedback to System
    int MajorVers  = 0;  // Versionnumbers
    int MinorVers  = 0;
    int RevVers    = 0;
    int BuildVers  = 0;
    int initback   = -1; // Feedback Init    -9 ...0... 9
    int ctrlback   = -1; // Feedback Control -9 ...0... 9
    int cleanback  = -1; // Feedback Cleanup -9 ...0... 9
    struct Cfg Config;
   
    printf("\n");
    printf("\n PCS System Version %d.%d.%d.%d",MajorVers,MinorVers,RevVers,BuildVers);
    printf("\n");
    
    if(argc < 2)
    {
        ;
    }
    else
    {
        displayhelp();
    }
        
    // call Init-Funktion
    initback = init(&Config);
    printf("\n");
    
    // call Control-Funktion
    ctrlback = ctrl();
    printf("\n");
    
    // call Cleanup-Funktion
    cleanback = clean();
    printf("\n");
    
    Feedback = (initback * 100) + (ctrlback *10) + cleanback ;
    printf("\n");

    return (Feedback);
}
    