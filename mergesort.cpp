#include<stdio.h>
#include<conio.h>
void printarray(int *,int);
void mergesort(int *,int, int);
void merge(int *,int,int,int);
int main()
{
	int a[]={2,3,1,12,13,4,16};
	int n=7;
	printarray(a,n);
	mergesort(a,0,n-1);
	printarray(a,n);
	getch();
}
void printarray(int *a,int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
}
void mergesort( int a[],int low,int high)
{
	int mid;
	if(low<high)
	{
	mid=(low+high)/2;
	mergesort(a,low,mid);
	mergesort(a,mid+1,high);
	merge(a,mid,low,high);	
	}
}
void merge(int a[],int mid,int low,int high)
{
	int i,j,k,b[100];
	i=low;
	j=mid+1;
	k=low;
	while(i<=mid&&j<=high)
	{
		if(a[i]<a[j])
		{
			b[k]=a[i];
			i++;
			k++;
		}
		else
		{
			b[k]=a[j];
			j++;
			k++;
		}
	}
	while(i<=mid)
	{
		b[k]=a[i];
		i++;k++;
	}
	while(j<=high)
	{
		b[k]=a[j];
		j++;k++;
	}
	for(int i=low;i<=high;i++)
	{
		a[i]=b[i];
	}
}
