#include <stdio.h>
#include <cs50.h>


void sayMyName(string name) {
    printf("hello, %s\n", name);
}

int main(void) {
    string name = get_string("What's your name?\n");
    sayMyName(name);
}