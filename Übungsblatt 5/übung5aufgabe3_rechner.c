#include <stdio.h>
#include <stdlib.h>

float berechne(float, float);

int main()
{
    system("chcp 1252");
    float zahl1, zahl2;
    printf("Geben Sie die erste Zahl ein: ");
    scanf("%f", &zahl1);
    printf("Geben Sie die zweite Zahl ein: ");
    scanf("%f", &zahl2);

    float erg = berechne(zahl1, zahl2);
    printf("\n\nErgebnis: %.2f", erg);

}

float berechne(float zahl1, float zahl2) {

    int eingabe;
    printf("Welche Operation soll durchgeführt werden?\n");
    printf("1.) Addition\n");
    printf("2.) Subtraktion\n");
    printf("3.) Multiplikation\n");
    printf("4.) Division\n");
    printf("Eingabe: ");
    scanf("%d", &eingabe);

    float erg;

    switch(eingabe) {
    case 1:
       erg = zahl1 + zahl2;
       break;
    case 2:
       erg = zahl1 - zahl2;
       break;
    case 3:
       erg = zahl1 * zahl2;
       break;
    case 4:
       erg = zahl1 / zahl2;
       break;
    default:
        printf("\nFalsche Eingabe");
    }


    return erg;
}