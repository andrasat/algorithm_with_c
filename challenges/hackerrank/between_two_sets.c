// EXMAPLE INPUT
// 2 3
// 2 4
// 16 32 96

/**
 * Constraints
 * 1 <= a_count, b_count <= 10
 * 1 <= a[i] <= 100
 * 1 <= b[j] <= 100
 */

/*
 * Complete the 'getTotalX' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY a
 *  2. INTEGER_ARRAY b
 */
int get_total_x(int a_count, int *a, int b_count, int *b) {
  int count = 0;

  for (int i = 1; i <= 100; i++) {
    int divisible = 1;
    for (int j = 0; j < a_count; j++) {
      if (i % a[j] != 0) {
        divisible = 0;
        break;
      }
    }

    if (divisible) {
      for (int j = 0; j < b_count; j++) {
        if (b[j] % i != 0) {
          divisible = 0;
          break;
        }
      }
    }

    if (divisible) {
      count++;
    }
  }

  return count;
}