#include <stdio.h>
#include <stdlib.h>

float BerechneMittelwert(int[], int);

int main()
{
    system("chcp 1252");
    float myArrAvg;
    int myArr[5] = {3,7,14,24,38};
    myArrAvg = BerechneMittelwert(myArr,5);
    printf("\nDie Mittelwert des Arrays beträgt: %.2f", myArrAvg);

    return 0;
}

float BerechneMittelwert(int arr[], int laenge){
    float mittelwert = 0;
    for (int i = 0; i < laenge; i++)
    {
        mittelwert += arr[i];
    }
    mittelwert = mittelwert/laenge;
    return mittelwert;
}
