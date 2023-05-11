// "Copyright 2023 <andra.satria1@gmail.com>"
// "License: MIT"
#include <stdio.h>
#include <time.h>

#include "./challenges/hackerrank/between_two_sets.c"
#include "./searches/binary_search.c"
#include "./sorts/bubble_sort.c"
#include "helper.c"

// algo 1:
// - generate list of numbers
// - do bubble sort
// - do binary search with target different for each size
void algo_1(int size, int bsearch_target) {
  int *numArr = generate_list_of_numbers(size);

  printf("\nOriginal array:\n");
  printf("size: %d\n", size);

  printf("Bubble sorting...\n");
  clock_t begin = clock();
  bubble_sort(numArr, size);
  clock_t end = clock();
  double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
  printf("Time spent: %f s\n", time_spent);

  printf("Binary search target: %d...\n", bsearch_target);
  clock_t begin_bsearch = clock();
  binary_search(numArr, size, bsearch_target);
  clock_t end_bsearch = clock();
  double time_spent_bsearch =
      (double)(end_bsearch - begin_bsearch) / CLOCKS_PER_SEC;
  printf("Time spent: %f s\n", time_spent_bsearch);

  free(numArr);
}

void run_between_two_sets() {
  int a_count = 2;
  int a[] = {2, 4};
  int b_count = 3;
  int b[] = {16, 32, 96};
  int result = get_total_x(a_count, a, b_count, b);

  printf("result: %d\n", result);
}

void run_algo_1() {
  int size_1 = 10;
  int size_2 = 100;
  int size_3 = 1000;
  int size_4 = 10000;
  // int size_5 = 100000;

  algo_1(size_1, 9);
  algo_1(size_2, 20);
  algo_1(size_3, 101);
  algo_1(size_4, 999);
  // algo_1(size_5, 9012); // takes too long (~23s)
}

int main(int argc, char *argv[]) {
  // run_algo_1();
  // run_between_two_sets();

  return EXIT_SUCCESS;
}
