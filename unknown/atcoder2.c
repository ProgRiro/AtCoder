#include <stdio.h>
#include <math.h>

int main(void)
{
    int n, m, i, result;
    int tmp, a = 0;
    
    scanf("%d %d", &n, &m);
    for(i = 0; i < m; i++) {
        scanf("%d", &tmp);
        a += tmp;
    }
    
    result = n - a;
    
    if(result < 0)
        puts("-1");
    else
        printf("%d\n", result);
    
    return 0;
}