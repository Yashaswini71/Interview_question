#include<stdio.h>

int find_middle(int *arr,int size);

int main()
{
	int arr[100],size,middle;
	printf("Enter size of the array:");
	scanf("%d",&size);
	printf("Enter the %d elements of array:\n",size);
	for(int i=0;i<size;i++)
	{
		scanf("%d",(arr+i));
	}
	middle = find_middle(arr,size);
	printf("The middle element in the array is: %d\n",middle);
	return 0;
}

int find_middle(int *arr,int size)
{
	int i,middle;
	middle = arr[size/2];
	return middle;
}


