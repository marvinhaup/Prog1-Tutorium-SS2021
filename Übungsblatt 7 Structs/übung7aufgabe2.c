#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int grosseBuchstaben;
    int laenge;
} Dummy;

Dummy countBigandLength(char[]);

int main() {
    
    char text[] = "Umwelt-Campus Birkenfeld";
    Dummy erg = countBigandLength(text);
    printf("Anzahl große Buchstaben: %d\n", erg.grosseBuchstaben);
    printf("Laenge des Textes: %d", erg.laenge);
    
    return 0;
}

Dummy countBigandLength (char arr[]){
    Dummy newDummy = {0, 0};
    for(int i = 0; arr[i] != '\0'; i++){
        if(arr[i] > 64 && arr[i] < 91){
            newDummy.grosseBuchstaben++;
        }
        newDummy.laenge++;
    }
    return newDummy;
}