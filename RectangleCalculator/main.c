/* Author J LAERA
   Purpose: This program is going to calculate the area of a rectangle
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    double width;
    double height;
    double perimeter = (width + height) * 2.0;
    double area = width * height;

    //asking for the user input
    printf("****************Welcome dear user************");
    printf("\n Enter the width");
    scanf("%.2f", width);
    printf("\n Enter the height");
    scanf("%.2f", height);


    //printing the result of the user
    printf("The result for the perimeter of the rectangle is : %.2f", perimeter);
    printf("\nThe result for the area of the rectangle is : %.2f", area);

    return 0;
}
