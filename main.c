#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main()
{
    int Feedback   = -1; // Feedback to System
    int MajorVers  = 0;  // Versionnumbers
    int MinorVers  = 0;
    int RevVers    = 0;
    int BuildVers  = 0;
    int initback   = -1; // Feedback Init    -9 ...0... 9
    int ctrlback   = -1; // Feedback Control -9 ...0... 9
    int cleanback  = -1; // Feedback Cleanup -9 ...0... 9

    printf("\n");
    printf("\n PCS System Version %d.%d.%d.%d",MajorVers,MinorVers,RevVers,BuildVers);
    printf("\n");
    
    // call Init-Funktion
    initback = init();
    printf("\n");
    
    // call Control-Funktion
    ctrlback = ctrl();
    printf("\n");
    
    // call Cleanup-Funktion
    cleanback = clean();
    printf("\n");
    
    Feedback = (initback * 100) + (ctrlback *10) + cleanback ;

    printf("\n");
    
    return(Feedback);
}