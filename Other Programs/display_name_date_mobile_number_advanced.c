#include<stdio.h>

int main()

{

char name [30];
char dob [20];
char mob [20];

printf ("Enter your first name, birthdate, phone:\n");

scanf("%s %s %s",&name, &dob, &mob);

printf("\nYour name is: %s\n",name);
printf ("Your birthday is: %s\n",dob);
printf("your mobile number is: %s\n",mob);

return 0;
}
