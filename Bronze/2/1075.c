#include <stdio.h>

int main()
{
    int N, F;
    scanf("%d", &N);
    scanf("%d", &F);

    int currentN = N - (N % 100);
    while (1)
    {
        if (currentN % F == 0)
            break;
        currentN++;
    }
    printf("%02d", currentN % 100);
}
