// "Copyright 2023 <andra.satria1@gmail.com>"
// "License: MIT"
#include "./searches/binary_search.c"
#include "./sorts/bubble_sort.c"
#include "helper.c"
#include <stdio.h>
#include <time.h>

void algo_1(int size) {
  int *numArr = generate_list_of_numbers(size);

  printf("\nOriginal array:\n");
  printf("size: %d\n", size);

  printf("Bubble sorting...\n");
  clock_t begin = clock();
  bubble_sort(numArr, size);
  clock_t end = clock();
  double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
  printf("Time spent: %f s\n", time_spent);

  printf("Binary search target: 20...\n");
  clock_t begin_bsearch = clock();
  binary_search(numArr, size, 20);
  clock_t end_bsearch = clock();
  double time_spent_bsearch =
      (double)(end_bsearch - begin_bsearch) / CLOCKS_PER_SEC;
  printf("Time spent: %f s\n", time_spent_bsearch);

  free(numArr);
}

int main(int argc, char *argv[]) {
  int size_1 = 10;
  int size_2 = 100;
  int size_3 = 1000;
  int size_4 = 10000;
  int size_5 = 100000;

  algo_1(size_1);
  algo_1(size_2);
  algo_1(size_3);
  algo_1(size_4);
  algo_1(size_5);

  return EXIT_SUCCESS;
}
