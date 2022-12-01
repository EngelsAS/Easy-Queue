#include <stdio.h>

int main()
{

    long T;
    scanf("%ld", &T);
    int x;
    long valor;
    int i = -1;
    int j = 0;
    long *vet = (long int *)malloc(sizeof(long int) * 1000001);

    while (T--)
    {

        scanf("%d", &x);

        if (x == 1)
        {
            scanf("%ld", &valor);
            i++;
            vet[i] = valor;
        }
        else if (x == 2)
        {
            if (j <= i)
            {
                j++;
            }
        }
        else
        {
            if (j > i)
            {
                printf("Empty!\n");
            }
            else
            {
                printf("%ld\n", vet[j]);
            }
        }
    }
    return 0;
}