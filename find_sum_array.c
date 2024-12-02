#include <stdio.h>

void readarray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
}

void printarray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void find_sum(int arr[], int n, int k, int m)
{
    int max_sum = 0;
    for (int i = 0; i < k; i++)
    {
        max_sum= max_sum + arr[i];
    }
    int current_sum = max_sum;
    for (int i = k; i < n; i++)
    {
        current_sum= current_sum + arr[i] - arr[i - k];
        if (current_sum ==m)
        {
            printf("The sub array found: ");
        }
    }
}

int main()
{
    int n,k,m;
    int arr[100];

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the array elements: ");
    readarray(arr, n);

    printf("Enter the array size k: ");
    scanf("%d", &k);

    printf("Enter the sum: ");
    scanf("%d", &m);

    printf("The original array is: ");
    printarray(arr, n);

    find_sum(arr,n,k,m);

    return 0;
}
