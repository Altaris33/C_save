//PROGRAM
//This program will use bubble sort to sort numbers and words entered by a user (input) 
//render the sorted list (output)

#include <stdio.h>
#include <string.h>

int main()
{

    char word1[40];
    char word2[40];
    char word3[40];
    char name[25][50];       //create 25 strings of size 50
    char temp[25];
    char sorted_word1[40];
    char sorted_word2[40];
    char sorted_word3[40];
    int l, i, n, j;

    printf("Simply printing 3 words.\n");
    printf("----------------------------------------------------------\n");
    printf("Enter 3 words: \n");
    scanf("%s %s %s", word1, word2, word3);
    printf("Those are your 3 words : \n%s \n%s \n%s", word1, word2, word3);

    printf("\nString comparison between the first 2 words is : \n");
    printf("%d", strcmp(word1, word2));                                    //return 1 if 1st is > 2nd and -1 if reverse

    printf("\nString comparison between the last 2 words is : \n");
    printf("%d", strcmp(word2, word3));                                    //return 1 if 1st is > 2nd and -1 if reverse

    //SORTING WORDS
    printf("\n\nSorting the strings of an array using bubble sort : \n");
    printf("----------------------------------------------------------\n");

    printf("Input a number of strings : ");
    scanf("%d", &n);

    printf("Input string %d : \n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%s", name[i]);
    }

    //BUBBLE SORT -> swaps the lowest to the left
    for (i = 1; i <= n; i++)
        for(j = 0; j <= n-i; j++)
            if(strcmp(name[j],name[j+1])>0)
            {
                strncpy(temp,name[j], sizeof(temp) - 1);
                strncpy(name[j],name[j+1], sizeof(name[j]) - 1);
                strncpy(name[j+1],temp, sizeof(name[j] + 1) - 1);
            }

    printf("The strings appear after sorting : \n");

    for (i = 0; i <= n; i++)
    {
        printf("%s\n", name[i]);
    }
    return 0;
}

