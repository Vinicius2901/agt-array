#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, tam, *gru;
    printf ("Digite o tamanho do vetor: ");
    scanf (" %i", &tam);
    gru = malloc(tam*sizeof(int));
    printf ("Digite os elementos do vetor: ");
    if (gru != NULL)
    {
        for (i = 0; i < tam; i++)
        {
            scanf (" %i", &gru[i]);
        }
        printf ("[");
        for (i = 0; i < tam; i++)
        {
            if (i < tam-1)
            {
                if (i % 2 != 0)
                {
                    printf ("%i, ", gru[i]);
                }
            }
            else
            {
                if (i % 2 != 0)
                {
                    printf ("%i]\n", gru [i]);
                }
            }
        }
    }
    else
    {
        return 1;
    }
    return 0;
}
