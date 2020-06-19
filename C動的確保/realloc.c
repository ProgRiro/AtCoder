#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *p, *q, i;
	int n, count = 0;
	
	p = (int *)malloc(sizeof(int));
	
	if(p == NULL) {
		puts("Out of memory.");
		exit(EXIT_FAILURE);
	} else {
		while(1) {
			printf("Input Integer : ");
			scanf("%d", &n);
			p[count++] = n;
			if(n == 0) break;
			q = (int *)realloc(p, sizeof(int) * (count + 1));
			if(q == NULL) {
				puts("Out of memory.");
				free(p);
				exit(EXIT_FAILURE);
			} else {
				p = q;
			}
		}
	}

	for(i = 0; i < count; i++)
		printf("%d ", p[i]);
	puts("");
	
	free(p);
	
	return 0;
}