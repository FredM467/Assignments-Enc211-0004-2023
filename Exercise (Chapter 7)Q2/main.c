#include <stdio.h>

void getUserInput(char* prompt, char* userInput, int maxLength) {
    printf("%s", prompt);
    scanf("%s", userInput);
}

int main() {
    char userInput[100];

    getUserInput("Please enter your name: ", userInput, sizeof(userInput));

    printf("You entered: %s\n", userInput);

    return 0;
}
