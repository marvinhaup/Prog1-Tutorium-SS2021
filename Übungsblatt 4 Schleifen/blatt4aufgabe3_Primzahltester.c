#include <stdio.h>
#include <stdlib.h>

/*
    Programm zur Prüfung der Primzahlbedingung(eine Zahl ist dann Primzahl, wenn sie nur durch eins und sich selbst teilbar ist.) zu einer vom Nutzer eingegebenen Zahl
*/
 
int main() {
    
    // Variablen deklarieren und initialisieren
    int t = 0;  //  teilbarkeitsvariable
    int i =1;   //  Schleifen-Laufvariable
    int n;      //  vom Nutzer eingegebene, zu prüfende Zahl

    // Nutereingabe, welche Zahl soll geprüft werden?
    printf("Zu pruefende Primzahl eingeben: ");
    scanf("%d", &n);

    // Prüfung ob eingegebene Zahl durch Laufvariable i teilbar ist
    while (i <= n) {
        if ((n % i) == 0)
        {
            t = t + 1;  // Wenn Teilbar, inkrementiere t
        }
        i = i + 1; // erhöhe die Laufvariable um 1
    }

    /*  Prüfe wie häufig es möglich war, die eingegebene Zahl 
        durch die Laufvariable zu teilen */
    if (t == 2) { // War es genau zweimal möglich die Zahl durch die Laufvariable zu teilen?
        printf("\nDie Zahl %d ist eine Primzahl."); // 
        /*
        Wenn ja, ist die Primzahlbedingung erfüllt
        */
    }
    else{
        printf("\nDie Zahl %d ist keine Primzahl."); // 
        /*
            Wenn nein -> eingegebene Zahl war häufiger als durch 1 oder sich selbst teilbar -> keine Primzahl
        */
    }

    return 0;
}