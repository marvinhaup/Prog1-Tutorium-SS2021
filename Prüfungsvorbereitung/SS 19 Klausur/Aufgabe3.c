#include <stdio.h>
#include <stdlib.h>

typedef struct {
    float durchschnitt;
    int anzahlDurchgefallen;
    float besteNote;
 } s_NotenResult;


s_NotenResult notenStatistik(float[], int);

int main() {

    float noten[] = {1.3, 2.3, 5.0, 5.0, 3.3, 1.7, 4.0};
    s_NotenResult erg = notenStatistik(noten, sizeof(noten)/sizeof(float));
    printf("\nNotendurchschnitt: %.2f", erg.durchschnitt);

    return 0;
}

s_NotenResult notenStatistik(float arr[], int len) {
    s_NotenResult erg = {0,0,arr[0]};
    for (int i = 0; i < len; i++)
    {
        erg.durchschnitt += arr[i];
        if (arr[i] > 4.0)
        {
            erg.anzahlDurchgefallen++;
        }
        if (arr[i] < erg.besteNote)
        {
            erg.besteNote = arr[i];
        }
    }
    erg.durchschnitt = erg.durchschnitt / len;
    return erg;
}