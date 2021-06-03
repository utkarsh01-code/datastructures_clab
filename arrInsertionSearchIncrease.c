
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int *arr;
	int i, size ,searchelement;//j is element we going to search for
	printf("size of array: \n");
	scanf(" %d", &size);
	arr = (int *)malloc(n*sizeof(int));
	for (i = 0; i < size; ++i)
	{
		printf("Enter the arrays:arr[%d]\n", i);
		scanf(" %d", (arr+i));
	}
	for (i = 0; i < size; ++i)
	{
		printf(" showing the arrays : arr[%d] = %d\n", i, *(arr+i));
	}
	arr = realloc(arr,(size* sizeof(int)+1));
	printf("enter the new array element : arr[%d]\n", size);
	scanf(" %d", (arr+size));
	for (i = 0; i < size+1; ++i)
	{
		printf(" showing the arrays : arr[%d] = %d\n", i, *(arr+i));
	}
    //performing a linear search 
    printf("Enter element to search:"); 
    scanf("%d",&searchelement);
     
    for(i=0;i<size+1;++i)
        if(arr[i]==searchelement)
            break;
     
    if(i<size+1)
        printf("Element found at index %d",i); 
    else
        printf("Element not found"); 
  
    return 0;
}
