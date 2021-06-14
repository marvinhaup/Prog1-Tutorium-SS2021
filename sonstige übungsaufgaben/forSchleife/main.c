#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    int count;
    printf("Anzahl eingeben");
    scanf("%d", &count);
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

    printf("\nKorrekter eingegeben");



    return 0;
}
