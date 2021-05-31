#include <stdio.h>
#include <stdlib.h>

int main(){
    //chcp("1252");
    float monatsGehalt = 1; 
    float gesamtesGehalt;
    int monat;

    for(monat = 0; monat < 24; monat++){
        gesamtesGehalt += monatsGehalt;
        printf("\nMonat: %d, Monatsgehalt %.f", monat+1, monatsGehalt);
        monatsGehalt = monatsGehalt * 2;
    }
    printf("\nWährend ihrer Arbeiszeit wurden %.f Euro verdient!", gesamtesGehalt);

}