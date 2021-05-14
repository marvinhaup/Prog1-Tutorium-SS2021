#include <stdio.h>


int main() {
    int eingabe;

    printf("Geben Sie eine Zahl ein: ");
    scanf("%d", &eingabe);

    ((eingabe % 2) == 0) ? printf("\nDie Zahl %d ist gerade", eingabe) : printf("\Die Zahl %d ist ungerade\n", eingabe);

    return 0;
}