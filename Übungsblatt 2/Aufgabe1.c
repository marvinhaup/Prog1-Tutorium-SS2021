#include <stdio.h>
#include <math.h>



int main() {

    float a, b, c;

    printf("Geben Sie die Länge der Kathete a ein: ");
    scanf("%f", &a);

    printf("Geben Sie die Länge der Kathete b ein: ");
    scanf("%f", &b);

    c = sqrt( (pow(a, 2)) + (pow(b, 2)) );

    printf("Die Länge der Hypotenuse ist: %.2f", c);

    return 0;
}