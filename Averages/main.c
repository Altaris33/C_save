#include <stdio.h>

void print(int n1, int n2, int n3, double average);
double average(int a, int b, int);

int main(void)
{

    int n1, n2, n3;

    printf("Enter: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    printf(n1, n2, n3, average(n1, n2, n3));

    return 0;
}

void print(int n1, int n2, int n3, double average)
{
    printf("Mean %d %d %d is %f\n", n1, n2, n3, average);
}

double average(int n1, int n2, int n3)
{
    double sum;

    sum = n1 + n2 + n3;
    return sum / 3.0;
}

