#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Generate a list of numbers using memory allocation
 *
 * @param n The size of the list
 * @return int* The list of numbers
 *
 */
int *generate_list_of_numbers(int n) {
  int *list = malloc(n * sizeof(int));

  if (list == NULL) {
    printf("%s\n", "Memory not allocated!");
  } else {
    srand(1);

    for (int i = 0; i < n; i++) {
      list[i] = rand() % 1000;
    }
  }

  return list;
}

/**
 * @brief Print the numbers in list
 *
 * @param list The list of numbers
 * @param size The size of the list
 *
 *
 */
void print_list_of_numbers(int *list, int size) {
  for (int i = 0; i < size; i++) {
    if (i == size - 1) {
      printf("%d\n\n", list[i]);
    } else {
      printf("%d,", list[i]);
    }
  }
}