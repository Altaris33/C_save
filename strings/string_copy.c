#include <stdio.h>
#include <string.h>

int main(){

    //strcpy()
    printf("String copy using strcpy()");
    printf("\n----------------------------\n");
    char skill[20] = "Healing";
    char receiver[20];

    strcpy(receiver, skill);
    printf("Receiver string after copy : |%s|", receiver);


    //strncpy()
    printf("String copy using strncpy()");
    printf("\n----------------------------\n");
    char skills[40] = "Healing Fireball";
    char receiver2[40];

    strncpy(receiver2, skills, sizeof(receiver2) - 1);
    printf("Receiver2 string after copy : |%s|", receiver2);

    return 0;
}

