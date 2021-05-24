#include <stdio.h>
#include <stdlib.h>

int main() {

    // Variablen anlegen
    float temperatur;
    int eingabe;
    float ergebnis;

    // Nutzeraufforderung zur Temperatureingabe in Celsius
    printf("Geben Sie die Temperatur in Celsius ein: ");
    scanf("%f", &temperatur);

    // Auswahlmöglichkeiten für die Umwandlung
    printf("\nIn welche Einheit?\n\n");
    printf("***** Einheiten *****\n");
    printf("1) Fahrenheit\n");
    printf("2) Kelvin\n");
    printf("3) Rankine\n");
    printf("*********************\n");

    // Auswahl der Umwandlungsart
    printf("Eingabe: ");
    scanf("%d", &eingabe);

    // Auswerten der Variable eingabe, dementsprechend Umwandlung in andere Einheit
    //Anschließend Ausgabe des Ergebnisses auf der Konsole
    switch (eingabe)
    {
    case 1:
        ergebnis = (temperatur * 1.8 + 32);
        printf("\nErgebnis in Fahrenheit: %.2f Grad", ergebnis);
        break;
    case 2:
        ergebnis = temperatur + 273.15;
        printf("\nErgebnis in Kelvin: %.2f Grad", ergebnis);
        break;
    case 3:
        ergebnis = (temperatur + 273.15) * 1.8;
        printf("\nErgebnis in Rankine: %.2f Grad", ergebnis);
        break;
    default:
        printf("\nüngültige Eingabe"); // falls keine gültige Eingabe(1,2 oder 3) erfolgt ist
        break;
    }

    return 0;
}