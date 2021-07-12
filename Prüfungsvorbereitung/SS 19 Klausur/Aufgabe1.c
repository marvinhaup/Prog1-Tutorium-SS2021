#include <stdio.h>
#include <stdlib.h>

int main() {

    int arr[] = {1,3,6,9,12,23,34};
    int finde = 23;
    int index = 6;
    int i = 0;
    int ergebnis = -1;

    while (ergebnis == -1){
        if(i > index){
            return -1;
        }
        int mitte = (index + i) / 2;
        if(arr[mitte] == finde){
            ergebnis = 1;
        }
        else{
            if(arr[mitte] > finde){
                index = mitte - 1;
            }
            else{
                i = mitte + 1;
            }
        }
    }

    return 0;
}