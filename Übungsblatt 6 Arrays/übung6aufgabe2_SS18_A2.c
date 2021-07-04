#include <stdio.h>
#include <stdlib.h>

int bestimmeLaenge(char[]);

int main()
{
    char text[30] = "Umwelt-Campus Birkenfeld";
    int laenge = bestimmeLaenge(text);
    printf("Die Laenge ist: %d", laenge);
    return 0;
}

int bestimmeLaenge(char arr[]){
    int i = 0;
    int zaehler = 0;
    while(arr[i] != '\0'){
        zaehler++;
        i++;
    }
    return zaehler;
}