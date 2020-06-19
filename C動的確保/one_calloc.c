#include <stdio.h>
#include <stdlib.h>

/* プロトタイプ宣言 */
double *one_dimensional_double(int n);

int main(void)
{
	double *p;
	int n, m;
	int i;
	
	/* 入力部分 */
	printf("Input n : ");
	scanf("%d", &n);
	
	/* 2次元配列のヒープ領域動的確保 */
	p = one_dimensional_double(n);
	
	for (i = 0; i < n; i++)
        printf("%lf ", p[i]);
	
	/* メモリ解放 */
	free(p);
	
	return 0;
	
}

/*
 * 2次元配列のヒープ領域動的確保関数
 * name : two_dimensional_double
 * argument : (double) **p, (int) n, (int) m
 * return value : **p
 */
double *one_dimensional_double(int n)
{
	double *p;
    p = (double *)calloc(n, sizeof(double));
    if (p == NULL)
    {
        puts("Out of memory.");
        exit(EXIT_FAILURE);
    } else {
    	for (int i = 0; i < n; i++)
        	p[i] = i;
    }
    return p;
}