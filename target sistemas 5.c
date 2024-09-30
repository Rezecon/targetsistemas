#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int main() {
    char str[MAX];
    char invertida[MAX];
    int i, j;

    printf("Informe uma string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
    }
    
    j = 0;
    for (i = i - 1; i >= 0; i--) {
        invertida[j] = str[i];
        j++;
    }
    invertida[j] = '\0';
    printf("String invertida: %s\n", invertida);
    
    return 0;
}
