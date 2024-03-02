//program to count given natural number:
#include<stdio.h>
int main(){
    int i;
    printf("Enter number:");
    scanf("%d",&i);
    int count =0;
    for (int n=1;n<=i;n++)
    {
        /* code */count+=1;
        printf("%d\n",count);
    }
    
    return 0;
}