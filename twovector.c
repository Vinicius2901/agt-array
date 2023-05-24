#include <stdio.h>

#define s 10

int main()
{
    int gru[s], v[s], soma[s], i, soma1, soma2, maior1, maior2, aux1, aux2, j, pos1, pos2;
    printf("\nDigite os valores do pimeiro vetor: ");
    for (i = 0; i < s; i++)
    {
        scanf(" %i", &gru[i]);
    }
    printf("\nDigite os valores do segundo vetor: ");
    for (i = 0; i < s; i++)
    {
        scanf(" %i", &v[i]);
    }
    printf("\nVetor soma: ");
    for (i = 0; i < s; i++)
    {
        soma[i] = gru[i] + v[i];
        printf (" %i", soma[i]);
    }
    printf("\n");
    for (i = 0; i < s; i++)
    {
        soma1 += gru[i];
        soma2 += v[i];
    }
    if (soma1 > soma2)
    {
        printf("\nO primeiro vetor tem um somatorio maior.\n");
    }
    else if (soma2 > soma1)
    {
        printf("\nO segundo vetor tem um somatorio maior.\n");
    }
    else
    {
        printf("\nAmbos possuem somatorio igual.\n");
    }
    aux1 = gru[0];
    aux2 = v[0];
    for (i = 0; i < s; i++)
    {
        maior1 = gru[i];
        maior2 = v[i];
        for (j = i; j < s; j++)
        {
            if (gru[j] > maior1)
            {
                maior1 = gru[j];
                pos1 = j;
                aux1 = maior1;
            }
            if (v[j] > maior2)
            {
                maior2 = v[j];
                pos2 = j;
                aux2 = maior2;
            }
        }
    }
    if (aux1 > aux2)
    {
        printf("\n%i eh o maior valor e esta na posicao %i do primeiro vetor\n", aux1, pos1);
    }
    else if (aux1 < aux2)
    {
        printf("\n%i eh o maior valor e esta na posicao %i do segundo vetor\n", aux2, pos2);
    }
    else
    {
        printf("\n%i eh o maior valor e esta na posicao %i do primeiro vetor e %i do segundo vetor\n", aux1, pos1, pos2);
    }
    return 0;
        
}
