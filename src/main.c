/**
 * @file bubble_sort.c
 * @brief Main file for the bubble sort algorithm, with two printing functions.
 * One for printing signed numbers and one for chars.
 *
 * Created for DTU course: 62712 - Basic C Programming (Week 07)
 * Author: Mikkel Olsen
 * Date: October 2025
 */

#include "bubble_sort.h"
#include <stdbool.h>
#include <stddef.h>
#include <stdio.h>

char letter_arr1[] = {'z', 'S', 's', 'a'};
// aSsz
char number_arr1[] = {4, -1, 2, 9};
// -1, 2, 4, 9

/**
 * @brief Printing the letters in the array .
 *
 * @param arr The character array.
 * @param len The length of the array.
 */
void print_char_arr(const char arr[], size_t len) {
  for (size_t i = 0; i < len; i++) {
    printf("%c ", *(arr + i));
  }
  printf("\n");
}

/**
 * @brief Printing the char array as signed numbers.
 *
 * @param arr The character array.
 * @param len The length of the array.
 */
void print_num_arr(const char arr[], size_t len) {
  for (size_t i = 0; i < len; i++) {
    printf("%d ", *(arr + i));
  }
  printf("\n");
}

int main(void) {
  // Sorting the array
  bubble_sort(number_arr1, numbers_ascending); // Sorting number array
  bubble_sort(letter_arr1, letters_in_order);  // Sorting letter array
  // Printing
  print_num_arr(number_arr1, SIZE);  // Printing the sorted number array
  print_char_arr(letter_arr1, SIZE); // Printing the sorted letter array
}