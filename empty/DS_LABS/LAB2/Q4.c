#include<stdio.h>
int main (){
    int num,i,j,c=0;
    printf("enter a number to find prime factors :");
    scanf("%d",&num);
    for (i=2;i<num;i++){
        if((num % i) == 0){
            for (j=2;j<i;j++){
                //c=0;
                if(i % j == 0){
                    c++;
                    break;
                }
                //c=0;
            }
            if (c==0){
                printf("%d \n",i);
            }
            c=0;
        }
    }
    return 0;
}