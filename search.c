#include <stdio.h>

//
//functions
//

int binSrcI(int Arr[], int x); // iterative binary search

int main()
{
	int A[] = {0,2,4,6,8,10};
	int src = 6;
	int index = binSrcI(A,src);
	printf("The index of the number searched for is %6d\n", index);
	return 0;
}

int binSrcI(int Arr[], int x)
{
	int n = 6; 
	int low = 0;
	int hi = n - 1;
	int m;
	while(low <= hi)
	{
		m = low + (hi + 1) / 2;

		if(x == Arr[m]) return m;

		if(x < Arr[m]) hi = m - 1;
		else low = m + 1;
	}

	return -1;
}
