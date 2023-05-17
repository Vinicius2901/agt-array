#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, par = 0, impar = 0, zero = 0, neg = 0, tam, *gru;
    printf ("Digite o tamanho do vetor: ");
    scanf (" %i", &tam);
    printf ("Digite os elemento do vetor: ");
    gru = malloc (tam*sizeof(int));
    if (gru != NULL)
    {
        for (i = 0; i < tam; i++)
        {
            scanf(" %i", &gru[i]);
        }
        for (i = 0; i < tam; i++)
        {
            if (gru[i] == 0)
            {
                zero++;
            }
            else if (gru[i]%2 == 0)
            {
                par++;
            }
            else
            {
                impar++;
            }
            if (gru[i] < 0)
            {
                neg++;
            }
        }
    }
    else
    {
        return 1;
    }
    printf ("\nPares: %i\n", par);
    printf ("Ímpares: %i\n", impar);
    printf ("Zeros: %i\n", zero);
    printf ("Negativos: %i\n", neg);
    return 0;
}
