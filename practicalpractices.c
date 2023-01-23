#include <stdio.h>


// perform the bubble sort
void bubbleSort(int array[], int size) {

  // loop to access each array element
  for (int step = 0; step < size - 1; ++step) {
      
    // loop to compare array elements
    for (int i = 0; i < size - step - 1; ++i) {
      
      // compare two adjacent elements
      // change > to < to sort in descending order
      if (array[i] > array[i + 1]) {
        
        // swapping occurs if elements
        // are not in the intended order
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
      }
    }
  }
}

// print array
void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}

int main() {
  int data[] = {1,4,382,79,44,86};
  int key,i,flag = 0;
  
  
  // find the array's length
  int size = sizeof(data) / sizeof(data[0]);

  bubbleSort(data, size);
  
  printf("Sorted Array in Ascending Order:\n");
  printArray(data, size);
  
      printf("Enter element to search\n");
    scanf("%d",&key);


    for(i = 0; i < size; i++)
    {
        if(data[i] == key)
        {
            flag = 1;
            break;
        }
    }

    if(flag == 1)
        printf("Search Found\n");
    else
        printf("Search Not Found\n");
  
}
