#include <stdio.h>

float sumFoo(int n){
    float sum=0, fact=1;
    for (float i = 1; i <= n; i++)
    {
        fact *= i;
        sum += (i * i) / (fact);
    }
    

    return sum;
}


int main(){
    int n;
    scanf("%d", &n);
    printf("%f", sumFoo(n));

    return 0;
}