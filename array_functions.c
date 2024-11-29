#include <stdio.h>

int main()
{
    // generating an array
    int arr_len;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &arr_len);

    int arr[arr_len];
    for (int i = 0; i < arr_len; i++)
    {
        printf("Enter the value: ");
        scanf("%d", &arr[i]);
    }
    // average of array
    printf("\nCalculating Average!");

    float sum = 0;
    float avg;
    for (int i = 0; i < arr_len; i++)
    {
        sum += arr[i];
    }

    avg = sum / arr_len;
    printf("Average of the array is: %.1f", avg);
    // largest of array
    printf("\nFinding the largest of the array!");

    int largest = 0;
    for (int i = 0; i < arr_len; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    printf("Largest of the array is: %d", largest);
    // arrange is descending order
    printf("\nArrangeing in descending order!");

    for (int i = 0; i < arr_len; i++)
    {
        for (int j = i + 1; j < arr_len; j++)
        {
            if (arr[i] < arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (int i = 0; i < arr_len; i++)
    {
        printf("%d ", arr[i]);
    }
}
