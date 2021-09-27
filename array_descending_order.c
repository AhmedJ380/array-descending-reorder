#include<stdio.h>
int *Sort_ArrayDesc(int arr[], int Size);
int main()
{
	int array[50], i, j, Size;
	int *a;
	
	printf("\nPlease Enter the Number of the elements in an array  :  ");
	scanf("%d", &Size);
	
	printf("\nPlease Enter %d elements of an Array \n", Size);
	for (i = 0; i < Size; i++)
	{
		scanf("%d", &array[i]);
    }  
	
	a = Sort_ArrayDesc(array, Size);   

	printf("\n  Array of Elemenst in Descending Order are : \n");
	for (i = 0; i < Size; i++)
	{
		printf("  %d ",  a[i]);
	}	
	return 0;
}

int *Sort_ArrayDesc(int arr[], int Size)
{
	int i, j, temp;
	
	for (i = 0; i < Size; i++)
	{
		for (j = i + 1; j < Size; j++)
		{
			if(arr[i] < arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}			
		}
	}
	return arr;	
}