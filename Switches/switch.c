#include <stdio.h>
#include <stdlib.h>

int main(){

    enum Weekday {Monday, Tuesday, Wednesday, Thirsday, Friday, Saturday, Sunday};
    enum Weekday today = Monday;

    switch (today)
    {
    case Sunday:
        printf("Today is Sunday...");
        break;
    case Monday:
        printf("Today is Monday...");
        break;
    case Friday:
        printf("Today is Friday...");
        break;
    
    default:
        printf("Whatever");
        break;
    }

    return 0;
}

