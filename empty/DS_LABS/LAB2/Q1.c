#include<stdio.h>
int gcd(int a,int b);
int main (){
    int x,y,hcf;
    printf("enter two numbers to find GCD : ");
    scanf("%d%d",&x,&y);
    hcf = gcd(x,y);
    printf("GCD = %d",gcd(x,y));
    return 0;
}
int gcd(int a, int b){
    if (a == 0 ){
        return b;
    }
    return gcd(b%a,a);
}