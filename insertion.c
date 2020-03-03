#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main()
{
clock_t start,end;
double timer;
int arr[30],size,key;
printf("\nEnter array size");
scanf("%d",&size);
printf("\nEnter array element");
for(int i=0;i<size;i++)
{
 scanf("%d",&arr[i]);
}
for(int i=1;i<size;i++)
{
key=arr[i];
int j=i-1;
start=clock();
while(j>=0&&arr[j]>key)
{
arr[j+1]=arr[j];
j--;
}
arr[j+1]=key;
}
end=clock();
timer=((double)(end-start)/CLOCKS_PER_SEC);
printf("\nSorted array is...");
for(int i=0;i<size;i++)
{
printf("%d  ",arr[i]);
}
printf("\n time taken is%f",timer);
return;
}
