#include <stdio.h>

int main(){
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter numbers:\n");
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int result = 0;
    int lastEven = arr[n-1];
    for (int i = n-1; i >=0 ; i--)
    {
        if (arr[i] % 2 == 0){
            result = 1;
            lastEven = arr[i];
            break;
        }
    }
    if (result == 1){
        printf("Last Even: %d", lastEven);
    } 
    else 
    {
        printf("No EVEN number");
    }
    return 0;
}