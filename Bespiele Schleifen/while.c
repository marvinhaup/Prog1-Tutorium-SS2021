#include <stdio.h>
#include <stdlib.h>

int main() {

    /*
    int laufvariable = 0;
    while (laufvariable < 10){
        printf("Laufvariablenwert: %d", laufvariable);
        laufvariable++;
    }
    */
    int alter = 0;
    for(int i = 0; i < 5; i++) {
        printf("\nGeben Sie ihr alter ein(5-100):");
        scanf("%d", &alter);
        if(alter > 4 && alter < 101){
            break;
        }
        else{
            i--;
            printf("\nFalsche Eingabe");
        }
        printf("\nWert der Laufvariable: %d", i);
    }


    return 0;
}