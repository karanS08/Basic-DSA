#include <stdio.h>
int main()
{
    int i, j, n, key, array[100] ,ans;
    printf("Enter number of elements");
    scanf("%d", &n);
    printf("Enter %d integers", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("Enter value to find");
    scanf("%d", &key);
    while (j != key)
    {
        for(i = 0; i < n; i++)
        {
            j = array[i];
            if(j == key){
                i = ans;
                return ans;
                break;
            }
            

        
        }
    
    }

    return 0;
}