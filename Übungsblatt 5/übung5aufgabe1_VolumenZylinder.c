#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float BerechneVolumen(float, float);

int main()
{
    system("chcp 1252");

    float eingabeRadius, eingabeHoehe, vol;

    printf("Wert f�r den Radius eingeben: ");
    scanf("%f", &eingabeRadius);
    printf("Wert f�r die H�he eingeben: ");
    scanf("%f", &eingabeHoehe);

    vol = BerechneVolumen(eingabeRadius, eingabeHoehe);

    printf("\nDas Volumen des Zylinders betr�gt: %.2f", vol);

    return 0;
}

float BerechneVolumen(float radius, float hoehe){
    float volumen = 0;
    volumen = M_PI * pow(radius, 2) * hoehe;
    return volumen;
}
