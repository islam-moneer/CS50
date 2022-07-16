#include <stdio.h>
#include <cs50.h>

int main(void) {
    int i = get_int("Enter number less than 10: ");

    while (i < 10)
    {
        printf("%i\n", i);
        i++;
    }
    
    
}