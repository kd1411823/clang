#include <stdio.h>
main()
{
    float box[3], sum;
    int i;
    
    for (sum = 0, i = 0; i < 3; i++) {
        printf("実数を入力:");
        scanf("%f", &box[i]);
        sum += box[i];
    }
    printf("合計は%.2f です\n平均は%.2fです\n", sum, sum / 3);
}