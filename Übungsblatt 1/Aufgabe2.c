#include <stdio.h>
#include <stdlib.h>

int main() {
 
    // Deklarieren und Initialisieren der benötigten Variablen
    // Deklarieren -> Datentyp wählen z.B. int, float, char, …
    // Initialisieren -> Wert zuweisen z.B. int:3, float:56.4, char:'c'
 
    int geschwindigkeit;
    float anhalteweg;
    float reaktionsweg;
    float bremsweg;
 
 
    // Nutzerabfrage zur aktuellen Geschwindigkeit des Fahrzeugs
 
    printf("Geben Sie ihre aktuelle Geschwindigkeit ein: ");
    scanf("%d", &geschwindigkeit);
 
 
    // Berechnungen
 
    reaktionsweg = ((geschwindigkeit * 3) / 10.0);
    bremsweg = ((geschwindigkeit * geschwindigkeit) / 100.0);
    anhalteweg = reaktionsweg + bremsweg;
 
 
    // Ausgabe der Ergebnisse
 
    // genaue Ausgabe als float
 
    printf("Der Anhalteweg ist gleich: %.2f", anhalteweg);
    
    return 0;
}
