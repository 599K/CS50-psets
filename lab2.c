#include <stdio.h>
#include <string.h>
#include <ctype.h>

int compute_score(char array[]);

int main() {
    char word1[20];
    char word2[20];

    printf("Player 1: ");
    scanf("%s", &word1);

    printf("Player 2: ");
    scanf("%s", &word2);

    for (int i = 0; word1[i]; i++) {
        word1[i] = toupper(word1[i]);
    }
    for (int i = 0; word2[i]; i++) {
        word2[i] = toupper(word2[i]);
    }

    int result = compute_score(word1);
    int result2 = compute_score(word2);

    if (result > result2) {
        printf("Player 1 wins!");
    } else if (result < result2) {
        printf("Player 2 wins!");
    } else {
        printf("Tie!");
    }

}

int compute_score(char array[]) {
    int total_sum = 0;
    int len = strlen(array);

    for (int i = 0; i < len; i++) {
        if (array[i] == 'A') {
            total_sum += 1;
        }
        else if(array[i] == 'B') {
            total_sum += 3;
        }
        else if(array[i] == 'C') {
            total_sum += 3;
        }
        else if(array[i] == 'D') {
            total_sum += 2;
        }
        else if(array[i] == 'E') {
            total_sum += 1;
        }
        else if(array[i] == 'F') {
            total_sum += 4;
        }
        else if(array[i] == 'G') {
            total_sum += 2;
        }
        else if(array[i] == 'H') {
            total_sum += 4;
        }
        else if(array[i] == 'I') {
            total_sum += 1;
        }
        else if(array[i] == 'J') {
            total_sum += 8;
        }
        else if(array[i] == 'K') {
            total_sum += 5;
        }
        else if(array[i] == 'L') {
            total_sum += 1;
        }
        else if(array[i] == 'M') {
            total_sum += 3;
        }
        else if(array[i] == 'N') {
            total_sum += 1;
        }
        else if(array[i] == 'O') {
            total_sum += 1;
        }
        else if(array[i] == 'P') {
            total_sum += 3;
        }
        else if(array[i] == 'Q') {
            total_sum += 10;
        }
        else if(array[i] == 'R') {
            total_sum += 1;
        }
        else if(array[i] == 'S') {
            total_sum += 1;
        }
        else if(array[i] == 'T') {
            total_sum += 1;
        }
        else if(array[i] == 'U') {
            total_sum += 1;
        }
        else if(array[i] == 'V') {
            total_sum += 4;
        }
        else if(array[i] == 'W') {
            total_sum += 4;
        }
        else if(array[i] == 'X') {
            total_sum += 8;
        }
        else if(array[i] == 'Y') {
            total_sum += 4;
        }
        else if(array[i] == 'Z') {
            total_sum += 10;
        }
        
    }
    return total_sum;
}