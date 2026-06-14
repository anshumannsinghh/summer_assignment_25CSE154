#include<stdio.h>
int main() {
    int num,original,rem,result=0;
    printf("enter number");
    scanf("%d",&num);
    original=num;
    while (original!=0) {
        rem=original%10;
        result=result+(rem*rem*rem);
        original=original/10;
    }
    if (result==num) {
        printf("number is armstrong\n");
    } else {
        printf("number is not armstrong\n");
    }
    return 0;
}