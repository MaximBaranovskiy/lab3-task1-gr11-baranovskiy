#include "countLetter.h"
#include <ctype.h>

// Функция для подсчета количества вхождений заданной буквы в строке
int countLetter(char *sentence, char letter) {
    int count = 0;
    char lowercase_letter = tolower(letter);
    while (*sentence) {
        if (tolower(*sentence) == lowercase_letter)
            count++;
        sentence++;
    }
    return count;
}
