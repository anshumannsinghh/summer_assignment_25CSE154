#include <stdio.h>
int reverse(int n) {
    if (n<10) {
        return n;
    } else {
        int digit=n%10;
        return digit*pow(10,(int)log10(n))+reverse(n/10);
    }
}
int main () {
    int n;
    printf("enter number");
    scanf("%d",&n);
    int result=reverse(n);
    printf("reverse of %d is %d\n",n,result);
    return 0;
}