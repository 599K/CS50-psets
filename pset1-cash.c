#include <stdio.h>

int get_cents();
int calculate_quarters(int number);
int calculate_dimes(int number);
int calculate_nickels(int number);
int calculate_pennies(int number);

int main() {
    int centavos = get_cents();
    printf("Centavos: %d\n", centavos);

    int quartos = calculate_quarters(centavos);
    printf("Quarters: %d\n", quartos);

    int dimes = calculate_dimes(centavos);
    printf("Dimes: %d\n", dimes);

    int nickels = calculate_nickels(centavos);
    printf("Nickels: %d\n", nickels);

    int pennies = calculate_pennies(centavos);
    printf("Pennis: %d\n", pennies);
}

//quarters = 25c, dimes = 10c, nickels = 5c, pennies = 1c

int get_cents() {
    int cents;
    do {
        printf("Enter cents: ");
        if (scanf("%d", &cents) != 1) {
            int char_checker;
            while ((char_checker = getchar()) != '\n' && char_checker != EOF);
            continue;
        }
    } while (cents <= 0);

    return cents;
}

int calculate_quarters(int number) {
    int quarters;
    quarters = number / 25;
    return quarters;
}

int calculate_dimes(int number) {
    int dimes;
    dimes = number / 10;
    return dimes;
}

int calculate_nickels(int number) {
    int nickels;
    nickels = number / 5;
    return nickels;
}

int calculate_pennies(int number) {
    int pennies;
    pennies = number / 1;
    return pennies;
}