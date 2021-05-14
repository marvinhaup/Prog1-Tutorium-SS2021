#include <stdio.h>


int main() {
    int eingabe;

    // Einlesen der Eingabe
    printf("Geben Sie eine Zahl ein: ");
    scanf("%d", &eingabe);

    // Bedingung
    ((eingabe % 2) == 0) ? printf("\nDie Zahl %d ist gerade", eingabe) : printf("\Die Zahl %d ist ungerade\n", eingabe);

    return 0;
}