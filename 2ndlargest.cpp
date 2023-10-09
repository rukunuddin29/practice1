#include <stdio.h>
void bubblesort (int arr[], int n ){
	int temp;
	for (int i =0;i<n-1; i++){
		for (int j=0;j<n-i-1;j++){
			if (arr[j]>arr[j+1])
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]= temp;
			}
	}	
}
int main() {
    int n;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("Invalid array size. Please enter a size greater than 1.\n");
        return 1; // Exit with an error code
    }

    int arr[n];

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

 bubblesort(arr, n);

     printf("The second largest element is: %d\n", arr[n-2]);

    return 0;
}
