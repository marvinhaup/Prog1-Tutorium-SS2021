#include <stdio.h>
#include <dos.h> // Nur zum benutzen der Delay-funktion

int main() {
    int eingabe;

    // Einlesen der Eingabe
    printf("Geben Sie eine Zahl ein: ");
    scanf("%d", &eingabe);

    // Wenn Bedingung erfüllt, sage die Zahl ist gerade, ansonsten sage die Zahl ist ungerade.
    ((eingabe % 2) == 0) ? printf("\nDie Zahl %d ist gerade", eingabe) : printf("\Die Zahl %d ist ungerade\n", eingabe);

    // Dieser Code lässt die .exe datei noch 10 Sekunden nach berechnung offen
    printf("This C program will exit in 10 seconds.\n");        
    delay(10000);  

    return 0;
}