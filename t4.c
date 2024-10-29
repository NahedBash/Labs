#include <stdio.h>
#include <ctype.h> 

#define N 100

int stringLength(char sentence[]) {
    int l = 0;
    while (sentence[l] != '\0') {
        l++;
    }
    return l;
}

int NumOfWord(char sentence[], int strLength) {
    int count = 0;
    for (int i = 0; i < strLength; i++) {
        if ((sentence[i] != ' ') && (i == 0 || sentence[i - 1] == ' ')) {
            count++;
        }
    }
    return count;
}

int NumOfVowels(char sentence[], int strLength) {
    int c = 0;
    for (int i = 0; i < strLength; i++) {
        char ch = tolower(sentence[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            c++;
        }
    }
    return c;
}

int main() {
    char sentence[N];
    printf("Enter a sentence (max %d characters): ", N);
    fgets(sentence, N,stdin);

    int length = stringLength(sentence);
    printf("The length of the sentence: %d\n", length);

    int wordCount = NumOfWord(sentence, length);
    printf("Number of words: %d\n", wordCount);

    int vowelCount = NumOfVowels(sentence, length);
    printf("Number of vowels: %d\n", vowelCount);

    return 0;
}

