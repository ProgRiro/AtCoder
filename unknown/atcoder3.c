#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n, a, i;
    int *ans;
    
    scanf("%d", &n);
    
    ans = (int *)malloc(sizeof(int) * n);
    if(ans == NULL) {
        puts("Out of memory.");
        exit(EXIT_FAILURE);
    }
    
    for(i = 0; i < n - 1; i++) {
        scanf("%d", &a);
        ans[a - 1]++;
    }
    
    for(i = 0; i < n; i++)
        printf("%d\n", ans[i]);
    
    free(ans);
    
    return 0;
}