#include<stdio.h>
int main() {
    int num,rev=0,dig;
    printf("enter number");
    scanf("%d",&num);
    while (num!=0) {
        dig=num%10;
        rev=rev*10+dig;
        num=num/10;
    }
    printf("reverse of number=%d\n",rev);
    return 0;
}