#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int n;
    char *Vet;
    scanf("%d", &n);
    Vet = calloc(n + 1, sizeof(char));

    for(int i = 2; i <= n; i++)
    {
        if(Vet[i] == 0)
        {
            printf("%d ", i);

            for(int j = i; j <= n; j += i)
            {
                Vet[j] = 1;
            }
        }
    }
    
    free(Vet);
 
}
