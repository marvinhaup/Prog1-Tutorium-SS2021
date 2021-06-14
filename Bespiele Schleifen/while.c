#include <stdio.h>
#include <stdlib.h>

int main() {

    int count;
    printf("\nAnzahl der Durchlaeufe eingeben: ");
    scanf("%d", &count);


    int laufvariable = 0;
    while (laufvariable < count){
        printf("Laufvariablenwert: %d", laufvariable);
        laufvariable++;
    }




    return 0;
}