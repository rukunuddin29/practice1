#include <stdio.h>

void bubble (int arr[], int n ){
	int temp;
	for (int i =0;i<n-1;i++)
	{
		for (int j=0;j<n-i-1;j++)
		{
			if (arr[j]> arr[j+1]){
			//swap 
			
			temp = arr[j];
			arr[j]=arr[j+1];
			arr[j+1]= temp;
		}
		}
	}
}
int main() {
    int arr[5];
    int n = 5;
    int orgarr,sortarr;

    printf("Enter %d values:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
    	 orgarr=arr[i];
	}
     

    bubble(arr, n);

    for (int i = 0; i < n; i++) {
    	 sortarr=arr[i];
	}
	if (orgarr==sortarr){
	printf("the array is sorted ");
}
	
	else {
		printf("the array is not sorted ");
	}
 
    return 0;
}

