// G1) Devise an algorithms of Insertion sort 
#include<stdio.h>
int main(){
    int arr[] = {9,8,7,6,5,4,3,2,1,0}, i, j, key, n;
    n = sizeof(arr)/sizeof(int);
    for(i = 1; i<n; i++){
        key = arr[i];
        j = i-1;
        while(j>-1 && arr[j] > key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
    printf("Array after sorting : ");
    for(i = 0; i<n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
