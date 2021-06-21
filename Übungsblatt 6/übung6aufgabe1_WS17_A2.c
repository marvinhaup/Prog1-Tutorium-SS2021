#include <stdio.h>
#include <stdlib.h>

int countCapitals(char[]);


int main()
{
    system("chcp 1252");
    // Teilaufgabe a)
    // Bei einem char-Array steht am Ende \0

    int anzahl = countCapitals("Umwelt-Campus Birkenfeld");

    printf("\n%d Großbuchstaben!", anzahl);


    return 0;
}


int countCapitals(char arr[]){
    int i = 0;
    int zaehler = 0;
    while(arr[i] != '\0') {
        if(arr[i] > 64 && arr[i] <= 90) {
            zaehler++;
        }
        i++;
    }
    return zaehler;
}