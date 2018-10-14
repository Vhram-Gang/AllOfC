#include<stdio.h>

int main(){
    printf("Sum of first n numbers\n");
    printf("Enter n: ");
    int n,sum=0;
    scanf("%d",&n);

    for (int i=0; i<=n; i++)
        sum=sum+i;
        printf("Sum is = %d\n",sum);
}
