#include <stdio.h>
#include <stdlib.h>

int main()
{
    int eingabe = 5;
    printf("Wert zwischen 5 und 50 eingeben: ");
    scanf("%d", &eingabe);


    while(!(eingabe > 4 && eingabe < 51)){
        printf("\nFalscher wert, korrekter Wert eingeben:");
        scanf("%d", &eingabe);
    }
    printf("\nKorrekter eingegeben");

    return 0;
}
