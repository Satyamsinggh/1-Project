//program to add n natural number using while loop
#include<stdio.h>
int main(){
    int n;
    printf("Enter number:-");
    scanf("%d",&n);
    int i=1;
    int sum=0;
    while (i<=n)
    {
        sum+=i;
        printf("%d\n",sum);
        i++;
    }
    

    return 0;
}