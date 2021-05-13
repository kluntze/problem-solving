#include <stdio.h>
#include <stdbool.h> 


int binary_search(int num_array[], int size, int item)
{
    int first = 0, last = size;
    
    while (first <= last) {
        int midpoint = (first + last) / 2;
        if (num_array[midpoint] == item) {
            return num_array[midpoint];
        } else {
            if (item < num_array[midpoint]) {
                last -= 1;
            } else {
                first += 1;
            }
        }
    }
    
    return 0;
}

int main()
{
    int num_array[5], size, item, counter = 1;
    
    for (int i = 0; i < 5; ++i) {
        printf("Input #%d: ", counter);
        scanf("%d", &num_array[i]);
        counter++;
    }
    
    size = sizeof(num_array)/sizeof(num_array[0]);
    
    printf("The list: ");
    for (int i = 0; i < sizeof(num_array)/sizeof(num_array[0]); ++i) {
        printf("%d ", num_array[i]);
    }
    
    printf("\n\nInput an integer to search: ");
    scanf("%d", &item);
    
    int output = binary_search(num_array, size, item);

    if (output == 0) {
        printf("Number %d wasn't found.\n", item);
    } else {
        printf("Number %d was found.\n", item);
    }
    
    return 0;
}