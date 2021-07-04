#include <stdio.h>
#include <math.h>

int main() {
 
    // Deklarieren und Initialisieren der benötigten Variablen
    // Deklarieren -> Datentyp wählen z.B. int, float, char, …
    // Initialisieren -> Wert zuweisen z.B. int:3, float:56.4, char:'c'
 
    float studentenErsteParty = 64;
    float kistenErsteParty = 22;
    float trinkrate;
    float studentenZweiteParty;
    float kistenZweiteParty;
    int kistenZweitePartyInt;
 
 
    // Nutzerabfrage zur Anzahl der Studenten mit Hilfe der Konsole
 
    printf("Wie viele Studenten kommen?\n");
    scanf("%f", &studentenZweiteParty);
 
 
    // Berechnungen
 
    trinkrate = kistenErsteParty / studentenErsteParty;
    kistenZweiteParty = trinkrate * studentenZweiteParty;
    kistenZweitePartyInt = ceil(kistenZweiteParty);
 
 
    // Ausgabe der Ergebnisse
 
    // genaue Ausgabe -> float ungerundet
    printf("Es werden %f Kisten benötigt\n", kistenZweiteParty);
    // aufgerundete Ausgabe -> zu int konvertiert
    printf("Es werden %d Kisten benötigt", kistenZweitePartyInt);
 
    return 0;
}
