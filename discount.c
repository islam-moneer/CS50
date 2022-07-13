#include <stdio.h>
#include <cs50.h>

float discount(float price, int percent);

int main(void) {
    // Create program calculate discount on price.

    float regular = get_float("regular price: ");
    int percent_off = get_int("percent off: ");

    float sale = discount(regular, percent_off);
    printf("Sale price %.2f\n", sale);
}

float discount(float price, int percent) {
    return price * (100 - percent) / 100;
}