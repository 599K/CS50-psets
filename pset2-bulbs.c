#include <stdio.h>
#include <string.h>
#include <math.h>

int binary_convertor(int number, char binaryArray[]);

int main() {
    //char message[1000];
    //printf("Enter message: ");
    //scanf(" %[^\n]", message);
    char message[] = {"HI MOM"};

    int length = strlen(message);

    for (int i = 0; i < length; i++) {
        int decimal = message[i];
        char binary[9];
        binary_convertor(decimal, binary);
        //printf("%s\n", binary);

        for (int x = 0; x < 8; x++) {
            if (binary[x] == '0') {
                binary[x] = '-';
            } else if (binary[x] == '1') {
                binary[x] = 'o';
            }
        }

        printf("%s\n", binary);
    }
}

int binary_convertor(int number, char binaryArray[]) {
    binaryArray[8] = '\0';

    for (int i = 7; i >= 0; i--) {
        int bit = number % 2;
        binaryArray[i] = bit + '0';
        number = number / 2;
    }
}
