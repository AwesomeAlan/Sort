/*
重点关注快速排序和堆排序
*/
#include <iostream>
using namespace std;

class Sorts {
public:
  void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
      cout << arr[i] << ' ';
    }
    cout << endl;
  }

  void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n - i - 1; j++) {
        if (arr[j] > arr[j + 1])
          swap(arr[j], arr[j + 1]);
      }
    }
  }

  void selectionSort(int arr[], int n) {
    for (int i = 0; i < n; i++) {
      int min_index = i;
      for (int j = i + 1; j < n; j++) {
        if (arr[j] < arr[min_index]) {
          min_index = j;
        }
      }
      if (min_index != i)
        swap(arr[i], arr[min_index]);
    }
  }

  void quickSort(int arr[]) {
    
  }
};

int main() {
  int array[] = {2, 3, 4, 6, 9, 7, 1, 5, 8, 0};
  int length = sizeof(array) / sizeof(array[0]);
  // bubbleSort(array, length);
  Sorts s;
  s.selectionSort(array, length);
  // s.printArray(array, length);

  return 0;
}