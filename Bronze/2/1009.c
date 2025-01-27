#include <stdio.h>

int getPowerRemainder(int a, int b)
{
    int value = 1;
    for (int i = 0; i < b; i++)
    {
        value = value * a;
        value = value % 10;
    }
    return value;
}

int main()
{
    int n = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        int computerNumber = getPowerRemainder(a, b);
        if (computerNumber == 0)
            computerNumber = 10;
        printf("%d\n", computerNumber);
    }

    return 0;
}
