#include <stdio.h>

int triangleType(int a, int b, int c) {
    if (a <= 0 || b <= 0 || c <= 0){
        return 0; 
    }
    if ((a + b <= c) || (a + c <= b) || (b + c <= a)) {
        return 0;
    }
    if ((a * a + b * b == c * c) || (a * a + c * c == b * b) || (b * b + c * c == a * a)) {
        return 1;
    }
    return 2;
}



int main(){
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d", triangleType(a,b,c));
    return 0;
}