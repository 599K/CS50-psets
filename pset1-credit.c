#include <stdio.h>
#include <string.h>

int main() {

    //stores user credit card into ll variable. Stores number from 13 up to 16 digits.
    long long card;
    do {
        printf("Enter card number: ");
        if (scanf("%lld", &card) != 1) {
            int char_checker;
            while ((char_checker = getchar()) != '\n' && char_checker != EOF);
        }
    } while (card < 1000000000000 || card > 9999999999999999);

    char card_string[20];
    char card_company[20];

    //transforms ll into character array card_string, to allow access to each element.
    snprintf(card_string, sizeof(card_string), "%lld", card);
    
    int len = strlen(card_string);
    
    if (card_string[0] == '3') {
        strcpy(card_company, "American Express");
    }
    else if (card_string[0] == '4') {
        strcpy(card_company, "VISA");
    }
    else if (card_string[0] == '5') {
        strcpy(card_company, "MasterCard");
    }

    int total_sum = 0;
    int left_digits = 0;

    // if and else is used because the calculation is done using one condition on even number and another condition on odd numbers.
    if (len % 2 == 0) {

        for (int i = 0; i < len; i += 2) {
            int digit = (card_string[i] - '0') * 2;
            while(digit > 0) {
                total_sum += digit % 10;
                digit /= 10;
            }
        }

        for (int i = 1; i < len; i += 2) {
            int digits = (card_string[i] - '0');
            left_digits += digits;
        }

    } else {
        for (int i = 1; i < len; i += 2) {
            int digit = (card_string[i] - '0') * 2;
            while (digit>0) {
                total_sum += digit % 10;
                digit /= 10;
            }
        }
        for (int i = 0; i < len; i += 2) {
            int digits = (card_string[i] - '0');
            left_digits += digits;
        }

    }

    int checker = left_digits + total_sum;

    if (checker % 10 == 0) {
        printf("Number: %s\n", card_string);
        printf("%s\n", card_company);
    }
    else if (checker % 10 != 0) {
        printf("Number: %s\n", card_string);
        printf("Invalid\n");
    }

    return 0;
}