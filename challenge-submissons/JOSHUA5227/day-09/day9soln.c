#include<stdio.h>
int main()
{
    int i,n,j,s;

    printf("Enter the width of the diamond : \n");
    scanf("%d",&n);
    
 if(1<=n && n<=200)
 {
    for(i=0;i<=n;i++)
    {
        for(s=1;s<=n-i;s++)
        {
            printf(" ");
        }
            for(j=0;j<=i;j++)
            {
                printf(" #");
            }
        
        printf("\n");
    }   //top half

    for(i=n-1;i>=0;i--)
    {
        for(s=1;s<=n-i;s++)
        {
            printf(" ");
        }
            for(j=0;j<=i;j++)
            {
                printf(" #");
            }
        
        printf("\n");
    } //bottom half

 }

  else
  printf("Please Check if Input is in the range of 1-200");

    return 0;
}