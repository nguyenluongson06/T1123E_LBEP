#include <stdio.h>
#include <string.h>

typedef struct {
    char name[30];
    float score;
} Student;

/// @brief swap student in array
/// @param a 
/// @param b 
void swapStudent(Student arr[], int a, int b){
    char temp[30];
    float tempScore;

    //swap here
    strcpy(temp, arr[a].name);
    strcpy(arr[a].name, arr[b].name);
    strcpy(arr[b].name, temp);

    tempScore = arr[a].score;
    arr[a].score = arr[b].score;
    arr[b].score = tempScore;

    return;
}

/// @brief bubble sort the student array based on name 
/// @param arr student array to sort
/// @param size array size
void sortByName(Student arr[], int size){
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size - i - 1; j++){
            if (strcmp(arr[j].name, arr[j+1].name) > 0){
                swapStudent(arr, j, j+1);
            }
        }
    }
    return;
}

/// @brief bubble sort the student array based on score 
/// @param arr student array to sort
/// @param size array size
void sortByScore(Student arr[], int size){
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size - i - 1; j++){
            if (arr[j].score > arr[j+1].score){
                swapStudent(arr, j, j+1);
            }
        }
    }
    return;
}

int main(){
    Student testStudents[] = {
        {"Emma", 8.9},
        {"Liam", 9.2},
        {"Olivia", 7.8},
        {"Noah", 9.5},
        {"Ava", 8.7},
        {"William", 9.1},
        {"Sophia", 8.3},
        {"James", 8.8},
        {"Isabella", 9.4},
        {"Benjamin", 7.6}
    };

    sortByName(testStudents, 10);

    printf("Students sorted by name: \n");
    for (int i = 0; i < 10; i++){
        printf("%s - %f\n", testStudents[i].name, testStudents[i].score);
    }
    printf("\n");

    printf("Students sorted by test score: \n");
    sortByScore(testStudents, 10);
    for (int i = 0; i < 10; i++){
        printf("%s - %f\n", testStudents[i].name, testStudents[i].score);
    }
}