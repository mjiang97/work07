#include <stdlib.h>
#include <stdio.h>

void print_arr(int *arr, int len) {
    int i = 0;
    printf("[ ");
    while(i<len) {
        printf("%d ", *(arr+i));
        i++;
    }
    printf("]\n");
}

double average(int *arr, int len) {
    int sum, i; 
    double avg;
    while(i<len) {
        sum += arr[i];
        i++;
    }
    avg = sum/len;
    return avg;
}

int copy(int *arr, int *arr2, int len) {
    int i = 0;
    while(i<len) {
        arr2[i] = *(arr+i);
        i++;
    }
    return *arr2;
}

int main() {
    int len = 7;
    int arr[len];
    int arr2[len];
    for(int i = 0; i<len; i++) {
        arr[i] = i + 2;
    }
    for(int i = 0; i<len; i++) {
        arr2[i] = i + 4;
    }

    print_arr(arr, len);
    printf("average: %f\n", average(arr, len));

    printf("\n");
    printf("before copying:\n");
    print_arr(arr, len);
    print_arr(arr2, len);
    printf("\n");

    printf("after copying:\n");
    copy(arr, arr2, len);
    print_arr(arr, len);
    print_arr(arr2, len);
    printf("\n");

    return 0;
}