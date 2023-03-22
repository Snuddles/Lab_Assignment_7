// Raulph Peltrop
// Dr. Torosdagli
// COP3502C 
// Lab 7
#include <stdlib.h>
#include <stdio.h>

void bubbleSort(int* pData, int n)
{
    int temp, counter = 0;
    for (int i = 0; i < n-1; i++)
    {
        // Resets counter back to zero to count swaps
        counter = 0;
        // Last i elements are already sorted
        for (int j = 0; j < n-i-1; j++)
        {
            if (pData[j] > pData[j+1])
            {
                // Swap pData[j] and pData[j+1]
                temp = pData[j];
                pData[j] = pData[j+1];
                pData[j+1] = temp;
                counter++;       
            }
        }
        // Prints counter and what pass you're at
        printf("Pass #%d: %d\n", i+1, counter);
    }
}

int main(void)
{
    int arr[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    bubbleSort(arr, sizeof(arr) / sizeof(arr[0]));
    return 0;
}