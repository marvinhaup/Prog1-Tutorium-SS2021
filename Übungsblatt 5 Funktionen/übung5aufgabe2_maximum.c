#include <stdio.h>
#include <stdlib.h>

int max_two(int,int);

int main()
{
    system("chcp 1252");

    int ersteEingabe, zweiteEingabe, max;

    printf("\nGeben Sie die erste Zahl ein: ");
    scanf("%d", &ersteEingabe);
    printf("\nGeben Sie die zweite Zahl ein: ");
    scanf("%d", &zweiteEingabe);

    max = max_two(ersteEingabe, zweiteEingabe);
    printf("\nDie größte Zahl der beiden ist: %d", max);


    return 0;
}

int max_two(int ersteZahl, int zweiteZahl){

    int maximum;
    if(ersteZahl > zweiteZahl){
        maximum = ersteZahl;
    }
    else{
        maximum = zweiteZahl;
    }

    return maximum;
}