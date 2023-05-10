#include <stdio.h>

int main()
{
    int n, i;
    int gru[10] = {1,2,3,4,5,6,7,8,9};
    printf ("Digite um número inteiro: ");
    scanf (" %i", &n);
    printf ("v = [");
    for (i = 0; i < 9; i++)
    {
        gru[i] = gru[i] + n;
        if (i < 8)
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
