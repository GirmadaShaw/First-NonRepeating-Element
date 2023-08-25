/*
Find first Non-Repeating Element in the given Array. 
*/
#include <iostream>

int arr[] = {-1, 2, -1, 3, 0};
;
// int arr[] =  { 9,4,9,6,7,4 } ;
int size = sizeof(arr) / sizeof(arr[0]);

int FindElement(int a[], int n) {
  int temp[n];

  for (int i = 0; i < n; i++)
    temp[i] = a[i];

  for (int i = 0; i < n; i++) {
    int count = 0;
    for (int j = 0; j < n; j++)
      if (a[i] == temp[j])
        count++;
    if (count <= 1)
      return a[i];
  }
  return -1;
}

/* Can be solved without copying the array. Just run two nested loops and check
 * every element like this and as soon as you get the first non-repeating
 * element, break out of the loop.*/

int FindElement2(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    int j = 0;
    for (; j < size; j++) {
      if (i != j && arr[i] == arr[j])
        break;
    }
    if (j == size)
      return arr[i];
  }
  return -1;
}

int main() {
  std ::cout << "Required Element is: " << FindElement(arr, size) << "\n";
  std ::cout <<  "Required Element is: " << FindElement2(arr, size) << "\n";
}