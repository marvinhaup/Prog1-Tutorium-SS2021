#include <stdio.h>
#include <stdlib.h>

int main()
{
    int iq;

    printf("Geben Sie ihre IQ-Score ein");
    scanf("%d", &iq);
    
    if( iq < 85){
        printf("\nDer IQ-Wert liegt unter dem Durchschnitt.");
    }
    else if( iq <= 115){
        printf("\n liegt im Normalbereich");
        if( iq < 105){
            printf("im normalen Durchschnitt");    
        else{
            printf("leicht über dem Durchschnitt");
        }
    }
    else{
        if( iq < 130){
            printf("überdurchschnittlich");
        }
        else{
            printf("hochintelligent");
        }
    }

    return 0;
}