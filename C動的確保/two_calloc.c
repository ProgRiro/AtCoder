#include <stdio.h>
#include <stdlib.h>

/* プロトタイプ宣言 */
double **two_dimensional_double(int n, int m);

int main(void)
{
	double **p;
	int n, m;
	int i, j;
	
	/* 入力部分 */
	printf("Input n : ");
	scanf("%d", &n);
	printf("Input m : ");
	scanf("%d", &m);
	
	/* 2次元配列のヒープ領域動的確保 */
	p = two_dimensional_double(n, m);
	
	for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++)
            printf("%lf ", p[i][j]);
        puts("");
    }
	
	/* メモリ解放 */
	free(p[0]);
	free(p);
	
	return 0;
	
}

/*
 * 2次元配列のヒープ領域動的確保関数
 * name : two_dimensional_double
 * argument : (double) **p, (int) n, (int) m
 * return value : **p
 */
double **two_dimensional_double(int n, int m)
{
	double **p;
	/* ポインタへのポインタ配列のヒーブ領域動的確保 */
    p = (double **)calloc(n, sizeof(double *));
    if (p == NULL)	// 確保失敗
    {
        puts("Out of memory.");
        exit(EXIT_FAILURE);
    } else {	// 確保成功
        int i, j;
        double *base = (double *)calloc(n * m, sizeof(double)); //ポインタ配列のヒープ領域動的確保

        if(base == NULL) {	// 確保失敗
            puts("Out of memory.");
            exit(EXIT_FAILURE);
        } else { // 確保成功
            for (i = 0; i < n; i++)
                p[i] = base + i * m;

            for (i = 0; i < n; i++)
                for (j = 0; j < m; j++)
                    p[i][j] = i * j;
        }
    }
    
    return p;
}