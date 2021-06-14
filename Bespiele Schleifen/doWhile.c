#include <stdio.h>
#include <stdlib.h>

int main() {

    int count;
    printf("\nAnzahl der Durchlaeufe eingeben: ");
    scanf("%d", &count);

    int i = 0;
    do{
        printf("\nDurchlauf Nummer: %d", i+1);
        i++;
    } while(i < count);

    return 0;
}