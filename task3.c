#include <stdio.h>

int main(){
    int num=0, count=0, sum;
    float result=0;
    scanf("%d", &num);
    while (num != 0)
    {
        if (num % 2 == 0)
        {
            count +=1;
            sum+= num;
        }
        scanf("%d", &num);
    }
    result = sum/count;
    printf("%f", result);
    return 0;
}