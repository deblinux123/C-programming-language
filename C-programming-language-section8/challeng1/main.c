#include <stdio.h>
#include <string.h>




void reverseString(char txt[]);
void bubbleSort(int arr[], int size);

int main()
{
    char text[] = "Hello my name is ali";
    reverseString(text);
    
    int num[] = {12, 3, 4, 2, 41, 43};
    int size = sizeof(num)/ sizeof(num[0]);
    
    bubbleSort(num, size);
    
    return 0;
}


void reverseString(char txt[])
{
    int len = strlen(txt);
    printf("Revers is:\n");
    
    for (int i = 0; i <= len; i++){
        printf("%c", txt[len - i]);
    }
    
    printf("\n\n");
}

void bubbleSort(int arr[], int size)
{
    int temp;
    
    for (int i = 0; i < size - 1; i++){
        for (int j = 0; j < size - i - 1; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    
    printf("Sorted Array: ");
    for (int k=0; k < size; k++)
        printf("%d\t", arr[k]);
        
    printf("\n");
}