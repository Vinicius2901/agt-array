#include <stdio.h>
#include <stdlib.h>

int main()
{
    int indice, numero, inicio, meio, fim, bin = -1, *gru;
    printf("Digite o tamanho do vetor: ");
    scanf(" %i", &fim);
    meio = (fim-1)/2;
    gru = malloc(fim*sizeof(int));
    printf("Digite os elementos do vetor: ");
    if (gru != NULL)
    {
        for (indice = 0; indice < fim; indice++)
        {
            scanf(" %i", &gru[indice]);
        }
        printf ("Digite um numero: ");
        scanf(" %i", &numero);
        while (bin == -1)
        {
            if (numero == gru[meio])
            {
                bin = 1;
            }
            else if (numero > gru[meio])
            {
                inicio = meio;
                meio = (fim + inicio)/2;
                bin = -1;
            }
            else
            {
                fim = meio;
                meio = (fim)/2;
                bin = -1;
            }
        }
        printf("\n\nO numero %i esta na posicao %i", numero, meio);
    }
    else
    {
        return 1;
    }
    return 0;
}
