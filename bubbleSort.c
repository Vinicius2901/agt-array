#include <stdio.h>
#define s 10

int main(){
    int v[s], aux;

    for (int i = 0; i < s; i++){
        scanf(" %i", &v[i]);
    }

    for (int j = 0; j < s-1; j++)
    {
        for (int i = 0; i < s-1; i++){
            if (v[i] > v[i+1])
            {
                aux = v[i+1];
                v[i+1] = v[i];
                v[i] = aux;
            }
        }
    }
    for (int i = 0; i < s; i++)
    {
        printf("%i ", v[i]);
    }
    printf("\n");
    return 0;
    
}
