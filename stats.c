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
 * @file stats.c
 * @brief Source Code for Week 1 Assignment
 *
 * This program contains a couple of functions that can analyze an array of 
 * unsigned char data items and report analytics on the maximum, minimum, 
 * mean, and median of the data set. In addition, it reorders this data set 
 * from large to small. All statistics are rounded down to the nearest integer.
 *
 * @author Subhabrata Ghosh
 * @date 11-10-2019
 * 
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */

}

/* Add other Implementation File Code Here */
void print_statistics(unsigned char *arr, unsigned int size){
  
}

void print_array(unsigned char *arr, unsigned int size){

}

void sort_array(unsigned char *arr, unsigned int length){

}

unsigned char find_median(unsigned char *arr, unsigned int size){

}

unsigned char find_mean(unsigned char *arr, unsigned int size){

}

unsigned char find_maximum(unsigned char *arr, unsigned int size){

}

unsigned char find_minimum(unsigned char *arr, unsigned int size){
  
}
