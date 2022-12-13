// Binary Search in C++
//Deepika Mullagura
//CST_SPL2(33)
//recursive method
#include <iostream>
using namespace std;
int binarySearch(int array[], int x, int low, int high) {
  if (high >= low) {
    int mid = low + (high - low) / 2;

    if (array[mid] == x)
      return mid;
    if (array[mid] > x)
      return binarySearch(array, x, low, mid - 1);
    return binarySearch(array, x, mid + 1, high);
  }

  return -1;
}

int main(void) {
  int n,array[10],x;
    cout<<"Enter the number elements of array:\n";
    cin>>n;
    cout<<"Enter the elements of array:\n";
    for(int i=0;i<n;i++)
        cin>>array[i];
    cout<<"Enter the element to be searched:\n";
    cin>>x;
  int result = binarySearch(array, x, 0, n);
  if (result == -1)
    printf("Not found");
  else
    printf("Element is found at index %d", result);
}

//iterative
#include <iostream>
using namespace std;

int binarySearch(int array[], int x, int low, int high) {

  while (low <= high) {
    int mid = low + (high - low) / 2;

    if (array[mid] == x)
      return mid;

    if (array[mid] < x)
      low = mid + 1;

    else
      high = mid - 1;
  }

  return -1;
}

int main() {
    int n,array[10],x;
    cout<<"Enter the number elements of array:\n";
    cin>>n;
    cout<<"Enter the elements of array:\n";
    for(int i=0;i<n;i++)
        cin>>array[i];
    cout<<"Enter the element to be searched:\n";
    cin>>x;

  int result = binarySearch(array, x, 0, n);
  if (result == -1)
    printf("Not found");
  else
    printf("Element is found at index %d", result);
}
