#include <stdio.h>
#include <stdlib.h>

int main()
{   
    // Variablen anlegen
    int iq; // kein initialwert notwendig, da die Variable überschrieben wird

    // Nutzerabfrage über die Konsole
    printf("\nGeben Sie ihren IQ-Score ein: ");
    scanf("%d", &iq);
    
    //Entscheidungsbaum
    if (iq < 85){           // Erste Ebene der If-Verzweigung
        printf("\nDer IQ-Wert liegt unter dem Durchschnitt.");
    }
    else if (iq <= 115){    // Erste Ebene der If-Verzweigung
        printf("\nDer IQ-Wert liegt im Normalbereich, ");
        if (iq <= 105){      // Zweite Ebene der If-Verzweigung
            printf("im Durchschnitt.");   
        } 
        else{               // Zweite Ebene der If-Verzweigung
            printf("leicht ueber dem Durchschnitt.");
        }
    }
    else{                   // Erste Ebene der If-Verzweigung
        printf("\nDer IQ-Wert liegt ueber dem Normalbereich und ist ");
        if (iq <= 130){      // Zweite Ebene der If-Verzweigung
            printf("den begabten zuzuordnen.");
        }
        else{               // Zweite Ebene der If-Verzweigung
            printf("den hochbegabten zuzuordnen.");
        }
    }

    return 0;
}