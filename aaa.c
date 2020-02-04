#include<stdio.h>
void main()
{ 
   int arr[10],x,n,i;
   printf("enter no of elements in the array");
   scanf("%d",&n);
   printf("enter array element");
for(i=0;i<n;i++)
   scanf("%d",&arr[i]);
   printf("enter key");
   scanf("%d",&x);
for(i=0;i<n;i++)
{
if(x==arr[i])
{
	printf("1\n");
	break;
}
}
if(x!=arr[i])
{
printf("-1\n");
}
}

    

