#ifndef BUBBLE_SORT_H
#define BUBBLE_SORT_H

#include <stdbool.h>
#include <stddef.h>

/**
 * @file bubble_sort.h
 * @brief Header file for the Bubble Sort program.
 *
 * Created for DTU course: 62712 - Basic C Programming (Week 07)
 * Author: Mikkel Olsen
 * Date: October 2025
 */

/**< Array size */
#define SIZE 4

/**
 * @brief Swaps the values of two characters via their addresses.
 *
 * @param a Reference to the first char.
 * @param b Reference to the second char.
 */
void swap(char *a, char *b);

/**
 * @brief Comparing (as a char) if the letters are in ascending order. a-z or
 * A-Z. This is accieved by using the tolower()-function.
 *
 * @param letter1 First char .
 * @param letter1 Second char.
 * @return true if `a` should come before or equal to `b`,
 *         otherwise false.
 */
bool letters_in_order(char letter1, char letter2);

/**
 * @brief Comparing (as a char) if the numbers are in ascending order.
 *
 * @param num1 is interpreted as a signed integer.
 * @param num2 is interpreted as a signed integer.
 * @return true if `a <= b`, otherwise false.
 */
bool numbers_ascending(char num1, char num2);

/**
 * @brief Sorts a char array using the bubble sort algorithm.
 *
 * @param arr The array to be sorted.
 * @param pair_is_in_order Reference to a function
 *        that decides whether two elements are in order.
 */
void bubble_sort(char arr[], bool (*pair_is_in_order)(char, char));

#endif // BUBBLE_SORT_H
