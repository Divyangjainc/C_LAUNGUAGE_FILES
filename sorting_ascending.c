#include <stdio.h>

void main() {
    int arr[10] = {5,6,5,1,2,3,21,4,8,9};

    int temp;
    printf("\n");

    for (int i = 0;i < 10;i++) {
        printf("%d ", arr[i]);
    }

    for (int i = 0; i < 10; i++) {
        // printf("%d ", arr[i]);

        for (int j = i + 1; j < 10; j++){
            // ascending order

            if (arr[j] > arr[i]){
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;

            }
    }
}    
    printf("\n\n");

    for (int i = 0; i < 10; i++) {
    printf("%d ", arr[i]);
    }
}