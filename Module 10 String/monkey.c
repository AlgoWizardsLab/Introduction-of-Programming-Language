#include <stdio.h>
#include <string.h>

int main() {
    char word[101];

    while (scanf("%s", word) != EOF) {
        int len = strlen(word);

       
        for (int i = 0; i < len - 1; i++) {
            for (int j = i + 1; j < len; j++) {
                if (word[i] > word[j]) {
                    char temp = word[i];
                    word[i] = word[j];
                    word[j] = temp;
                }
            }
        }

        printf("%s\n", word);
    }

    return 0;
}
