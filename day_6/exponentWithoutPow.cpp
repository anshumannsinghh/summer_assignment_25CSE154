#include <stdio.h>
int main() {
    int x,n, result=1;
    printf("enter base and exponent");
    scanf("%d %d",&x,&n);
    for(int i=1;i<=n;i++) {
        result=result*x;
    }
    printf("%d raised to the power %d is %d\n",result);
    return 0;
}