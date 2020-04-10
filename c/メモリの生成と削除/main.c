#include <stdio.h>
#include <stdlib.h>

#define SIZE 3

int main()
{
	int *p1 = NULL;
	double *p2 = NULL;
	int i;
	// メモリの生成
	p1 = (int *)malloc(sizeof(int) * SIZE); // int 3つ分のサイズ（配列）のメモリを確保
	p2 = (double *)malloc(sizeof(double) * SIZE);
	// 値の代入
	for (i = 0; i < SIZE; i++)
	{
		p1[i] = i;
		p2[i] = i / 10.0;
	}
	// 結果の出力
	for (i = 0; i < SIZE; i++)
	{
		printf("p1[%d]=%d  p2[%d]=%f\n", i, p1[i], i, p2[i]);
	}
	// メモリの解放
	free(p1);
	free(p2);
}
