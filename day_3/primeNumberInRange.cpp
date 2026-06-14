#include<stdio.h>
int main() {
    int initial,final,i,prime;
    printf("enter initial and final range");
    scanf("%d %d",&initial,&final);
    printf("prime numbers between %d and %d are:\n",initial,final);
    for(i=initial;i<=final;i++) {
        if (i<2) 
            continue;
        prime=1;
        for(int j=2;j<=i/2;j++) {
            if (i%j==0) {
                prime=0;
                break;
            }
        }
        if (prime) {
            printf("%d\n",i);
        }
return 0;
    }
}