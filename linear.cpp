// Linear Search in C++
//Deepika Mullagura
//CST_SPL2(33)

#include <iostream>
using namespace std;

int search(int array[], int n, int x) {

  for (int i = 0; i < n; i++)
    if (array[i] == x)
      return i;
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

  int result = search(array, n, x);

  (result == -1) ? cout << "Element not found" : cout << "Element found at index: " << result;
}
