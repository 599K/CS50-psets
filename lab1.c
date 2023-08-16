#include <stdio.h>

int main() {
    int start_size;
    int end_size;

    // scans user input. Continues if input is non-integer, lower than 9, \n or EOF character generated from (Ctrl + Z) + Enter
    do {
        printf("Enter start size: ");
        if (scanf("%d", &start_size) != 1) {
            int c;
            while ((c = getchar()) != '\n' && c != EOF);
            continue;
        }
    } 
    while (start_size < 9);

    do {
        printf("Enter end size: ");
        if (scanf("%d", &end_size) != 1) {
            int d;
            while ((d = getchar()) != '\n' && d != EOF);
            continue;
        }
    }
    while (end_size < start_size);

    float x = start_size; float y = end_size;
    float birth; float death;
    int count = 0;

    // calculates birth growth over iterations
    while (x <= y) {
    birth = (x / 3); death = (x / 4);

    x = x + (birth - death);   
    count++;  
    }

    printf("Years: %d\n", count);

    return 0;
}