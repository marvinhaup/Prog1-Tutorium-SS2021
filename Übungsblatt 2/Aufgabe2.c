// Programm zum Berechnen der Gesamtpunktezahl und dem Notendurchschnitt

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Variablen Deklarieren(Datentyp bestimmen) und Initialisieren(Startwert bestimmen)
    int a,b,c;
    float gesamtzahlGewichtet, gesamtNote;


    // Eingabeaufforderung und Nutzereingabe auf der Konsole
    printf("Eingabe der Punktezahlen pro Teilleistung");

    printf("\nTeilleistung A:");
    scanf("%d", &a);

    printf("Teilleistung B:");
    scanf("%d", &b);

    printf("Teilleistung C:");
    scanf("%d", &c);
    
    /*
    //Alternative Einlesemöglichkeit der Variablen a,b,c
    printf("\nGeben Sie die Variablen nach der folgenden Reihenfolge ein: a,b,c")
    scanf("%d,%d,%d", &a, &b, &c);
    */

    // Berechnung der gewichteten Gesamtpunkteanzahl
    gesamtzahlGewichtet = (a*0.5) + (b*0.3) + (c*0.2);


    // Berechnung der GesamtNote
    gesamtNote = 6 - (gesamtzahlGewichtet/20);


    // Ausgabe der Gesamtnote auf der Konsole, mit einer Nachkommastelle
    printf("\nDie Gesamtnote betraegt: %.1f ", gesamtNote);

    return 0;
}