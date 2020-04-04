#include <stdio.h>
#include <stdlib.h>


int main(void){

    // 3D array with initializing only 2 blocks out of 4 containing 3 rows. 
    int numbers[2][3][4] = {
        {                           // 1st block of 3 rows
            {10, 20, 30, 40},
            {15, 25, 35, 45},
            {14, 16, 18, 20}
        },
        {                          // 2nd block of 3 rows
            {10, 20, 30, 40},
            {11, 22, 33, 44},
            {7, 9, 11, 13}
        }
    };

    return 0;
}

