#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[15];
    int preis;
    int gewicht;
} Gegenstand;

typedef struct {
    int maxGewicht;
    Gegenstand inhalt[10];
    int anzahl;
} Rucksack;

typedef struct {
    char name[25];
    Rucksack rucksack;
    int anzahlMuenzen;
} Spielfigur;

Spielfigur kaufeGegenstand(Spielfigur, Gegenstand);
Spielfigur verkaufeGegenstand(Spielfigur, int);


int main() {

    Gegenstand heiltrank = {"Heiltrank", 20, 5};
    Gegenstand schwert = {"Schwert", 55, 12};
    Gegenstand zauberstab = {"Zauberstab", 60, 7};
    Rucksack rucksack = {25, {schwert, heiltrank}, 2};

    Spielfigur merlin = {"Merlin", rucksack, 75};

    merlin = kaufeGegenstand(merlin, zauberstab);

    return 0;
}

Spielfigur kaufeGegenstand(Spielfigur figur, Gegenstand ggst){
    if (figur.anzahlMuenzen >= ggst.preis){
        if ( (berechneGewicht(figur.rucksack) + ggst.gewicht) <= figur.rucksack.maxGewicht ){
            if (figur.rucksack.anzahl < 10){
                figur.rucksack = addGegenstand(figur.rucksack, ggst);
                figur.anzahlMuenzen -= ggst.preis;
                printf("\nGegenstand %s wurde %s hinzugefuegt.", ggst.name, figur.name);
                return figur;
            }
        }
    }
    printf("\nGegenstand %s wurde %s nicht hinzugefuegt.", ggst.name, figur.name);
    return figur;
}

Spielfigur verkaufeGegenstand(Spielfigur figur, int stelleGgst){
    if(figur.rucksack.inhalt[stelleGgst].name != ""){
        figur.anzahlMuenzen += (figur.rucksack.inhalt[stelleGgst].preis * 0.8);
        for(int i = stelleGgst; i < 9; i++){
            figur.rucksack.inhalt[i] = figur.rucksack.inhalt[i+1];
        }
        printf("\nDer Gegenstand wurde erfolgreich verkauft.");
        return figur;
    }
    printf("\nEs wurde kein Gegenstand gefunden.");
    return figur;
}