#include "main.h"

/* Function definition */
int _isupper(int c) {
    /* Check if the character is within the ASCII range of uppercase letters */
    if (c >= 'A' && c <= 'Z') {
        return 1;
    } else {
        return 0;
    }
}
