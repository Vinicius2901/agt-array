#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int i, n, tam, menor = 2*pow (10, 8), pos, *gru;
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
        for (i = 0; i < tam; i++)
        {
            if (gru[i] < menor)
            {
                menor = gru[i];
                pos = i;
            }
        }
        gru[pos] = gru[0];
        gru[0] = menor;
         
        }
        printf ("[");
        for (i = 0; i < tam; i++)
        {
            if (i < tam - 1)
            {
                printf ("%i, ", gru[i]);
            }
            else
            {
                printf ("%i]", gru[i]);
            }
        }
    }
    else
    {
        return 1;
    }
    return 0;
}
