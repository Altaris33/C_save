#include <stdio.h>

int main(int argc, char *argv[]){

int numberOfArguments = argc;

//passing the name of the program
char *argument1 = argv[0];
char *argument2 = argv[1];

printf("Number of arguments: %d\n", numberOfArguments);
printf("Argument1 for Name of the program: %s\n", argument1);
printf("Argument2 Name of the program: %s\n", argument2);


return 0;

}

