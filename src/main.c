#include <stdio.h>
#include "countLetter.h"

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Использование: %s <предложение> <буква>\n", argv[0]);
        return 1;
    }

    char *sentence = argv[1];
    char letter = argv[2][0];

    int result = countLetter(sentence, letter);

    printf("Количество вхождений буквы %c в предложении: %d\n", letter, result);

    return 0;
}