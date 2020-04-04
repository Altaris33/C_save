/* Author J LAERA
   Purpose: This program is going to calculate the area of a rectangle
 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    //good habit to create and initialize variable
    double width = atoi(argv[1]);
    double height = atoi(argv[2]);
    double perimeter = 0.0;
    double area = 0.0;

    //performing the calculations in variables assignment
    perimeter =  2.0 * (height + width);
    area = width * height;


    //printing and formatting the calculation results
    printf("Width is: %.2f, Height is: %.2f, Perimeter is: %.2f\n", width, height, perimeter);
    printf("Area is: %f\n", area);



    return 0;
}
