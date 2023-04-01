#include<stdio.h>

// sort array in ascending order
void sortInAscendingOrder(int array[], int size){
    for (int i = 0; i < size - 1; i++)
    {
        /* code */
        for (int j = 0; j < size - 1; j++)
        {
            /* code */
            if (array[j] > array[j+1])
            {
                /* code */
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
            
        }
        
    }
    
}

// print sort in ascending order
void printAscendingOrder(int array[], int size){
    for (int i = 0; i < size; i++)
    {
        /* code */
        printf("%d ", array[i]);
    }
    
}


// sort in descending order
void sortDescendingOrder(int array[], int size){
   for (int i = 0; i < size - 1; i++)
   {
    /* code */
    for (int j = 0; j < size - 1 ; j++)
    {
        /* code */
        if (array[j] < array[j+1])
        {
            /* code */
            int temp = array[j];
            array[j] = array[j+1];
            array[j+1] = temp;
        }
        
    }
    
   }
   
}

// print sort in descending order
void printDescendingSort(int array[], int size){
    for (int i = 0; i < size; i++)
    {
        /* code */
        printf("%d ", array[i]);
    }
    
}


int main(){

    int array[] = {23367, 3663, 63683, 74, 17837, 100, 1, 9, 8, 56, 57, 124, 7175, 5398};
    int size = sizeof(array)/sizeof(array[0]);

    printf("Sorting an array in Ascending order\n");
    sortInAscendingOrder(array, size);
    printAscendingOrder(array, size);
    
    printf("\n");

    printf("Sorting an array in descending order\n");
    sortDescendingOrder(array, size);
    printDescendingSort(array, size);

    return 0;
}