#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, tam;
    int *gru;
    printf ("Digite um número inteiro: ");
    scanf (" %i", &n);
    printf ("Digite o tamanho do vetor: ");
    scanf (" %i", &tam);
    gru = malloc(tam * sizeof(int));
    printf ("Digite os números do vetor: ");
    if (gru != NULL)
    {
        for (i = 0; i < tam; i++)
        {
            scanf (" %i", &gru[i]);
        }
    }
    else
    {
        return 1;
    }
    printf ("v = [");
    if (gru != NULL)
    {
        for (i = 0; i < tam; i++)
        {   
            gru[i] = gru[i] + n;
            if (i < tam-1)
            {
                printf ("%i,", gru[i]);
            }
            else
            {
                printf ("%i", gru[i]);
            }
        }
    }
    else
    {
        return 1;
    }
    printf ("]\n");
    return 0;
}
