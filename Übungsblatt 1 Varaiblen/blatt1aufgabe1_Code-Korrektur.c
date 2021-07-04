#include <stdio.h>
#include <stdlib.h>

int main()
{
    float zahl1, zahl2;
    float erg; //int statt float
 
    printf("Geben Sie die erste Zahl ein: "); //Anführungszeichen
    scanf("%f", &zahl1); // & vergessen UND %d statt %f
    printf("Geben Sie die zweite Zahl ein: ");
    scanf("%f", &zahl2); // & vergessen
 
    erg = zahl1 * zahl2;
 
    printf("Ergebnis: %.2f", erg); //Zur Ausgabe wird printf() benötigt
    
    return 0;
}
