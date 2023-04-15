// BINARY SEARCH
int binary_search(int *arr, int size, int target) {
  int left = 0;
  int right = size - 1;

  // iterate until left is less or equal than right
  while (left <= right) {
    int mid = left + (right - left) / 2;

    if (arr[mid] == target) {
      return mid;
    } else if (arr[mid] < target) {
      left = mid + 1;
    } else {
      right = mid - 1;
    }
  }

  return -1;
}