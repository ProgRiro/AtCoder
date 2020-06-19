#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *p;
	int n, i;
	
	printf("Input array size: ");
	scanf("%d", &n);
	
	p = (int *)malloc(sizeof(int));

	if(p == NULL) {
		printf("Out of memory.");
		exit(EXIT_FAILURE);
	} else {
		for(i = 0; i < n; i++) {
			p[i] = i;
		}
	}
	
	for(i = 0; i < n; i++)
		printf("%d ", p[i]);
	puts("");
	
	free(p);
	
	return 0;
}