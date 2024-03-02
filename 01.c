//program to find table of the entred number-
#include<stdio.h>
int main(){
    int n;
    printf("Enter number:-");
    scanf("%d",& n );
    printf("The table of the entered number is:=\n");
    int i =1;
    while (i<=10)
    {
        
        /* code */printf("%d\n",n*i);
        i++;
    }
    

    
    return 0;
}