#include <stdio.h>

int main(){
    int arr[7]={0,11,13,14,15,17,18};
    int low = 0;
    int high = 6;

    int searchVal = 15;
    int flag = 0;

    while (low <= high){
        int mid = low + (high - low)/2;
        if (searchVal == arr[mid]){
            flag = 1;
            printf("Found at %d", mid);
            break;
        } else if (searchVal < arr[mid])
        {
            high = mid - 1;
        } else if (searchVal > arr[mid])
        {
            low = mid + 1;
        }
        
    }
    
    if (flag == 0){
        printf("not found");
    }

    return 0;
}