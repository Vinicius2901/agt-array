#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, tam, *gru;
    printf ("Digite um numero inteiro: ");
    scanf (" %i", &n);
    printf ("Digite o tamanho do vetor: ");
    scanf (" %i", &tam);
    gru = malloc(tam * sizeof(int));
    printf ("Digite os elementos do vetor: ");
    if (gru != NULL)
    {
        for (i = 0; i < tam; i++)
        {
            scanf (" %i", &gru[i]);
        }
        printf ("v = [");
        for (i = 0; i < tam; i += 2)
        {
            gru [i] = gru[i] + n;
        }
        for (i = 0; i < tam; i++)
        {
            if (i < tam - 1)
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
