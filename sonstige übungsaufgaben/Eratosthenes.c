#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

int main() {

    //chcp(1252);
    bool gestrichen[100] = {0};
    for(int i = 2; i <= 101; i++)
    {
        if(!gestrichen[i-2])
        {
            for(int j = 2*i; j < 101; j += i)
            {
                gestrichen[j-2] = true;
            }
        }
    }

    int size = sizeof(bool);
    printf("\n\nBitgroesse des Bool-Ausdrucks: %d", size);

    int primzahlen[100];
    int anzahl = 0;
    for(int i = 2; i <= 101; i++)
    {
        if(!gestrichen[i-2]) 
        {
            primzahlen[anzahl] = i;
            anzahl++;
        }
    }
    for(int i = 0; i < anzahl; i++) 
    {
        printf("\n%d. Primzahl: %d", i, primzahlen[i]);
    }

    return 0;
}

