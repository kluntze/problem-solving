#include <stdio.h>


int linear_search(int num_arr[], int item, int size)
{
    int pos = 0, length = size;
    
    while (pos < length) {
        if (num_arr[pos] == item)
            return num_arr[pos];
        else
            pos += 1;
    }
    
    return 0;
}


int main()
{
    int num_arr[5], item, size, counter = 1;
    
    for (int i = 0; i < 5; ++i) {
        printf("Input #%d: ", counter);
        scanf("%d", &num_arr[i]);
        counter++;
    }
    
    size = sizeof(num_arr)/sizeof(num_arr[0]);
    
    printf("Input number to search: ");
    scanf("%d", &item);
    
    int output = linear_search(num_arr, item, size);
    if (output == 0)
        printf("Number %d wasn't found.\n", item);
    else
        printf("Number %d was found.\n", item);
    
    return 0;
}