#include <stdio.h>
#include <math.h>



int main() {

    // Variablen als float deklarieren aber nicht initialiesieren
    float a, b, c;
    
    printf("Geben Sie die Länge der Kathete a ein: ");
    scanf("%f", &a);

    printf("Geben Sie die Länge der Kathete b ein: ");
    scanf("%f", &b);
    
    /*
    printf("Geben Sie die Länge von A und B nach folgendem Muster (A,B) ein: ");
    scanf("%f,%f", &a, &b);
    */

    c = sqrt( (pow(a, 2)) + (pow(b, 2)) );

    printf("Die Länge der Hypotenuse ist: %.2f", c);

    return 0;
}