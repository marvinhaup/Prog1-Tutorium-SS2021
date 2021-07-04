#include <stdlib.h>
#include <stdio.h>

int anzahlWoerter(char[]);

int main() {

    int anzahl = 0;
    char meineWoerter[] = "Das ist ein Test!";
    anzahl = anzahlWoerter(meineWoerter);
    printf("\nAnzahl der woerter: %d", anzahl);

    return 0;
}

int anzahlWoerter(char uebergabeWoerter[]){
    int anzahl = 1;
    int i = 0;
    while (uebergabeWoerter[i] != '\0')
    {
        if(uebergabeWoerter[i] == ' '){
            anzahl++;
        }
        i++;
    }
    return anzahl;
}