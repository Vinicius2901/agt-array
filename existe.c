#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, tam, numero, posicao = -1, posicao1 = 0, *gru, *posit;
    printf("Digite o tamanho do vetor: ");
    scanf (" %i", &tam);
    gru = malloc(tam*sizeof(int));
    printf ("Digite os elementos do vetor: ");
    if (gru != NULL)
    {
        for (i = 0; i < tam; i++)
        {
            scanf (" %i", &gru[i]);
        }
        printf("Digite um numero: ");
        scanf (" %i", &numero);
        for (i = 0; i < tam; i++)
        {
            if(numero == gru[i])
           {
                posicao++;
            }
        }
        if(posicao == -1)
        {
            printf("\nNao existe.\n");
            printf("v = [");
            for (i = 0; i < tam; i++)
            {
                if (i < tam-1)
                {
                    printf("%i,", gru[i]);
                }
                else
                {
                    printf("%i]\n", gru[i]);
                }
            }
        }
        else
        {
            posicao++;
            posit = malloc(posicao*sizeof(int));
            if (posit != NULL)
            {
                for (i = 0; i < tam; i++)
                {
                    if(numero == gru[i])
                    {
                        posit[posicao1] = i;
                        posicao1++;
                    }
                }
                printf ("\nExiste na(s) posicao(oes): ");
                for (posicao1 = 0; posicao1 < posicao; posicao1++)
                {
                    printf("%i ", posit[posicao1]);
                }
                printf("\nv = [");
                for (i = 0; i < tam; i++)
                {
                    if(i < tam - 1)
                    {
                        printf("%i,", gru[i]);
                    }
                    else
                    {
                        printf("%i]\n", gru[i]);
                    }
                }
            }
            else
            {
                return 1;
            }
        }
    }
    else
    {
        return 1;
    }
    return 0;
}
