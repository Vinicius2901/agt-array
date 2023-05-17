#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int i, x, n, tam, menor = 2*pow (10, 8), pos, aux, *gru;
    printf ("Digite o tamanho do vetor: ");
    scanf (" %i", &tam);
    gru = malloc (tam * sizeof(int));
    printf("Digite os elementos do vetor: ");
    if (gru != NULL)
    {
        for (i = 0; i < tam; i++)
        {
            scanf(" %i", &gru[i]);
        }
        for (x = 0; x < tam; x++)
        {
            menor = gru[x];
            for (i = x; i < tam; i++)
            {
                if (gru[i] < menor)
                {
                    menor = gru[i];
                    pos = i;
                }
            }
            aux = gru[x];
            gru[x] = menor;
            gru[pos] = aux;
        }
        printf ("v = [");
        for (i = 0; i < tam; i++)
        {
            if (i < tam-1)
            {
                printf ("%i, ", gru[i]);
            }
            else
            {
                printf (" %i]\n", gru[i]);
            }
        }
    }
    else
    {
        return 1;
    }
    
    return 0;
}
