#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a = 53;
    int b = 30;
    float d, pixelBreite;

    d = sqrt((a*a)+(b*b));

    pixelBreite = d/sqrt((1920*1920) + (1080*1080));

    printf("Die pixelbreite in zentimetern: %f", pixelBreite);
    printf("\nDie pixelbreite in millimetern: %f", pixelBreite*10);

    return 0;
}
