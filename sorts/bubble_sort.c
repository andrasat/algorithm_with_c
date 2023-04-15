// BUBBLE SORT ALGORITHM
void bubble_sort(int *arr, int size) {
  // iterate through elements and compare 1 by 1
  for (int i = 0; i < size - 1; ++i) {
    for (int j = 0; j < size - i - 1; ++j) {
      // swap if element[i] is greater than element[i+1]
      if (arr[j] > arr[j + 1]) {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}