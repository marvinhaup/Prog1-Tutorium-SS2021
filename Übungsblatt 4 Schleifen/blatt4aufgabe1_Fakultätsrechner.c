#include <stdio.h>
#include <stdlib.h>

// Programm zur Fakultätsberechnung

int main(){

    // Variable, bis zu der die Fakultät berechnet werden soll
    int fak;
    int endProdukt = 1;

    // Nutzeraufforderung und Eingabe
    printf("Bis zu welcher positiven, ganzen Zahl soll die Fakultaet berechnet werden: ");
    scanf("%d", &fak); 

    // For-Schleifen iteration bis zur Fakultäthöhe
    for(int i = 0; i < fak; i++){
        endProdukt = endProdukt * (i+1);
    }

    // Ausgabe der Fakultät
    printf("\nDie Fakultaet von %d, lautet %d", fak, endProdukt);

    return 0;
}