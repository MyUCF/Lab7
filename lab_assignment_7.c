#include <stdio.h>


void swap(int* n1, int* n2){
    
    int placeholder = *n1;
    
    *n1 = *n2;
    *n2 = placeholder;
    
}

void printArr(int arr[], int size){
    for(int x = 0; x < size;x++) {
        printf("%d,",arr[x]);
    }
    printf("\n");
}


void bubbleSort(int arr[], int size,int total){
    
    if(size == 1)
        return;
    
    
        int swapsreq = 0,index = 0;
    
    while (index < size - 1) {
        
            if(arr[index] > arr[index+1]){
                swapsreq++;
                swap(&arr[index], &arr[index+1]);
            }
        index++;
        }
        
    if(swapsreq == 0){
        printf("No more swaps needed!\n");
        return;
    }
            
        
        printf("Swaps for %d: %d\n",total-size,swapsreq);
        
    
    
    return bubbleSort(arr, size-1,total);

}



int main(int argc, const char * argv[]) {
    const int size = 9;
    int arr[size] = {97,16,45,63,13,22,7,58,72};
    

    
    printf("Before:\n");
    printArr(arr,size);
    
    bubbleSort(arr, size,size);
    
    
    printf("After:\n");
    printArr(arr,size);
    
    return 0;
}
