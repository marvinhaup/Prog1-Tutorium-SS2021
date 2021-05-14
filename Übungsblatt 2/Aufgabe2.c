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


    // Berechnung der gewichteten Gesamtpunkteanzahl
    gesamtzahlGewichtet = (a*0.5) + (b*0.3) + (c*0.2);


    // Berechnung der GesamtNote
    gesamtNote = (-gesamtzahlGewichtet/20) + 6;

    printf(" %d %d %d %f", a, b, c, gesamtzahlGewichtet);
    // Ausgabe der Gesamtnote auf der Konsole 
    printf("\nDie Gesamtnote betraegt: %.1f ", gesamtNote);

    return 0;
}