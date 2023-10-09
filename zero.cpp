#include <stdio.h>
void zero(int arr[], int n ){
	for (int i =0;i<n;i++){
		for (int j=0;j<n-1;j++){
			if (arr[j]==0){
				arr[j]=arr[n];
			}
			n++;
		}
	}
}
int main (){
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

     zero(arr, n);
 
 for (int i = 0; i < n; i++) {
        printf("edited array  %d: ", arr[i]);
    
}
     
    return 0;

}
