#include <stdio.h>

int main()
{
    char s1[4] = {'a', 'b', 'c', '\0'}; // 配列の最後は \0 (Null)
    char s2[] = "HelloWorld.";
    char s3[10];

    scanf("%s", s3); // 配列の際は & いらない
    printf("s1 = %s\n", s1);
    printf("s2 = %s\n", s2);
    printf("s3 = %s\n", s3);
}
