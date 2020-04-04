//tokenize string program

#include <stdio.h>
#include <string.h>

int main(){

    char str[80] = "Hello Captain, how are you ? My Name ? It's Link.";
    const char delimiter[2] = "?";
    char *token;

    //get the first token (substring found)
    token = strtok(str, delimiter);

    //walk through other tokens
    while(token != NULL)
    {
        printf(" %s\n", token);
        token = strtok(NULL, delimiter);
    } 

    return 0;
}

