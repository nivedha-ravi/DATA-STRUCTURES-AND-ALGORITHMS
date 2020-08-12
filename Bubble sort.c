/*
Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in wrong order.
Example:
First Pass:
( 5 1 4 2 8 ) –> ( 1 5 4 2 8 ), Here, algorithm compares the first two elements, and swaps since 5 > 1.
( 1 5 4 2 8 ) –>  ( 1 4 5 2 8 ), Swap since 5 > 4
( 1 4 5 2 8 ) –>  ( 1 4 2 5 8 ), Swap since 5 > 2
( 1 4 2 5 8 ) –> ( 1 4 2 5 8 ), Now, since these elements are already in order (8 > 5), algorithm does not swap them.

Second Pass:
( 1 4 2 5 8 ) –> ( 1 4 2 5 8 )
( 1 4 2 5 8 ) –> ( 1 2 4 5 8 ), Swap since 4 > 2
( 1 2 4 5 8 ) –> ( 1 2 4 5 8 )
( 1 2 4 5 8 ) –>  ( 1 2 4 5 8 )
Now, the array is already sorted, but our algorithm does not know if it is completed. The algorithm needs one whole pass without any swap to know it is sorted.

Third Pass:
( 1 2 4 5 8 ) –> ( 1 2 4 5 8 )
( 1 2 4 5 8 ) –> ( 1 2 4 5 8 )
( 1 2 4 5 8 ) –> ( 1 2 4 5 8 )
( 1 2 4 5 8 ) –> ( 1 2 4 5 8 )

Time Complexity: Ο(n2)
*/


#include <stdio.h>

int main() {

	int n;
	scanf("%d\n",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
	    scanf("%d ",&a[i]);
	}
	for(int i=0;i<n;i++)
	{
	    for(int j=0;j<n-1;j++)
	    {
	        if(a[j]>a[j+1])
	        {
	            int temp=a[j];
	            a[j]=a[j+1];
	            a[j+1]=temp;
	        }
	    }
	}
	for(int i=0;i<n;i++)
	{
	    printf("%d ",a[i]);
	}
	return 0;
}
