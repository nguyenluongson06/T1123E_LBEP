#include <stdio.h>
#include <math.h>

int main(){
    int arr[1000]; //C does not allow dynamic array, so...
    int n;
    printf("Input n: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        printf("Input item %d:", i);
        int temp;
        scanf("%d", &temp);
        arr[i] = temp;
    }

    int max_frequency = 1;
    int index = 0;
    int freq_length = 0;
    int freq[1000];

    //while length of freq_array < length of original array
    while (freq_length < n){
        //set counter & index of next item to iterate from
        int counter = 1;
        int inner_index = index + 1;

        //while the inner index is inbound
        while (inner_index < n){
            //if value duplicated
            if (arr[inner_index] == arr[index]){
                //then push all items up 1 pos towards the start
                for (int i = inner_index; i < n; i++){
                    arr[i] = arr[i+1];
                }
                //then decrease total number of items
                n--;
                //and increase the counter
                counter++;
            }
            //always increase the index
            inner_index++;
        }

        //add item to the freq array
        freq_length++;
        freq[freq_length-1] = counter;
        
        //if the counter is bigger than the current max freq
        if (counter > max_frequency) {
            max_frequency = counter;
        }

        index++;
    }
    
    printf("Most frequent item(s): ");

    for (int i = 0; i < freq_length - 1; i++){
        if (freq[i] == max_frequency){
            printf("%d ", arr[i]);
        }
    }
}