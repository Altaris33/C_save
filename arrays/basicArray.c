#include <stdio.h>
#include <stdlib.h>

int main(){

    int grades[10];        //array storing 10 values
    int count = 10;        //Number of values to be read
    long sum = 0;          // Sum of the numbers
    float average = 0.0f;  //Average of the numbers

    printf("\nEnter the 10 grades:\n");

    int i;
    for(i = 0; i < count; i++){
        printf("%2u> ",i + 1);
        scanf("%d", &grades[i]);     //read a grade
        sum += grades[i];            // add it to sum
    }

    average = (float)sum/count;     //calculate the average and display it

    printf("\nAverage of the ten grades input by user is: %.2f\n", average);

    return 0;
}


