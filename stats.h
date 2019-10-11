/******************************************************************************
 * Copyright (C) 2019 by Subhabrata Ghosh - Vellore Institute of Technology
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software.
 *
 *****************************************************************************/
/**
 * @file stats.h
 * @brief Header file
 *
 * Header file containing definitions of the functions used in stats.c
 *
 * @author Subhabrata Ghosh
 * @date 11-10-2019
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief Prints statistics of an array namely minimum, maximum, mean, and median.
 *
 * Prints the minimum, maximum, mean, and median to STDOUT.
 *
 * @param mean Calculated Mean of the elements of the array.
 * @param median Calculated Median of the elements of the array.
 * @param maximum Calculated Maximum of the elements of the array.
 * @param minimum Calculated Minimum of the elements of the array.
 *
 * @return void
 */
void print_statistics(unsigned char mean, unsigned char median, unsigned char maximum, unsigned char minimum);

/**
 * @brief Prints an array to the screen.
 *
 * Given an array and it's size, prints the array to the screen.
 *
 * @param arr An unsigned char pointer to the array
 * @param size Size of the array pointed to by arr
 *
 * @return void
 */
void print_array(unsigned char *arr, unsigned int size);

/**
 * @brief Sorts an array
 *
 * Given an array and it's size, sorts the elements of the array in descending order.
 *
 * @param arr An unsigned char pointer to the array
 * @param size Size of the array pointed to by arr
 *
 * @return void
 */
void sort_array(unsigned char *arr, unsigned int size);

/**
 * @brief finds median of the elements of an array
 *
 * Given an array and it's size, returns the median of the elements of the array.
 *
 * @param arr An unsigned char pointer to the array
 * @param size Size of the array pointed to by arr
 *
 * @return An unsigned char equal to the median of the elements of the array
 */
unsigned char find_median(unsigned char *arr, unsigned int size);

/**
 * @brief finds mean of the elements of an array
 *
 * Given an array and it's size, returns the mean of the elements of the array.
 *
 * @param arr An unsigned char pointer to the array
 * @param size Size of the array pointed to by arr
 *
 * @return An unsigned char equal to the mean of the elements of the array
 */
unsigned char find_mean(unsigned char *arr, unsigned int size);

/**
 * @brief finds maximum of the elements of an array
 *
 * Given an array and it's size, returns the maximum of the elements of the array.
 *
 * @param arr An unsigned char pointer to the array
 * @param size Size of the array pointed to by arr
 *
 * @return An unsigned char equal to the maximum of the elements of the array
 */
unsigned char find_maximum(unsigned char *arr, unsigned int size);

/**
 * @brief finds minimum of the elements of an array
 *
 * Given an array and it's size, returns the minimum of the elements of the array.
 *
 * @param arr An unsigned char pointer to the array
 * @param size Size of the array pointed to by arr
 *
 * @return An unsigned char equal to the minimum of the elements of the array
 */
unsigned char find_minimum(unsigned char *arr, unsigned int size);


#endif /* __STATS_H__ */
