//Program that shows differences between local and global variables (scope)

//Author : Jérémie LAERA
//Date : 09/02/2020

#include <stdio.h>

int myGlobal = 0;         // global variable

// main can have access to myGlobal & myLocalMain
int main(){

    int myLocalMain = 0;
    return 0;
}

// myFunction can have access to xLocal & myglobal
void myFunction()
{
    int xLocal;         // local variable
}


