#include <stdio.h>
#include <string.h>

int main(){

    //strcmp()
    printf("\n ----------- \n String comparisons using strcmp()\n");
    printf("------------------------------\n");
    printf("\nString comparison : \"A\" & \"A\" => ");    //will return 0 since A == A
    printf("%d", strcmp("A","A"));

    printf("\nString comparison : \"A\" & \"B\" => ");    //will return < 0 cause A is < B in ASCII
    printf("%d", strcmp("A","B"));

    printf("\nString comparison : \"B\" & \"A\" => ");    //will return > 0 cause B is > A in ASCII
    printf("%d", strcmp("B","A"));

    printf("\nString comparison : \"Banana\" & \"Brasil\" => ");    //will return < 0 cause Banana is > Brasil in ASCII
    printf("%d", strcmp("Banana","Brasil"));


    //strncmp
    printf("\n ----------- \n String comparisons using strncmp()\n");
    printf("------------------------------\n");
    char first_string[25];
    char second_string[25];
    int comparison_value;

    strcpy(first_string, "Captain Falcon");
    strcpy(second_string, "Captain falcon");

    comparison_value = strncmp(first_string, second_string, 9);
    printf("Strings to be compared : \n" 
            "String 1 = %s \nString 2 = %s", first_string, second_string);

    if (comparison_value < 0)
    {
        printf("\nThe first string is less than the second one.");
        
    }else if(comparison_value > 0)
    {
        printf("\nThe second string is less than the first one.");
        
    }else
    {
        printf("\nBoth strings are equal");
        
    }
    
    return 0;
}

