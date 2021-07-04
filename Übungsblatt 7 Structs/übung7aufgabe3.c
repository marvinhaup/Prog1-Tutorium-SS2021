#include <stdio.h>
#include <stdlib.h>


typedef struct {
    int summe;
    float durchschnitt;
    int max;
}s_arrayResult;


s_arrayResult calcSumMeanMax(int[], int);
void printArrayResult(s_arrayResult);


int main()
{
    int array[] = {1,2,3,4,5,6,7};
    s_arrayResult erg = calcSumMeanMax(array, sizeof(array)/sizeof(int));
    printArrayResult(erg);
    return 0;
}

s_arrayResult calcSumMeanMax(int arr[], int len){
    s_arrayResult erg = {0,0.0,-20000000};

    for(int i = 0; i < len; i++){
        erg.summe = erg.summe + arr[i];
        if(erg.max < arr[i]){
            erg.max = arr[i];
        }
    }
    erg.durchschnitt = erg.summe / len;
    return erg;
}

void printArrayResult(s_arrayResult erg){
    printf("Summe:\t\t%d\nDurchschnitt:\t%.2f\nMax:\t\t%d\n", erg.summe, erg.durchschnitt, erg.max);
}


// Fehler in Teilaufgabe f)

int main(){
    int[] testArray = {-2; 5; 7; 1; 9};
    erg = calcSumMeanMax(testArray);
    printArrayResult();

    return 0;
}
/*
 Fehler 1:

    1. eckige Klammer hinter dem Variablennamen,nicht hinter int
    -> int testArray[]

 Fehler 2:
    2. Kommata anstatt Semikolons 
    -> int testArray = {-2, 5, 7, 1, 9};

 Fehler 3:
    3. Variable erg ist nicht deklariert
    -> s_arrayResult erg 

 Fehler 4:
    5. Die länge des int-Array wurde nicht übergeben
    ->  calcSumMeanMax(testArray, 5);

 Fehler 5:
    4. printArrayResult muss erg übergeben bekommen
    -> printArrayResult(erg);
*/
