//program to calculate factorial of given number:-
#include<stdio.h>
int main(){
    int n;
    printf("Enter number:");
    scanf("%d",&n);
    int fact=1;
   /* for (int i = 1; i <= n; i++)
    {
        /* code fact=fact*i;
        printf("%d\n",fact);
    }*/
    int i =1;
    while (i<=n)
    {
        fact*=i;
        i++;
    }printf("%d",fact);
    
    
    return 0;
}