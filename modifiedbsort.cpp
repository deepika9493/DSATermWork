#include <iostream>
using namespace std;
#define max 100

void bubbleSort(int arr[], int size) {  //sorting function
  for (int j = 0; j < size - 1; ++j) {

    int flag = 0;
    for (int i = 0; i < size - j - 1; ++i) {
      if (arr[i] > arr[i + 1]) {

        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
        flag = 1;
      }
    }

    if (flag == 0)
      break;
  }
}

void display(int arr[], int size) { // display function
  for (int i = 0; i < size; ++i) {
    cout << "  " << arr[i];
  }
  cout << "\n";
}

int main() {                   // main function or driver function
    int arr[max];
    int size,i;
    cout<<"enter the limit\n";
    cin>>size;
    for(i=0;i<size;i++)
    {
    cin>>arr[i];
    }
    bubbleSort(arr,size);

    cout<<"sorted array: \n";
    for(i=0;i<size;i++)
    {
     cout<<arr[i]<<" ";
    }
}
