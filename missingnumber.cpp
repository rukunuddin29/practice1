#include <stdio.h >
int missing(int arr[],int n )
{
     int totalSum = (n * (n + 1)) / 2;	
	int sum=0;
	for (int i =0;i<n ; i++)
	{
		sum += arr[i];
	}
	return totalSum-sum;
}
int main (){
    int arr[10];
    int n ;
    printf("enter the value of n ");
    scanf("%d", & n );
   

    printf("Enter %d values:\n", n);
    for (int i = 0; i < n-1; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
	missing (arr,n);
	
	printf("the missing number is %d ",missing(arr,n) );
	
	return 0;
}
