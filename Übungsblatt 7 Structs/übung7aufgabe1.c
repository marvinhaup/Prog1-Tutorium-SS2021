#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[50];
    int alter;
} Person;

Person createPerson();
void printPerson(Person);

int main()
{
    Person first = createPerson();
    printPerson(first);
    return 0;
}

Person createPerson(){
    Person myPerson;
    printf("Geben Sie den Namen ein: ");
    scanf("%s", &myPerson.name);
    printf("Geben Sie das Alter ein: ");
    scanf("%d", &myPerson.alter);
    return myPerson;
}

void printPerson(Person myPerson){
    printf("\nName:\t%s", myPerson.name);
    printf("\nAlter:\t%d", myPerson.alter);
}