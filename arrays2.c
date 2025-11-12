#include <stdio.h>

int main() {
    int arr[10] = {9, 1, 2, 5, 7};
    int n = 5;
    int element, pos;

    printf("Enter element to insert: ");
    scanf("%d", &element);

    printf("Enter position (0 to %d): ", n);
    scanf("%d", &pos);

    int *p = arr;

    for (int i = n; i > pos; i--) {
        *(p + i) = *(p + i - 1);
    }

    *(p + pos) = element;
    n++;

    printf("Array after insertion:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(p + i));
    }

    return 0;
}




/*#include<stdio.h>
#include<stdlib.h>
int* insert(int arr[], int size, int idx, int key){
    int* ptr= malloc((size+1)*sizeof(int)); //pointers to array
    for(int i = 0; i<idx;i++){
        ptr[i]=arr[i];
    }
    ptr[idx]=key;
    for (int i = idx+1;i<size+1;i++){
        ptr[i] = arr[i-1];
    }
    return ptr;
}
int main(){
    int arr[]={9,1,2,5,7};
    
    int size = sizeof(arr)/sizeof(int);
    int* ptr=insert(arr,size,2,10);
    for(int i=0;i<size+1;i++){
        printf("%d\t",ptr[i]);
    }
}*/