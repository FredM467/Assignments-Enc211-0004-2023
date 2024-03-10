#include <stdio.h>
#include <ctype.h>
#include <string.h>

void removeLeadingTrailingBlanks(char *str);
char *getLastName(const char *fullName);
void convertToUppercase(char *str);
char *getFirstWord(char *str);

int main() {
    char fullName[100];
    printf("Enter your first name and last name: ");
    fgets(fullName, sizeof(fullName), stdin);

    removeLeadingTrailingBlanks(fullName);

    char *lastName = getLastName(fullName);
    printf("Last Name: %s\n", lastName);

    convertToUppercase(fullName);
    printf("Uppercase Full Name: %s\n", fullName);

    char firstWord[50];
    getFirstWord(fullName, firstWord);
    printf("First Word: %s\n", firstWord);

    return 0;
}

void removeLeadingTrailingBlanks(char *str) {
    int i, start, end;

    for (start = 0; str[start] && isspace((unsigned char)str[start]); ++start);

    for (end = strlen(str) - 1; end > start && isspace((unsigned char)str[end]); --end);

    for (i = 0; i <= end - start; ++i) {
        str[i] = str[start + i];
    }

    str[i] = '\0';
}

char *getLastName(const char *fullName) {
    const char *lastSpace = strrchr(fullName, ' ');

    if (lastSpace != NULL) {
        return lastSpace + 1;
    } else {
        return (char *)fullName;
    }
}

void convertToUppercase(char *str) {
    while (*str) {
        *str = toupper((unsigned char)*str);
        ++str;
    }
}

char *getFirstWord(char *str, char *firstWord) {
    int i;

    for (i = 0; str[i] && !isspace((unsigned char)str[i]); ++i) {
        firstWord[i] = str[i];
    }

    firstWord[i] = '\0';

    for (; str[i] && isspace((unsigned char)str[i]); ++i);

    int j;
    for (j = 0; str[i]; ++i, ++j) {
        str[j] = str[i];
    }

    str[j] = '\0';

    return firstWord;
}
