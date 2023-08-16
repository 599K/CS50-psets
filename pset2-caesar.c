#include <stdio.h>

int main() {
    char message[] = "hello, world";
    int key = 13;

    for (int i = 0; message[i] != '\0'; i++) {
        if (message[i] >= 'a' && message[i] <= 'z') {
            message[i] = 'a' + (message[i] - 'a' + key) % 26;
        } else if (message[i] >= 'A' && message[i] <= 'Z') {
            message[i] = 'A' + (message[i] - 'A' + key) % 26;
        }
    }
    printf("%s", message);
}