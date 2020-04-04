#include <stdio.h>
#include <stdlib.h>


int main(void){

    // Looping through the 3D of the numbers array using an initialized total variable
    int numbers[2][3][4];
    int total = 0;
    int i, j, k;

    for (int i = 0; i < 2; ++i){
        for (int j = 0; j < 3; ++j){
            for (int k = 0; k < 4 ; ++k){
                total += numbers[i][j][k];
            }
        }
    }

    printf("The 3D array is as follows: it contains %d rows, %d columns and %d blocks.", numbers[i], numbers[j], numbers[k]);

    return 0;
}


