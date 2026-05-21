#include <stdio.h>
#include <string.h>

int main(void) {
    char palavra[101];
    int i, j;
    char temp;

    printf("Digite uma palavra: ");

    if (fgets(palavra, sizeof(palavra), stdin) == NULL) {
        printf("Erro na leitura.\n");
        return 1;
    }

    palavra[strcspn(palavra, "\n")] = '\0';

    j = strlen(palavra) - 1;

    for (i = 0; i < j; i++, j--) {
        temp = palavra[i];
        palavra[i] = palavra[j];
        palavra[j] = temp;
    }

    printf("Palavra invertida: %s\n", palavra);

    return 0;
}
