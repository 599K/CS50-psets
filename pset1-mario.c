#include <stdio.h>

int main() {
    int size;

    do {
        printf("Enter pyramid size: ");
        if (scanf("%d", &size) != 1) {
            int char_checker;
            while ((char_checker = getchar()) != '\n' && char_checker != EOF);
            continue;
        }
    }
    while (size <= 0 || size > 8);

    int count = 0;
    while (count < size) {
        for (int x = size - count; x > 0; x--) {
            printf(" ");
        }
        for (int y = 0; y <= count; y++) {
            printf("#");
        }
        printf(" ");
        for (int y = 0; y <= count; y++) {
            printf("#");
        }
        printf("\n");

        count ++;
    } 
}
