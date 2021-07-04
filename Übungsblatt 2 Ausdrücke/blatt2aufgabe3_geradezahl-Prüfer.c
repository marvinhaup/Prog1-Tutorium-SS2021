#include <stdio.h>


int main() {
    int eingabe;

    // Einlesen der Eingabe
    printf("Geben Sie eine Zahl ein: ");
    scanf("%d", &eingabe);

    // Wenn Bedingung erfüllt, sage die Zahl ist gerade, ansonsten sage die Zahl ist ungerade.
    ((eingabe % 2) == 0) ? printf("\nDie Zahl %d ist gerade", eingabe) : printf("\Die Zahl %d ist ungerade\n", eingabe);

    

    return 0;
}