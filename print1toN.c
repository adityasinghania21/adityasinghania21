#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the number to print:");
    scanf("%d",&n);
    for (int i = n ;i>0 ; i--)
    {
        printf("%d \n",i );
    }
    
    return 0;
}
