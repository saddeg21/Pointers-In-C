#include <stdio.h>

int main() {
    int arr[] = {11,22,36,5,2};
    int sum, *p;

    for(p=arr;p<=&arr[sizeof(arr)/sizeof(arr[0])-1];p++){
        sum += *p;
    }
    printf("The sum of array is %d",sum);
    return 0;
}
