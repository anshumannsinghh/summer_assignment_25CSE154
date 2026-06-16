#include <stdio.h>
int sumDigits(int n) {
    if (n==0) {
        return 0;
    } else {
        return n%10 + sumDigits(n/10);
    }

    int main() {
    int n;
    printf("enter number");
    scanf("%d",&n);
    int result=sumDigits(n);
    printf("sum of digits of %d is %d\n",n,result);
    return 0;
}