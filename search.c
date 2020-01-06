//
//includes
//

#include <stdio.h>

//
//functions
//

int binSrcI(int Arr[],int size, int x); // iterative binary search

//
//main
//

int main()
{
	int A[] = {0,2,4,6,8,10};
	int src;
	printf("Which number would you like to search?\n");
	scanf("%d",&src);
	int index = binSrcI(A,sizeof(A)/sizeof(A[0]),src);
	(index == -1) ? printf("Number was not found in the array.\n")
	              : printf("The index of the number searched for is %d.\n", index);
	return 0;
}

int binSrcI(int Arr[],int size, int x)
{
	int low = 0;
	int hi = size - 1;
	int m;
	while(low <= hi)
	{
		m = low + (hi - low) / 2;

		if(x == Arr[m]) return m;

		if(x < Arr[m]) hi = m - 1;
		else low = m + 1;
	}

	return -1;
}
