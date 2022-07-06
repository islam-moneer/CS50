#include <stdio.h>
#include <cs50.h>


void sayMyAge(int myAge) {
    printf("I'm %i years old\n", myAge);
}

int main(void) {
    int age = get_int("What's your age?\n");
    sayMyAge(age);
}