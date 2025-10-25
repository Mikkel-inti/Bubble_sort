/**
 * @file bubble_sort.c
 * @brief Implementation of bubble_sort algorithm.
 *
 * Created for DTU course: 62712 - Basic C Programming (Week 07)
 * Author: Mikkel Olsen
 * Date: October 2025
 */

// Ensuring no case sensitivity, when checking if a <= b'
// between letters
#include "bubble_sort.h"
#include <ctype.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdio.h>

// Checkin if letter1 <= letter2
bool letters_in_order(char letter1, char letter2) {

  letter1 = tolower((unsigned char)letter1);
  letter2 = tolower((unsigned char)letter2);
  return letter1 <= letter2;
}

// Checkin if num1<= num2
bool numbers_ascending(char num1, char num2) {
  return (signed int)num1 <= (signed int)num2;
}

// We are swapping the adresses in the array
// instead of the values
void swap(char *adrs1, char *adrs2) {
  char tmp = *adrs1;
  *adrs1 = *adrs2;
  *adrs2 = tmp;
}
// Full bubble_sort_algoritmn:
void bubble_sort(char arr[], bool (*pair_is_in_order)(char a, char b)) {

  // swap flag to indicate if a swap has accoured or not
  int swap_flag = 1;
  // While-loop: Assuming that a swap has accoured,
  //  when the no swaps has happend (swap=0), the array is sorted
  while (swap_flag == 1) {
    swap_flag = 0;
    for (size_t i = 0; i + 1 < SIZE; ++i) {
      if (pair_is_in_order(arr[i], arr[i + 1]) == false) {
        swap(&arr[i], &arr[i + 1]);
        swap_flag = 1;
      }
    }
  }
}
