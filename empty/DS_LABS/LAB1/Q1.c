// UNION AND INTERSECTION
#include<stdio.h>
#include<math.h>
#include<string.h>


void a_b(int num1[],int num2[]);
void b_a(int num1[],int num2[]);
void cartesian(int num1[],int num2[]);
void unon(int num1[],int num2[]);
void intersection (int num1[],int num2[]);
void sym(int num1[],int num2[]);


int set1[20],set2[20],set[40],inter[20],ab[10],ba[10];
int cset1,cset2,icount;


int main (){
    int i,j,count,max;
    
    printf("\t\t\tOperation for set 1 : \n\n\n");
    printf("enter number of elemnt of set 1 :");
    scanf("%d",&cset1);
    for (i=0;i<cset1;i++){
        scanf("%d",&set1[i]);
      
    }
    printf("\t\t\tOperation for set 2 : \n\n\n");
    printf("enter number of elemnt of set 2 :");
    scanf("%d",&cset2);
    for (i=0;i<cset2;i++){
        scanf("%d",&set2[i]);
      
    } 
    
     printf("\n\n\n");
     unon(set1,set2);
     printf("\n\n\n");
     intersection(set1,set2);
     printf("\n\n\n");
     a_b(set1,set2);
     printf("\n\n\n");
     cartesian(set1,set2);
     printf("\n\n\n");
     b_a(set1,set2);
     printf("\n\n\n");
     //a_b(set2,set1);
     sym(set1,set2);
    

    return 0;
}


void unon(int num1[],int num2[]){
    int i,j=0,k=0,ele,c=1,count,len,common=0;
    count=cset1;
    //printf("%d,",set1[0]);
    //printf("%d\n",count);
    for (i=0;i<cset1;i++){
        
            set[i] = set1[i];
        
    }
    
    for (i=0;i<cset2;i++){
        ele = set2[i];
        for(j=0;j<cset1;j++){
            if(ele == set[j]){
                c=0;
                common++;
                break;
            }
        }
        if(c!=0){
            set[count] = ele;
            count++;
        }
        //k++;
        c=1;
    }
    //len = strlen(set);
    //printf("%d"sizeof(set));
    printf("UNION = {");
    for (i=0;i<(cset1+cset2-common);i++){
        if (i==0){
        printf("%d",set[i]);
        }
        else{
            printf(",%d",set[i]);
            
        }
    }
    printf("}");


}


void intersection(int num1[],int num2[]){
    int i,j=0,k=0,ele,c=1,count,len,common=0;
    count=cset1;
    
    //printf("%d\n",count);
    for (i=0;i<cset1;i++){
        
        set[i] = set1[i];
        
    }
    
    for (i=0;i<cset2;i++){
        ele = set2[i];
        for(j=0;j<cset1;j++){
            if(ele == set[j]){
                c=0;
                inter[k] = ele;
                k++;
                common++;
                
            }
        }
        // if(c!=0){
        //     set[count] = ele;
        //     count++;
        // }
        // //k++;
        // c=1;
    } 
    printf("INTERSECTION = {");
    for (i=0;i<common;i++){
        icount++;
        if (i==0){
            printf("%d",inter[i]);
        }
        else{
            printf(",%d",inter[i]);
        }
    }
    printf("}");
}
//printf("%d",inter[0]);



void cartesian (int num1[],int num2[]){
    int i,j,x=0;
    printf("A X B = {");
    for (i=0;i<cset1;i++){
        for (j=0;j<cset2;j++){
            if (x==0){
                printf("(%d,%d)",set1[i],set2[j]);
                x++;
            }
            else{
                printf(",(%d,%d)",set1[i],set2[j]);
            }
        }
    }
    printf("}");


}


void a_b(int num1[],int num2[]){
    int i,j,var=0,temp=icount,k=0;
    //printf("%d,",inter[1]);
    
    for (i=0;i<cset1;i++){
        for (j=0;j<icount;j++){
            if (set1[i] != inter[j]){
                var++;
            }
            
        }
        //printf("\n%d\n",var);
        if(var == temp){
            ab[k] = set1[i];
            k++;
        }
        var =0;
    }
    printf("SET1 - SET2 = {");
    for (i=0;i<(cset1-icount);i++){
        if (i==0){
            printf("%d",ab[i]);
        }
        else{
            printf(",%d",ab[i]);
        }
    }
    printf("}");
}

void b_a(int num1[],int num2[]){
    int i,j,var=0,temp=icount,k=0;
    //printf("%d,",inter[1]);
    
    for (i=0;i<cset2;i++){
        for (j=0;j<icount;j++){
            if (set2[i] != inter[j]){
                var++;
            }
            
        }
        //printf("\n%d\n",var);
        if(var == temp){
            ba[k] = set2[i];
            k++;
        }
        var =0;
    }
    printf("SET2 - SET1 = {");
    for (i=0;i<(cset2-icount);i++){
        if (i==0){
            printf("%d",ba[i]);
        }
        else{
            printf(",%d",ba[i]);
        }
    }
    printf("}");
}


void sym(int num1[],int num2[]){
    int len_ab,len_ba,i,j,k=0,sym[10];
    len_ab = (cset1-icount);
    len_ba = (cset2-icount);
    // printf("%d\n",ba[0]);
    // printf("%d",len_ba);
    for(i=0;i<len_ab;i++){
        sym[k] = ab[i];
        k++;
    }
    for(i=0;i<len_ba;i++){
        sym[k] = ba[i];
        k++;
    }
    printf("SYMMETRIC DIFF = {");
    for (i=0;i<(len_ab+len_ba);i++){
        if (i==0){
            printf("%d",sym[i]);
        }
        else{
            printf(",%d",sym[i]);
        }
    }
    printf("}");

}