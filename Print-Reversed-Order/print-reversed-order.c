#include <stdio.h>
#define LENGTH 5

int main() {
    int arr[LENGTH],*p;
    printf("Please provide us %d values to fill array \n",LENGTH);
    for(p=arr;p<=&arr[LENGTH-1];p++) {
        scanf("%d",p);
    }

    printf("In the reversed order, array looks like this:\n");

    for(p=arr+LENGTH-1;p>=&arr[0];p--) {
        printf("%d\n",*p);
    }

    return 0;
}
