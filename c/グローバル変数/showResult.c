#include "showResult.h"
#include <stdio.h>

// extern: 外部のグローバル変数を利用できる
extern int ans;

void showAnswer()
{
    printf("%d\n", ans);
}
