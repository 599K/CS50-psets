#include <stdio.h>
#include <string.h>
#include <math.h>

int count_letters(char string[]);
int count_words(char string[], int length);
int count_sentences(char string[]);

int main() {
    char text[] = { "A large class of computational problems involve the determination of properties of graphs, digraphs, integers, arrays of integers, finite families of finite sets, boolean formulas and elements of other countable domains. "}; 

    //get text from user 
    //printf("Enter text: ");
    //scanf("%[^\n]", text);

    int len = strlen(text);
    int letters = count_letters(text);
    int words = count_words(text, len);
    int sentences = count_sentences(text);

    float L = (float)letters / words * 100;
    float S = (float)sentences /  words * 100;

    float index = 0.0588 * L - 0.296 * S - 15.8;
    int index_new = round(index);

    if (index_new < 1) {
        printf("Before Grade 1");
    } else if (index_new > 16) {
        printf("Grace 16+");
    } else {
        printf("Grade: %d\n", index_new);
    }
}

int count_letters(char string[]) {
    int character_count = 0;
    for (int i = 0; string[i] != '\0'; i++) {
        if ((string[i] >= 'a' && string[i] <= 'z') || (string[i] >= 'A' && string[i] <= 'Z')) {
            character_count++;
        }
    }
    return character_count;
}

int count_words(char string[], int length) {
    int word_count = 0;
    for (int i = 0; string[i] != '\0'; i++) {
        if (string[i] == ' ' || i == length - 1 && string[length - 1] == '.') {
            word_count++;
        }
    }
    return word_count;
}

int count_sentences(char string[]) {
    int sentence_count = 0;
    for (int x = 0; string[x] != '\0'; x++) {
        if (string[x] == '.' || string[x] == '!' || string[x] == '?') {
            sentence_count++;
        }
    }
    return sentence_count;
}