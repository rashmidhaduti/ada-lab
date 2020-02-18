#include<stdio.h>
int recursivels(int arr[],int n,int k,int index)
{
	int pos=0;
	if(index>=n)
	{
		return 0;
	}
	else if(arr[index]==k)
	{
		pos=index+1;
		return pos;
	}
	else
	
	return	recursivels(arr,n,k,index+1);
	
	
}
void main()
{
	int arr[100], n,i,k,pos;
	printf("enter no of elenents");
	scanf("%d",&n);
	printf("enter elements in the array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter element to be search");
	scanf("%d",&k);
	pos=recursivels(arr,n,k,0);
	if(pos!=0)
	{
		printf("element is present in the array at pos %d",pos);
	}
	else
	{
		printf("element is not present in the array");
	}

} 	
		
