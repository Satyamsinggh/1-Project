//table of 10 or given no in reverse order:-
#include<stdio.h>
int main(){
    int n;
    printf("Enter Number:-");
    scanf("%d",&n);
    for (int i = 10 ;i;i--)
    {
        printf("%d\n",n*i);
    }
    
    
    return 0;
}