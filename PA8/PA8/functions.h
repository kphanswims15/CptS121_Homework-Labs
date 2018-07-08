#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int binary_search (int n, int list[], int target_value);
void bubble_sort (char *ptr[], int number_of_strings);
int is_palindrome (char *str, int length, int index);

typedef struct occurrences
{
	int num_occurrences;
	double frequency;
}Occurrences;

void maximum_occurences (char *str, Occurrences *ptr_occ, int *ptr_num, char *ptr_char, double *ptr_frequency);

typedef enum boolean
{
	FALSE,
	TRUE
} Boolean; 

#endif