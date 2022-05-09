// ceiling and floor  
#include<stdio.h>

// void ceil(float num);
// void floor(float num);
// float num;
int main (){
    float num;
    int ceil,floor;
    printf("enter number : ");
    scanf("%f",&num);
    if (num>0){
        if(num / (int)num == 1){
            printf("ceil = %d\nfloor = %d",(int)num,(int)num);
        }
        else{
            ceil  = num+1;
            floor =(num);
            printf("ceil = %d\nfloor = %d",ceil,floor);
        }
    }
    else{
        if (num/(int)num == 1){
            printf("ceil=%d\nfloor = %d",(int)num,(int)num);
        }
        else{
            ceil = num;
            floor = num-1;
            printf("ceil = %d\nfloor = %d",ceil,floor);
        }
    }

    return 0;
}
// void ceil(float num){
//     printf("%d",num+1);

// }
// void floor(float num){
//     printf("%d",num-1);
// }