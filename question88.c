#include <stdio.h>
#include <string.h>

int main() {
    char str[200], result[200];
    int i, j = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] != ' ' && str[i] != '\n') {
            result[j] = str[i];
            j++;
        }
    }

    result[j] = '\0';

    printf("String after removing spaces: %s\n", result);

    return 0;
}