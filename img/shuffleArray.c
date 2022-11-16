#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter the elements: \n");
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    int odd=1,even=0;;
    int final[n];
    for(int i=0;i<n/2;i++) {
        final[even]=arr[i];
        final[odd]=arr[(n/2)+i];
        odd+=2;
        even+=2;
    }
    for(int i=0;i<n;i++) {
        printf("%d",final[i]);
    }
    return 0;
}