#include <stdlib.h>
#include <stdio.h>

int satzPalindrom(char[], char[]);

int main() {

    char text[50] = "trugtimeinesohellehoseniemitgurt";
    char helper[50] = "";
    int erg = satzPalindrom(text,helper);
    printf("In ergebnis steht %d", erg);
    
    if(erg == 1) {
        printf("Der Text ist ein Palindrom");
    } 

    return 0;
}

int satzPalindrom(char arr[], char hilfe[]){
    int count = 0;
    for(int i = 0; arr[i] != '\0'; i++){
        count++;
    }
    count--;
    int j = 0;
    for(int i = count; i > 0; i--){
        hilfe[j] = arr[i];
        j++;
    }
    for(int i = 0; i < count; i++){
        if(arr[i] != hilfe[i]){
            return 0;
        }
    }
    return 1;
}