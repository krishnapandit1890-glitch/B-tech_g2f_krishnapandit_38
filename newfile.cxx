#include<stdio.h>
int main()
{int factorial =1,n;
printf("Enter the number:");
scanf("%d",&n);
for (int i=1;i<=n;i++)
{ factorial *=i;
}
printf("factorial is %d",factorial);

return 0;
}