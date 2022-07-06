#include <stdio.h>
#include <cs50.h>


void sayMyName(int myAge) {
    printf("I'm %i years old\n", myAge);
}

int main(void) {
    int age = get_int("What's your age?\n");
    sayMyName(age);
}