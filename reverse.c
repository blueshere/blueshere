#include <stdio.h>
#include <stdlib.h>

void reverseArray(int *arr, int size){
int *start = arr;
int *end = arr + size -1;

while(start<end){
    int temp= *start;
    *start=*end;
    *end= temp;

    start++;
    end--;
}
}
int main(){
    int Array[]= {10,20,30,40,50};
    int size = sizeof(Array)/sizeof(Array[0]);
    int i;
    printf("original array :");
    for (i=0; i<size; i++){
        printf("%d ", Array[i]);
    }
    reverseArray(Array, size);
    printf("\nreversing an array:");
    for (i=0;i<size; i++){
        printf("%d ", Array[i]);
    }
    printf("\n");
    return 0;
}