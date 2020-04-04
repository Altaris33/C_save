#include <stdio.h>
#include <stdlib.h>


/*
Lore : calendrier Gregorien (Par le Pape Gregory XIII en 1582) pour combler les lacunes du calendrier Julien
La calendrier Gregorien se compose de 365 jours.
Or la durée réelle d'une année sidérale (temps nécessaire à la révolution de la terre pour le soleil = 365.25635 jours
Une fois tous les 4 ans, une année dure 366 jours pour combler cet écart

Toute année divisible par 4 est bissextile, éxemple: 1988, 1992, 1996.
Aussi toute année divisible par 100 est bissextile si elle est aussi divisible par 400. Exemple: 1600, 2000, 2400
Note: par souci de comptabilité avec d'autres programmes, Excel traite 1900 comme bissextile alors qu'elle ne l'est pas.
*/
int main()
{
    int year;

    printf("Enter a year to see whether it is a leap year\n");
    scanf("%d", &year);

    if((year % 100 == 0 && year % 400 == 0) || (year % 4 == 0 && year != 1900))
    {
        printf("The year %d entered by yourself is a leap year.\n", year);
    }else
        printf("The year %d entered by yourself is not a leap year.\n", year);

    return 0;
}
