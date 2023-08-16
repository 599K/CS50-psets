#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char message[] = "Hello, World";
    char key[] = "VCHPRZGJNTLSKFBDQWAXEUYMOI";

    for (int i = 0; message[i] != '\0'; i++) {
        if (message[i] >= 'A' && message[i] <= 'Z') {
            int index = message[i] - 'A';
            message[i] = key[index];
        } else if (message[i] >= 'a' && message[i] <= 'z') {
            int index = message[i] - 'a';
            message[i] = tolower(key[index]);
        }
    }
    printf("%s\n", message);
}