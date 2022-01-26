#include <stdio.h>
int main()
{
    int size;
    int arr[size];
    printf("Enter the size of arr : ");
    scanf("%d", &size);
    // int arr[]={10,100,50,60,30};
    printf("enter the elementsof arr : ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    // int size = sizeof(arr)/sizeof(arr[0]);
    for (int i = 1; i < size; i++)
    {
        int current = arr[i];
        int j = i - 1;
        while (arr[j] > current && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}