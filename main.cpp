#include <stdio.h>
#include <stdlib.h>

int main()
{
    char mensagem1[30], mensagem2[30];
    printf("Digite uma mensagem1: ");
    scanf("%s", &mensagem1);

    printf("Digite uma mensagem2: ");
    scanf("%s", &mensagem2);

    printf("%s%s\n", mensagem1, mensagem2);
    printf("%s %s\n\n", mensagem1, mensagem2);

    int a = 3;
    int b = 4;
    int r = a + b;
    printf("a + b = %i + %i = %i\n", a, b, r);

    return 0;
}
