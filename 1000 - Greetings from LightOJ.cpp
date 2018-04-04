#include<stdio.h>

int main()
{
    int i, sum = 0, a, k, l;
    scanf("%d", &a);
    for(i = 1; i <= a; i++){

        scanf("%d %d", &k, &l);
        sum = k + l;
        printf("Case %d: %d\n", i, sum);
    }
    return 0;
}
