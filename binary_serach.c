#include <stdio.h>

int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size;

    while (start <= end)
    {

        int mid = (start + end) / 2;

        if (arr[mid] == key)
        {
            // printf("number at index : %d", mid)
            // printf("number at index : %d", mid)
            // printf("number at index : %d", mid)
            
            return mid;
        }

        else if (arr[mid] > key)
        {
            start = mid - 1;
        }
        else
        {
            end = mid + 1;
        }
    }
    return -1;
}
int main()
{
    int size = 5;
   
    

    int arr[5]={10 ,20 ,30 ,40,50};
    int key;
    printf("enter the key : ");
    scanf("%d", &key);

    int result = binarySearch(arr, size, key);
    (result == -1)?printf("the element was not presnt in arr")
                  : printf("the element at index %d",result);
}