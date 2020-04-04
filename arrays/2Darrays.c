// 2D arrays program

//Author : J LAERA
//Date : 01/02/2020

#include <stdio.h>
#include <stdlib.h>


int main(){

    // creating the 2D arrays (array of arrays also known as matrix)

    int disp_array[3][2];

    // counter variable for the loop
    int i, j;

    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("Enter value for disp array[%d][%d]:", i, j);
            scanf("%d", &disp_array[i][j]);
        }
    }

    //displaying the array elements
    printf("Two dimensional array elements: \n");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("%d", disp_array[i][j]);
            if(j==2){
                printf("\n");
            }
        }
    }

    return 0;
}