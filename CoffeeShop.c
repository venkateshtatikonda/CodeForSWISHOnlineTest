#include<stdio.h>

int main() {
    int amount,p,x;
    amount=0;
    scanf("%d",&x);
    scanf("%d",&p);
    if((x>=0)&&(x <= 10000)&&(p>=1)&&(p<=100)){
    while(x>=2){
        amount=amount+x;
        x=x-(x*p)/100;
        }
    }
        amount=amount+x;
        printf("%d",amount);
        return 0;
}
