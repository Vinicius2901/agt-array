#include <stdio.h>
#include <math.h>

int main()
{
    int i, n, tam, menor = 2*pow (10, 8), pos;
    printf ("Digite o tamanho do vetor: ");
    scanf (" %i", &tam);
    int gru[tam];
    printf("Digite os elementos do vetor: ");
    for (i = 0; i < tam - 1; i++)
    {
        scanf(" %i", &gru[i]);
    }
    for (i = 0; i < tam - 1; i++)
    {
        if (gru[i] < menor)
        {
            menor = gru[i];
            pos = i;
        }
    }
    printf ("Menor = %i\n", menor);
    printf ("Posicao: %i\n", pos);
    return 0;
}
