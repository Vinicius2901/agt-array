#include <stdio.h>

int main()
{
    int i, n, tam;
    printf ("Digite um número inteiro: ");
    scanf (" %i", &n);
    printf ("Digite o tamanho do vetor: ");
    scanf (" %i", &tam);
    tam = tam + 1;
    int gru[tam];
    printf ("Digite os elementos do vetor: ");
    for (i = 0; i < tam - 1; i++)
    {
        scanf (" %i", &gru[i]);
    }
    printf ("v = [");
    for (i = 0; i < tam - 1; i += 2)
    {
        gru [i] = gru[i] + n;
    }
    for (i = 0; i < tam - 1; i++)
    {
        if (i < tam - 2)
        {
            printf ("%i,", gru[i]);
        }
        else
        {
            printf ("%i", gru[i]);
        }
    }
    printf ("]\n");
    return 0;
}
