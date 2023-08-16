#include <stdio.h>
#include <string.h>

#define MAX_CANDIDATES 9
#define MAX_VOTERS 3
#define MAX_NAME_LENGTH 50 // Adjust the value as needed

typedef struct {
    char *name;
    int votes;
} candidate;

candidate candidates[MAX_CANDIDATES];
int candidate_count;
int voter_count;
char voters[MAX_VOTERS][MAX_NAME_LENGTH]; // Array of strings

int vote(char *name) {
    for (int i = 0; i < candidate_count; i++) {
        if (strcmp(name, candidates[i].name) == 0) {
            candidates[i].votes++;
            return 1;
        }
    }
    return 0;
}

void print_winner() {
    int max_votes = 0;

    for (int i = 0; i < candidate_count; i++) {
        if (candidates[i].votes > max_votes) {
            max_votes = candidates[i].votes;
        }
    }

    for (int i = 0; i < candidate_count; i++) {
        if (candidates[i].votes == max_votes) {
            printf("%s\n", candidates[i].name);
        }
    }
}

int main() {
    candidate_count = 3;

    candidates[0].name = "Alice";
    candidates[1].name = "Bob";
    candidates[2].name = "Charlie";

    printf("Number of voters: ");
    scanf("%d", &voter_count);
    getchar(); // Consume the newline left in the buffer after scanf

    for (int i = 0; i < voter_count; i++) {
        printf("Vote: ");
        fgets(voters[i], MAX_NAME_LENGTH, stdin);
        voters[i][strcspn(voters[i], "\n")] = '\0'; // Remove the newline character

        if (!vote(voters[i])) {
            printf("Invalid vote.\n");
        }
    }

    print_winner();
}