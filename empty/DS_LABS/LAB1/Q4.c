// degree a 

#include<stdio.h>
void a(void);
void b(void);
struct data {
    char name[10];
    int age;
};
struct data data1[5];
int main(){
    int ch;
    printf("\t\t 1 :    a\n\t\t 2 :    b\nyour choic : ");
    scanf("%d",&ch);
    switch (ch){
        case 1 :
            a();
            break;
        case 2:
            b();
            break;
        default:
            printf("wrong choice");

    }
    return 0;
}
void a (void){
    char name[10],rname[10];
    int age[5],i,j;
    for (i=0;i<5;i++){
        printf("enter name %d: ",i+1);
        scanf("%s",&data1[i].name);
        printf("enter age : ");
        scanf("%d",&data1[i].age);
    }
    //printf("%s\n\n\n\n",name[0]);
    printf("DOM for a = {");
    for(i=0;i<5;i++){
        //for(j=0);

        if(data1[i].age <= 20){
            printf("(%s,1),",data1[i].name);
        }
        else if (data1[i].age <= 30){
            printf("(%s,%.2f),",data1[i].name,((30-data1[i].age)/10.0));
        }
        else{
            printf("(%s,0),",data1[i].name);
        }

    }
    printf("}");
    //printf("%d",(int)a);
    
}

void b(void){
    //char name[5][10],rname[10];
    int age[5],i,j;
    for (i=0;i<5;i++){
        printf("enter name %d: ",i+1);
        scanf("%s",&data1[i].name);
        printf("enter age : ");
        scanf("%d",&data1[i].age);
    }
   // printf("%s\n\n\n\n",name[0]);
    printf("DOM for a = {");
    for(i=0;i<5;i++){
        //for(j=0);

        if(data1[i].age <= 15){
            printf("(%s,1),",data1[i].name);
        }
        else if (data1[i].age <= 35){
            printf("(%s,%.2f),",data1[i].name,((35-data1[i].age)/20.0));
        }
        else{
            printf("(%s,0),",data1[i].name);
        }

    }
    printf("}");
}