#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(void)
{

    int nu;

    printf("Digite um numero: ");
    scanf("%d", &nu);

    if (nu == 5)
    {
        printf("O numero é igual a 5");
    }
    else if (nu == 200)
    {
        printf("O numero é igual a 200");
    }
    else if (nu == 400)
    {
        printf("O numero é igual a 400");
    }
    else if (nu > 500 && nu < 1000)
    {
        printf("O numero esta no meio de 500 e 1000");
    }
    else
    {
        printf("O numero não se encaixa em nenhuma das opções");
    }
}