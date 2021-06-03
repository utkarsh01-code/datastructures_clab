
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int *arr;
	int i, n ,j;//j is element we going to search for
	printf("size of array: \n");
	scanf(" %d", &n);
	arr = (int *)malloc(n*sizeof(int));
	for (i = 0; i < n; ++i)
	{
		printf("Enter the arrays:arr[%d]\n", i);
		scanf(" %d", (arr+i));
	}
	for (i = 0; i < n; ++i)
	{
		printf(" showing the arrays : arr[%d] = %d\n", i, *(arr+i));
	}
	arr = realloc(arr,(n* sizeof(int)+1));
	printf("enter the new array element : arr[%d]\n", n);
	scanf(" %d", (arr+n));
	for (i = 0; i < n+1; ++i)
	{
		printf(" showing the arrays : arr[%d] = %d\n", i, *(arr+i));
	}
    //performing a linear search 
    printf("Enter element to search:"); 
    scanf("%d",&j);
     
    for(i=0;i<n+1;++i)
        if(arr[i]==j)
            break;
     
    if(i<n+1)
        printf("Element found at index %d",i); 
    else
        printf("Element not found"); 
  
    return 0;
}