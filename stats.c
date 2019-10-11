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
  unsigned char mean, median, maximum, minimum;
  /* Statistics and Printing Functions Go Here */
  printf("Array before sorting: ");
  print_array(test, SIZE);

  sort_array(test, SIZE);
  printf("\nArray after sorting: ");
  print_array(test, SIZE);

  mean = find_mean(test, SIZE);
  median = find_median(test, SIZE);
  maximum = find_maximum(test, SIZE);
  minimum = find_minimum(test, SIZE);
  print_statistics(mean, median, maximum, minimum);
}

/* Add other Implementation File Code Here */
void print_statistics(unsigned char mean, unsigned char median, unsigned char maximum, unsigned char minimum){
  printf("\nMean: %d\nMedian: %d\nMaximum: %d\nMinimum: %d", mean, median, maximum, minimum);
}

void print_array(unsigned char *arr, unsigned int size){
  printf("\nElements of the array: ");
  unsigned int i;
  for(int i = 0; i < size; ++i){
    printf("%d ", arr[i]);
  }
}

void sort_array(unsigned char *arr, unsigned int size){
  unsigned int i, j, temp;
  for(i = 0; i < size; ++i){
    for(j = 0; j < size-1-i; ++j){
      if(arr[j] < arr[j+1]){
        temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
      }
    }
  }
}

unsigned char find_median(unsigned char *arr, unsigned int size){
  unsigned char median;
  if(size % 2 == 0){
    median = (arr[(size/2)] + arr[(size-1)/2])/2;
  } else {
    median = arr[(size/2)];
  }
  return median;
}

unsigned char find_mean(unsigned char *arr, unsigned int size){
  unsigned int sum = 0, i;
  for(i = 0; i < size; ++i){
    sum += arr[i];
  }
  //printf("\n\nMean: %d\t%f\n\n", sum, (float)sum/size);
  unsigned char mean = sum/size;
  return mean;
}

unsigned char find_maximum(unsigned char *arr, unsigned int size){
  unsigned int i;
  unsigned char max = arr[0];
  for (i = 0; i < size; ++i){
    if (max < arr[i]){
      max = arr[i];
    }
  }
  return max;
}

unsigned char find_minimum(unsigned char *arr, unsigned int size){
  unsigned int i;
  unsigned char min = arr[0];
  for (i = 0; i < size; ++i){
    if (min > arr[i]){
      min = arr[i];
    }
  }
  return min;
}
