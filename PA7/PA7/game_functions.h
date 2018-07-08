/*********************************************************************************
 * Date Created: November 22, 2015                                               *
 * Date Last Modified: November 30, 2015                                         *
 * Description: Contains prototypes of the program and holds standard libraries. *
 *********************************************************************************/

#ifndef GAME_FUNCTIONS_H
#define GAME_FUNCTIONS_H
#define _CTR_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generate_random_three_numbers_range_two (int nums[]);
void generate_random_three_numbers_range_three (int nums[]);
void generate_random_three_numbers_range_four (int nums[]);
void generate_random_three_numbers_range_five (int nums[]);
void generate_random_three_numbers_range_six (int nums[]);
void generate_random_three_numbers_range_seven (int nums[]);
void generate_random_three_numbers_range_eight (int nums[]);
void generate_random_three_numbers_range_nine (int nums[]);
void generate_random_operator_level_one (int *oper);
void print_equation_level_one (int nums[], int oper, int *user_answer);
void evaluate_equation_level_one (int nums[], int oper, int *answer);
void check_answer_is_correct (int user_answer, int answer, int points[], int index);
int total_points (int points[], int size);
void print_total_points (int sum);
void print_question_number (int num);
void generate_random_two_numbers_range_two (int nums[]);
void generate_random_two_numbers_range_three (int nums[]);
void generate_random_two_numbers_range_four (int nums[]);
void generate_random_two_numbers_range_five (int nums[]);
void generate_random_two_numbers_range_six (int nums[]);
void generate_random_two_numbers_range_seven (int nums[]);
void generate_random_two_numbers_range_eight (int nums[]);
void generate_random_two_numbers_range_nine (int nums[]);
void level_one (int total_points_in_game[], int level);
void print_equation_level_two (int nums[], int *user_answer);
void evaluate_equation_level_two (int nums[], int *answer);
void level_two (int total_points_in_game[], int level);
void print_question_number_for_level_three (int num);
void generate_random_two_numbers_for_level_three_and_four (int nums[]);
void print_equation_level_three (int nums[], int *user_answer, int *user_remainder);
void evaluate_equation_level_three (int nums[], int *answer, int *remainder);
void check_answer_correct_level_three (int user_answer, char user_remain, int user_remainder, int answer, char remain, int remainder, int points[], int index);
void level_three (int total_points_in_game[], int level);
void print_question_number_level_four_five (int num);
void generate_random_three_numbers_range_two_level_four (int nums[]);
void generate_random_three_numbers_range_three_level_four (int nums[]);
void generate_random_three_numbers_range_four_level_four (int nums[]);
void generate_random_three_numbers_range_five_level_four (int nums[]);
void generate_random_three_numbers_range_nine_level_four (int nums[]);
void generate_random_operator_level_four (int *oper);
void print_equation_level_four (int nums[], int oper, char *user_divisor, int *user_answer, double *user_division);
void evaluate_equation_level_four (int nums[], int oper, int *answer, double *answer_division);
void check_answer_correct_four (int answer, int user_answer, int answer_division, int user_division, char divisor, char user_divisor, int op, int points[], int index);
void level_four (int total_points_in_game[], int level);
void generate_double_digit_numbers (int nums[]);
void generate_triple_digit_numbers (int nums[]);
void generate_random_operator_level_five (int *oper);
void print_equation_level_five (int nums[], int oper, char *user_divisor, int *user_answer, double *user_division);
void evaluate_equation_level_five (int nums[], int oper, int *answer, double *answer_division);
void check_answer_correct_four (int answer, int user_answer, int answer_division, int user_division, char divisor, char user_divisor, int oper, int points[], int index);
void level_five (int total_points_in_game[], int level);
void game_menu (int *option);
void learn_about_the_program (void);
void enetr_intials (char intitals[]);
void difficulty_selections (int *level_option);
FILE * open_file_write (void);
void save_to_file (FILE *outfile, int sum_of_game_points, char intials[]);

#endif