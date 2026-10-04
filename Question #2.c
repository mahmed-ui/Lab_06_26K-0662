#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char *passwords[5] = {"hello", "Hello123", "PASSWORD", "abc123XYZ9", "Tr0ub4dor"};

    int scores[5];
    int strongestIndex = 0;
    int lowScoreCount = 0;

    for (int i = 0; i < 5; i++) {
        char *pass = passwords[i];
        int score = 0;
        size_t length = strlen(pass);

        for (size_t j = 0; j < length; j++) {
            unsigned char c = (unsigned char)pass[j];

            if (islower(c)) {
                score = score + 1;
            }
            if (isupper(c)) {
                score = score + 2;
            }
            if (isdigit(c)) {
                score = score + 3;
            }
        }

        if (length >= 8) {
            score = score + 5;
        }

        if (strstr(pass, "123") != NULL) {
            score = score - 3;
        }

        scores[i] = score;
        printf("%s -> score: %d\n", pass, score);

        if (score < 10) {
            lowScoreCount = lowScoreCount + 1;
        }
    }

    for (int i = 1; i < 5; i++) {
        if (scores[i] > scores[strongestIndex]) {
            strongestIndex = i;
        }
    }

    printf("Strongest password: %s (score %d)\n", passwords[strongestIndex], scores[strongestIndex]);
    printf("Passwords scoring below 10: %d\n", lowScoreCount);

    return 0;
}