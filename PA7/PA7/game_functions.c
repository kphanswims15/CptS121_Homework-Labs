#include "game_functions.h"

/***********************************************************************************
 * Function: void generate_random_three_numbers_range_two (int nums[])             *
 * Date Created: November 30, 2015                                                 *
 * Date Last Modified: November 30, 2015                                           *
 * Description: Generates three random numbers for the equation. The range is 0-2. *          
 * Input Parameters: int nums[]                                                    *
 * Returns: Three numbers.                                                         *
 * Preconditions: An empty array of int type that is the size of three needs to be *
 *				  available.                                                       *
 * Postconditions: Three random numbers will be returned through the number array. *      
 ***********************************************************************************/
void generate_random_three_numbers_range_two (int nums[])
{
	nums[0] = rand () % 3;
	nums[1] = rand () % 3;
	nums[2] = rand () % 3;
}

/***********************************************************************************
 * Function: void generate_random_three_numbers_range_three (int nums[])           *
 * Date Created: November 30, 2015                                                 *
 * Date Last Modified: November 30, 2015                                           *
 * Description: Generates three random numbers for the equation. The range is 0-3. *          
 * Input Parameters: int nums[]                                                    *
 * Returns: Three numbers.                                                         *
 * Preconditions: An empty array of int type that is the size of three needs to be *
 *				  available.                                                       *
 * Postconditions: Three random numbers will be returned through the number array. *      
 ***********************************************************************************/           
void generate_random_three_numbers_range_three (int nums[])
{
	nums[0] = rand () % 4;
	nums[1] = rand () % 4;
	nums[2] = rand () % 4;
}

/***********************************************************************************
 * Function: void generate_random_three_numbers_range_four (int nums[])            *
 * Date Created: November 30, 2015                                                 *
 * Date Last Modified: November 30, 2015                                           *
 * Description: Generates three random numbers for the equation. The range is 0-4. *          
 * Input Parameters: int nums[]                                                    *
 * Returns: Three numbers.                                                         *
 * Preconditions: An empty array of int type that is the size of three needs to be *
 *				  available.                                                       *
 * Postconditions: Three random numbers will be returned through the number array. *      
 ***********************************************************************************/
void generate_random_three_numbers_range_four (int nums[])
{
	nums[0] = rand () % 5;
	nums[1] = rand () % 5;
	nums[2] = rand () % 5;
}

/***********************************************************************************
 * Function: void generate_random_three_numbers_range_five (int nums[])            *
 * Date Created: November 30, 2015                                                 *
 * Date Last Modified: November 30, 2015                                           *
 * Description: Generates three random numbers for the equation. The range is 0-5. *          
 * Input Parameters: int nums[]                                                    *
 * Returns: Three numbers.                                                         *
 * Preconditions: An empty array of int type that is the size of three needs to be *
 *				  available.                                                       *
 * Postconditions: Three random numbers will be returned through the number array. *      
 ***********************************************************************************/
void generate_random_three_numbers_range_five (int nums[])
{
	nums[0] = rand () % 6;
	nums[1] = rand () % 6;
	nums[2] = rand () % 6;
}

/***********************************************************************************
 * Function: void generate_random_three_numbers_range_six (int nums[])             *
 * Date Created: November 30, 2015                                                 *
 * Date Last Modified: November 30, 2015                                           *
 * Description: Generates three random numbers for the equation. The range is 0-2. *          
 * Input Parameters: int nums[]                                                    *
 * Returns: Three numbers.                                                         *
 * Preconditions: An empty array of int type that is the size of three needs to be *
 *				  available.                                                       *
 * Postconditions: Three random numbers will be returned through the number array. *      
 ***********************************************************************************/
void generate_random_three_numbers_range_six (int nums[])
{
	nums[0] = rand () % 7;
	nums[1] = rand () % 7;
	nums[2] = rand () % 7;
}

/***********************************************************************************
 * Function: void generate_random_three_numbers_range_seven (int nums[])           *
 * Date Created: November 30, 2015                                                 *
 * Date Last Modified: November 30, 2015                                           *
 * Description: Generates three random numbers for the equation. The range is 0-7. *          
 * Input Parameters: int nums[]                                                    *
 * Returns: Three numbers.                                                         *
 * Preconditions: An empty array of int type that is the size of three needs to be *
 *				  available.                                                       *
 * Postconditions: Three random numbers will be returned through the number array. *      
 ***********************************************************************************/
void generate_random_three_numbers_range_seven (int nums[])
{
	nums[0] = rand () % 8;
	nums[1] = rand () % 8;
	nums[2] = rand () % 8;
}

/***********************************************************************************
 * Function: void generate_random_three_numbers_range_eight (int nums[]) *
 * Date Created: November 30, 2015                                                 *
 * Date Last Modified: November 30, 2015                                           *
 * Description: Generates three random numbers for the equation. The range is 0-8. *          
 * Input Parameters: int nums[]                                                    *
 * Returns: Three numbers.                                                         *
 * Preconditions: An empty array of int type that is the size of three needs to be *
 *				  available.                                                       *
 * Postconditions: Three random numbers will be returned through the number array. *      
 ***********************************************************************************/
void generate_random_three_numbers_range_eight (int nums[])
{
	nums[0] = rand () % 9;
	nums[1] = rand () % 9;
	nums[2] = rand () % 9;
}

/***********************************************************************************
 * Function: void generate_random_three_range_nine (int nums[])  *
 * Date Created: November 30, 2015                                                 *
 * Date Last Modified: November 30, 2015                                           *
 * Description: Generates three random numbers for the equation. The range is 0-9. *          
 * Input Parameters: int nums[]                                                    *
 * Returns: Three numbers.                                                         *
 * Preconditions: An empty array of int type that is the size of three needs to be *
 *				  available.                                                       *
 * Postconditions: Three random numbers will be returned through the number array. *      
 ***********************************************************************************/
void generate_random_three_numbers_range_nine (int nums[])
{
	nums[0] = rand () % 10;
	nums[1] = rand () % 10;
	nums[2] = rand () % 10;
}

/*****************************************************************************************
 * Function: void generate_random_operator_level_one (int *oper)                         *
 * Date Created: November 30, 2015                                                       *
 * Date Last Modified: November 30, 2015                                                 *
 * Description: Generates a random number between 0-3, so it can be used as a random     *
 *				operator.                                                                *
 * Input Parameters: a pointer to a varible that will hold the number for the operartor. *                                           
 * Returns: oper                                                                         *
 * Preconditions: a varible to hold the operator number and the equations with the       *
 *				  operators need to be available.                                        *
 * Postconditions: A random number for the operator should be generated so it can be     *
 *				   used in other functions.                                              *
 *****************************************************************************************/
void generate_random_operator_level_one (int *oper)
{
	*oper = rand () % 4; 
}

/*************************************************************************************
 * Function: void print_equation_level_one (int nums[], int oper, int *user_answer)  *
 * Date Created: November 30, 2015                                                   *
 * Date Last Modified: November 30, 2015                                             *
 * Description: Prints out the equation and gets an answer from the user.            *
 * Input Parameters: int nums[], int oper, and a pointer pointing to whre the user's *
 *					 answer is going to be held.                                     *
 * Returns: user_answer                                                              *
 * Preconditions: In the nums array the three numbers has to randomly generated. A   *
 *				  number has to be generated for the operator. A variable that holds *
 *				  the user's answer needs to be available.                           *
 * Postconditions: The equation should be displayed and accepts an answer from the   *
 *				   user.                                                             *
 *************************************************************************************/
void print_equation_level_one (int nums[], int oper, int *user_answer)
{	
	switch (oper)
	{
		case 0: printf ("%d + %d + %d = ", nums[0], nums[1], nums[2]);
				break;
		case 1: printf ("%d - %d - %d = ", nums[0], nums[1], nums[2]);
				break;
		case 2: printf ("%d + %d - %d = ", nums[0], nums[1], nums[2]);
				break;
		case 3: printf ("%d - %d + %d = ", nums[0], nums[1], nums[2]);
				break;
	}
	scanf ("%d", user_answer);
}

/********************************************************************************************
 * Function: void evaluate_equation_level_one (int nums[], int oper, int *answer)           *
 * Date Created: November 30, 2015                                                          *
 * Date Last Modified: November 30, 2015                                                    *
 * Description: Evalutates the equation that is generated and save the answer of the        *
 *				equation in a pointer.                                                      *
 * Input Parameters: A pointer that points to a variable where the answer will be held      *
 *					 in.                                                                    *
 * Returns: Returns a pointer to a variable that will hold the answer of the equation.      *                    
 * Preconditions: three random numbers would have be generated and a number that will       *
 *				  be passed in to generated the operator.                                   *
 * Postconditions: The equation will be evaluated and the answer will be held in a pointer. *       
 ********************************************************************************************/
void evaluate_equation_level_one (int nums[], int oper, int *answer)
{
	switch (oper)
	{
		case 0:	*answer = nums[0] + nums[1] + nums[2];
			    break;
		case 1: *answer = nums[0] - nums[1] - nums[2];
				break;
		case 2: *answer = nums[0] + nums[1] - nums[2];
				break;
		case 3: *answer = nums[0] - nums[1] + nums[2];
				break;
	}
}

/*****************************************************************************************************************
 * Function: void check_answer_is_correct (int user_answer, int answer, int points[], int index)                 *
 * Date Created: November 30, 2015                                                                               *
 * Date Last Modified: November 30, 2015                                                                         *
 * Description: Checks if the user's answer is correct. If the answer is correct the user will earn 10 points.   *
 *				if the user gets the answer wrong the user will lose 5 points.                                   *
 * Input Parameters: int user_answer, int answer, int points[], int index                                        *     
 * Returns: point values if the answer in correct or not in an array.                                            *
 * Preconditions: An answer from the user has to be given and the equation has to be evaluated. Also an array of * 
 *				  points will have to exist.                                                                     * 
 * Postconditions: Evaluates if the user's answer is incorrect or correct and should be given points based on    *
 *			       the evaluation.                                                                               *
 *****************************************************************************************************************/
void check_answer_is_correct (int user_answer, int answer, int points[], int index)
{
	if (user_answer == answer)
	{
		printf ("\nCorrect! 10 points! \n");
		points[index] = 10;
	}
	else 
	{
		printf ("\nWrong! Minus 5 points... \n");
		points[index] = -5;
	}
}

/**************************************************************************************
 * Function: int total_points (int points[], int size)                                *
 * Date Created: November 30, 2015                                                    *
 * Date Last Modified: November 30, 2015                                              *
 * Description: Sums up the total points in the point array to give the total points. *             
 * Input Parameters: int points[], int size                                           *   
 * Returns: the sum of the points.                                                    *
 * Preconditions: An array of points had to exist and the size needs to be known.     *
 * Postconditions: All the points in the array should be added all up.                *
 **************************************************************************************/
int total_points (int points[], int size)
{
	int count = 0, sum = 0;

	for (count = 0; count < size; count++)
	{
		sum = sum + points[count]; 
	}

	return sum;
}

/***********************************************************************
 * Function: void print_total_points (int sum)                         *
 * Date Created: November 30, 2015                                     *
 * Date Last Modified: November 30, 2015                               *      
 * Description: Prints the total number of points to the screen.       *      
 * Input Parameters: int sum                                           * 
 * Returns: None.                                                      *
 * Preconditions: The points in the array need to be all added up.     * 
 * Postconditions: The total points should be displayed on the screen. *      
 ***********************************************************************/
void print_total_points (int sum)
{
	printf ("Total points: %d\n", sum);
}

/************************************************************************
 * Function: void print_question_number (int num)                       *
 * Date Created: November 30, 2015                                      *
 * Date Last Modified: November 30, 2015                                *    
 * Description: Prints the question number to the screen.               *
 * Input Parameters: The number of the question.                        *
 * Returns: None.                                                       *
 * Preconditions: None.                                                 *
 * Postconditions: The question number will be displayed to the screen. *   
 ************************************************************************/
void print_question_number (int num)
{
	printf ("Question number %d:\n\n", num);
}

/*
 * Function: void level_one (int total_points_in_game[], int level)
 * Date Created: November 30, 2015
 * Date Last Modified: November 30, 2015                                        
 * Description: Starts Level one.         
 * Input Parameters: int total_points_in_game and int level                                               
 * Returns: None                                      
 * Preconditions: An array need to be available and it's index     
 * Postconditions: The level should start up.       
*/
void level_one (int total_points_in_game[], int level)
{
	int nums[3] = {0}, points[10] = {0};
	int op = 0, user_answer = 0, answer = 0, sum = 0, count = 1, index = 0;
	srand ((unsigned int) time (NULL));
	
	printf ("Starting Level One\n");
	
	system ("pause");
	system ("cls");

	//difficulty one
	print_question_number (1);
	generate_random_three_numbers_range_two (nums);
	printf ("%d + %d + %d = ", nums[0], nums[1], nums[2]);
	scanf ("%d", &user_answer);
	answer = nums[0] + nums[1] + nums[2];
	check_answer_is_correct (user_answer, answer, points, 0);
	sum = total_points (points, 10);
	print_total_points (sum);

	system ("pause");
	system ("cls");

	print_question_number (2);
	generate_random_three_numbers_range_two (nums);
	printf ("%d - %d - %d = ", nums[0], nums[1], nums[2]);
	scanf ("%d", &user_answer);
	answer = nums[0] - nums [1] - nums[2];
	check_answer_is_correct (user_answer, answer, points, 1);
	sum = total_points (points, 10);
	print_total_points (sum);

	system ("pause");
	system ("cls");

	//difficulty two
	print_question_number (3);
	generate_random_three_numbers_range_three (nums);
	generate_random_operator_level_one (&op);
	print_equation_level_one (nums, op, &user_answer);
	evaluate_equation_level_one (nums, op, &answer);
	check_answer_is_correct (user_answer, answer, points, 2);
	sum = total_points (points, 10);
	print_total_points (sum);

	system ("pause");
	system ("cls");

	//difficulty three
	print_question_number (4);
	generate_random_three_numbers_range_four (nums);
	generate_random_operator_level_one (&op);
	print_equation_level_one (nums, op, &user_answer);
	evaluate_equation_level_one (nums, op, &answer);
	check_answer_is_correct (user_answer, answer, points, 3);
	sum = total_points (points, 10);
	print_total_points (sum);

	system ("pause");
	system ("cls");

	//difficulty four
	print_question_number (5);
	generate_random_three_numbers_range_five (nums);
	generate_random_operator_level_one (&op);
	print_equation_level_one (nums, op, &user_answer);
	evaluate_equation_level_one (nums, op, &answer);
	check_answer_is_correct (user_answer, answer, points, 4); 
	sum = total_points (points, 10);
	print_total_points (sum);

	//difficulty five
	while (count < 6)
	{
		system ("pause");
		system ("cls");
		print_question_number (5+count);
		generate_random_three_numbers_range_nine (nums);
		generate_random_operator_level_one (&op);
		print_equation_level_one (nums, op, &user_answer);
		evaluate_equation_level_one (nums, op, &answer);
		check_answer_is_correct (user_answer, answer, points, 4+count); 
		sum = total_points (points, 10);
		print_total_points (sum);
		count++;
	}

	total_points_in_game[level] = sum;
}

/***********************************************************************************
 * Function: void generate_random_two_numbers_range_two (int nums[])             *
 * Date Created: December 2, 2015                                                 *
 * Date Last Modified: December 2, 2015                                           *
 * Description: Generates two random numbers for the equation. The range is 0-2. *          
 * Input Parameters: int nums[]                                                    *
 * Returns: two numbers.                                                         *
 * Preconditions: An empty array of int type that is the size of three needs to be *
 *				  available.                                                       *
 * Postconditions: two random numbers will be returned through the number array. *      
 ***********************************************************************************/
void generate_random_two_numbers_range_two (int nums[])
{
	nums[0] = rand () % 3;
	nums[1] = rand () % 3;
}

/***********************************************************************************
 * Function: void generate_random_three_numbers_range_three (int nums[])             *
 * Date Created: December 2, 2015                                                 *
 * Date Last Modified: December 2, 2015                                           *
 * Description: Generates two random numbers for the equation. The range is 0-3. *          
 * Input Parameters: int nums[]                                                    *
 * Returns: two numbers.                                                         *
 * Preconditions: An empty array of int type that is the size of two needs to be *
 *				  available.                                                       *
 * Postconditions: two random numbers will be returned through the number array. *      
 ***********************************************************************************/
void generate_random_two_numbers_range_three (int nums[])
{
	nums[0] = rand () % 4;
	nums[1] = rand () % 4;
}

/***********************************************************************************
 * Function: void generate_random_three_numbers_range_four (int nums[])             *
 * Date Created: December 2, 2015                                                 *
 * Date Last Modified: December 2, 2015                                           *
 * Description: Generates two random numbers for the equation. The range is 0-4. *          
 * Input Parameters: int nums[]                                                    *
 * Returns: two numbers.                                                         *
 * Preconditions: An empty array of int type that is the size of two needs to be *
 *				  available.                                                       *
 * Postconditions: Two random numbers will be returned through the number array. *      
 ***********************************************************************************/
void generate_random_two_numbers_range_four (int nums[])
{
	nums[0] = rand () % 5;
	nums[1] = rand () % 5;
}

/***********************************************************************************
 * Function: void generate_random_three_numbers_range_five (int nums[])             *
 * Date Created: December 2, 2015                                                 *
 * Date Last Modified: December 2, 2015                                           *
 * Description: Generates two random numbers for the equation. The range is 0-5. *          
 * Input Parameters: int nums[]                                                    *
 * Returns: two numbers.                                                         *
 * Preconditions: An empty array of int type that is the size of two needs to be *
 *				  available.                                                       *
 * Postconditions: two random numbers will be returned through the number array. *      
 ***********************************************************************************/
void generate_random_two_numbers_range_five (int nums[])
{
	nums[0] = rand () % 6;
	nums[1] = rand () % 6;
}

/***********************************************************************************
 * Function: void generate_random_three_numbers_range_six (int nums[])             *
 * Date Created: December 2, 2015                                                 *
 * Date Last Modified: December 2, 2015                                           *
 * Description: Generates two random numbers for the equation. The range is 0-6. *          
 * Input Parameters: int nums[]                                                    *
 * Returns: Two numbers.                                                         *
 * Preconditions: An empty array of int type that is the size of two needs to be *
 *				  available.                                                       *
 * Postconditions: Two random numbers will be returned through the number array. *      
 ***********************************************************************************/
void generate_random_two_numbers_range_six (int nums[])
{
	nums[0] = rand () % 7;
	nums[1] = rand () % 7;
}

/***********************************************************************************
 * Function: void generate_random_three_numbers_range_seven (int nums[])             *
 * Date Created: December 2, 2015                                                 *
 * Date Last Modified: December 2, 2015                                           *
 * Description: Generates two random numbers for the equation. The range is 0-7. *          
 * Input Parameters: int nums[]                                                    *
 * Returns: two numbers.                                                         *
 * Preconditions: An empty array of int type that is the size of two needs to be *
 *				  available.                                                       *
 * Postconditions: Two random numbers will be returned through the number array. *      
 ***********************************************************************************/
void generate_random_two_numbers_range_seven (int nums[])
{
	nums[1] = rand () % 8;
	nums[2] = rand () % 8;
}

/***********************************************************************************
 * Function: void generate_random_three_numbers_range_eight (int nums[])             *
 * Date Created: December 2, 2015                                                 *
 * Date Last Modified: December 2, 2015                                           *
 * Description: Generates two random numbers for the equation. The range is 0-8. *          
 * Input Parameters: int nums[]                                                    *
 * Returns: Two numbers.                                                         *
 * Preconditions: An empty array of int type that is the size of two needs to be *
 *				  available.                                                       *
 * Postconditions: Two random numbers will be returned through the number array. *      
 ***********************************************************************************/
void generate_random_two_numbers_range_eight (int nums[])
{
	nums[0] = rand () % 9;
	nums[1] = rand () % 9;
}

/***********************************************************************************
 * Function: void generate_random_three_numbers_range_nine (int nums[])             *
 * Date Created: December 2, 2015                                                 *
 * Date Last Modified: December 2, 2015                                           *
 * Description: Generates two random numbers for the equation. The range is 0-2. *          
 * Input Parameters: int nums[]                                                    *
 * Returns: Three numbers.                                                         *
 * Preconditions: An empty array of int type that is the size of two needs to be *
 *				  available.                                                       *
 * Postconditions: Two random numbers will be returned through the number array. *      
 ***********************************************************************************/
void generate_random_two_numbers_range_nine (int nums[])
{
	nums[0] = rand () % 10;
	nums[1] = rand () % 10;
}

/*************************************************************************************
 * Function: void print_equation_level_two (int nums[], int oper, int *user_answer)  *
 * Date Created: December 2, 2015                                                   *
 * Date Last Modified: December 2, 2015                                             *
 * Description: Prints out the equation and gets an answer from the user.            *
 * Input Parameters: int nums[], int oper, and a pointer pointing to whre the user's *
 *					 answer is going to be held.                                     *
 * Returns: user_answer                                                              *
 * Preconditions: In the nums array the two numbers has to randomly generated. A   *
 *				  number has to be generated for the operator. A variable that holds *
 *				  the user's answer needs to be available.                           *
 * Postconditions: The equation should be displayed and accepts an answer from the   *
 *				   user.                                                             *
 *************************************************************************************/
void print_equation_level_two (int nums[], int *user_answer)
{
	printf ("%d x %d = ", nums[0], nums[1]);
	scanf ("%d", user_answer);
}

/********************************************************************************************
 * Function: void evaluate_equation_level_two (int nums[], int oper, int *answer)           *
 * Date Created: December 3, 2015                                                          *
 * Date Last Modified: December 3, 2015                                                    *
 * Description: Evalutates the equation that is generated and save the answer of the        *
 *				equation in a pointer.                                                      *
 * Input Parameters: A pointer that points to a variable where the answer will be held      *
 *					 in.                                                                    *
 * Returns: Returns a pointer to a variable that will hold the answer of the equation.      *                    
 * Preconditions: three random numbers would have be generated and a number that will       *
 *				  be passed in to generated the operator.                                   *
 * Postconditions: The equation will be evaluated and the answer will be held in a pointer. *       
 ********************************************************************************************/
void evaluate_equation_level_two (int nums[], int *answer)
{
	*answer = nums[0] * nums[1];
}

/*
 * Function: void level_two (int total_points_in_game[], int level)
 * Date Created: December 2, 2015
 * Date Last Modified: December 2, 2015                                        
 * Description: Starts Level two.         
 * Input Parameters: int total_points_in_game and int level                                               
 * Returns: None                                      
 * Preconditions: An array need to be available and it's index     
 * Postconditions: The level should start up.       
*/
void level_two (int total_points_in_game[], int level)
{
	int nums[2] = {0}, points[10] = {0};
	int user_answer = 0, answer = 0, sum = 0, count = 0;
	
	srand ((unsigned int) time (NULL));

	printf ("Starting Level Two\n");

	system ("pause");
	system ("cls");

	//difficulty one
	print_question_number (1);
	generate_random_two_numbers_range_two (nums);
	print_equation_level_two (nums, &user_answer);
	evaluate_equation_level_two (nums, &answer);
	check_answer_is_correct (user_answer, answer, points, 0);
	sum = total_points (points, 10);
	print_total_points (sum);

	system ("pause");
	system ("cls");

	//difficulty two
	print_question_number (2);
	generate_random_two_numbers_range_three (nums);
	print_equation_level_two (nums, &user_answer);
	evaluate_equation_level_two (nums, &answer);
	check_answer_is_correct (user_answer, answer, points, 1);
	sum = total_points (points, 10);
	print_total_points (sum);

	system ("pause");
	system ("cls");

	//difficulty three
	print_question_number (3);
	generate_random_two_numbers_range_four (nums);
	print_equation_level_two (nums, &user_answer);
	evaluate_equation_level_two (nums, &answer);
	check_answer_is_correct (user_answer, answer, points, 2);
	sum = total_points (points, 10);
	print_total_points (sum);

	system ("pause");
	system ("cls");

	//difficulty four
	print_question_number (4);
	generate_random_two_numbers_range_five (nums);
	print_equation_level_two (nums, &user_answer);
	evaluate_equation_level_two (nums, &answer);
	check_answer_is_correct (user_answer, answer, points, 3);
	sum = total_points (points, 10);
	print_total_points (sum);

	//difficulty five
	while (count < 6)
	{
		system ("pause");
		system ("cls");

		print_question_number (5+count);
		generate_random_two_numbers_range_nine (nums);
		print_equation_level_two (nums, &user_answer);
		evaluate_equation_level_two (nums, &answer);
		check_answer_is_correct (user_answer, answer, points, 4+count);
		sum = total_points (points, 10);
		print_total_points (sum);
		count++;
	}

	total_points_in_game[level] = sum;
}

/*
Date Created: December 3, 2015
*/
void print_question_number_for_level_three (int num)
{
	printf ("Question number %d: \n", num);
	printf ("Hint: Present your answer like this: number R remainder.\n\n");
}

/***********************************************************************************
 * Function: void generate_random_three_numbers_for_level_three_and_four (int nums[])             *
 * Date Created: December 3, 2015                                                 *
 * Date Last Modified: December 3, 2015                                           *
 * Description: Generates two random numbers for the equation. The range is 1-9. *          
 * Input Parameters: int nums[]                                                    *
 * Returns: Three numbers.                                                         *
 * Preconditions: An empty array of int type that is the size of two needs to be *
 *				  available.                                                       *
 * Postconditions: Two random numbers will be returned through the number array. *      
 ***********************************************************************************/
void generate_random_two_numbers_for_level_three_and_four (int nums[])
{
	nums[0] = rand() % 9 + 1;
	nums[1] = rand() % 9 + 1; 
}

/*************************************************************************************
 * Function: void print_equation_level_three (int nums[], int oper, int *user_answer)  *
 * Date Created: December 2, 2015                                                   *
 * Date Last Modified: December 3, 2015                                             *
 * Description: Prints out the equation and gets an answer from the user.            *
 * Input Parameters: int nums[], int oper, and a pointer pointing to whre the user's *
 *					 answer is going to be held.                                     *
 * Returns: user_answer                                                              *
 * Preconditions: In the nums array the two numbers has to randomly generated. A   *
 *				  number has to be generated for the operator. A variable that holds *
 *				  the user's answer needs to be available.                           *
 * Postconditions: The equation should be displayed and accepts an answer from the   *
 *				   user.                                                             *
 *************************************************************************************/
void print_equation_level_three (int nums[], int *user_answer, int *user_remainder)
{
	char remain = '\0';

	printf ("%d / %d = ", nums[0], nums[1]);
	scanf ("%d %c %d", user_answer, &remain, user_remainder);
}

/*
Date Created: December 2, 2015
*/
void evaluate_equation_level_three (int nums[], int *answer, int *remainder)
{
	*answer = nums[0] / nums[1];
	*remainder = nums[0] % nums[1];
}

/*
Date Created: December 3, 2015
*/
void check_answer_correct_level_three (int user_answer, char user_remain, int user_remainder, int answer, char remain, int remainder, int points[], int index)
{
	if (user_answer == answer && user_remain == remain && user_remainder == remainder)
	{
		printf ("\nCorrect! 10 points!\n");
		points[index] = 10;
	}
	else 
	{
		printf ("\nWrong! Minus 5 points...\n");
		points[index] = -5;
	}
}

/*
 * Function: void level_three (int total_points_in_game[], int level)
 * Date Created: December 3, 2015
 * Date Last Modified: December 4, 2015                                        
 * Description: Starts Level three.         
 * Input Parameters: int total_points_in_game and int level                                               
 * Returns: None                                      
 * Preconditions: An array need to be available and it's index     
 * Postconditions: The level should start up.       
*/
void level_three (int total_points_in_game[], int level)
{
	int nums[2] = {0}, points[10] = {0};
	int user_answer = 0, answer = 0, sum = 0, remainder = 0, user_remainder = 0, count = 0;
	char remain = 'R', user_remain = '\0';

	printf ("Starting Level Three\n");
	
	system ("pause");
	system ("cls");

	//difficulty one
	print_question_number_for_level_three (1);
	printf ("0 / 1 = ");
	scanf ("%d %c %d", &user_answer, &user_remain, &user_remainder);
	answer = 0 / 1;
	remainder = 0 % 1;
	check_answer_correct_level_three (user_answer, user_remain, user_remainder, answer, remain, remainder, points, 0);
	sum = total_points (points, 10);
	print_total_points (sum);

	system ("pause");
	system ("cls");

	print_question_number_for_level_three (2);
	printf ("0 / 3 = ");
	scanf ("%d %c %d", &user_answer, &remain, &user_remainder);
	answer = 0 / 3;
	remainder = 0 % 3;
	check_answer_correct_level_three (user_answer, user_remain, user_remainder, answer, remain, remainder, points, 1);
	sum = total_points (points, 10);
	print_total_points (sum);

	system ("pause");
	system ("cls");

	//difficulty two
	print_question_number_for_level_three (3);
	printf ("1 / 1 = ");
	scanf ("%d %c %d", &user_answer, &remain, &user_remainder);
	answer = 1 / 1;
	remainder = 1 % 1;
	check_answer_correct_level_three (user_answer, user_remain, user_remainder, answer, remain, remainder, points, 2);
	sum = total_points (points, 10);
	print_total_points (sum);
	
	system ("pause");
	system ("cls");

	print_question_number_for_level_three (4);
	printf ("2 / 1 = ");
	scanf ("%d %c %d", &user_answer, &remain, &user_remainder);
	answer = 2 / 1;
	remainder = 2 % 1;
	check_answer_correct_level_three (user_answer, user_remain, user_remainder, answer, remain, remainder, points, 3);
	sum = total_points (points, 10);
	print_total_points (sum);

	//difficulty three
	while (count < 6)
	{
		system ("pause");
		system ("cls");
		print_question_number_for_level_three (5+count);
		generate_random_two_numbers_for_level_three_and_four (nums);
		print_equation_level_three (nums, &user_answer, &user_remainder);
		evaluate_equation_level_three (nums, &answer, &remainder);
		check_answer_correct_level_three (user_answer, user_remain, user_remainder, answer, remain, remainder, points, 4+count);
		sum = total_points (points, 10);
		print_total_points (sum);
		count++;
	}

	total_points_in_game[level] = sum;
}

/*
December 4, 2015
*/
void print_question_number_level_four_five (int num)
{
	printf ("Question number: %d\n", num);
	printf ("Hint: If there is a fraction present your answer as a fraction.\n\n");
}

/***********************************************************************************
 * Function: void generate_random_three_numbers_range_two_level_four (int nums[])             *
 * Date Created: December 4, 2015                                                 *
 * Date Last Modified: Decembe 4, 2015                                           *
 * Description: Generates three random numbers for the equation. The range is 1-2. *          
 * Input Parameters: int nums[]                                                    *
 * Returns: Three numbers.                                                         *
 * Preconditions: An empty array of int type that is the size of three needs to be *
 *				  available.                                                       *
 * Postconditions: Three random numbers will be returned through the number array. *      
 ***********************************************************************************/
void generate_random_three_numbers_range_two_level_four (int nums[])
{
	nums[0] = rand () % 2 + 1;
	nums[1] = rand () % 2 + 1;
	nums[2] = rand () % 2 + 1;
}

/***********************************************************************************
 * Function: void generate_random_three_numbers_range_three_level_four (int nums[])             *
 * Date Created: December 4, 2015                                                 *
 * Date Last Modified: December 4, 2015                                           *
 * Description: Generates three random numbers for the equation. The range is 1-3. *          
 * Input Parameters: int nums[]                                                    *
 * Returns: Three numbers.                                                         *
 * Preconditions: An empty array of int type that is the size of three needs to be *
 *				  available.                                                       *
 * Postconditions: Three random numbers will be returned through the number array. *      
 ***********************************************************************************/
void generate_random_three_numbers_range_three_level_four (int nums[])
{
	nums[0] = rand () % 3 + 1;
	nums[1] = rand () % 3 + 1;
	nums[2] = rand () % 3 + 1;
}

/***********************************************************************************
 * Function: void generate_random_three_numbers_range_four_level_four (int nums[])             *
 * Date Created: December 4, 2015                                                 *
 * Date Last Modified: December 4, 2015                                           *
 * Description: Generates three random numbers for the equation. The range is 1-4. *          
 * Input Parameters: int nums[]                                                    *
 * Returns: Three numbers.                                                         *
 * Preconditions: An empty array of int type that is the size of three needs to be *
 *				  available.                                                       *
 * Postconditions: Three random numbers will be returned through the number array. *      
 ***********************************************************************************/
void generate_random_three_numbers_range_four_level_four (int nums[])
{
	nums[0] = rand () % 4 + 1;
	nums[1] = rand () % 4 + 1;
	nums[2] = rand () % 4 + 1;
}

/***********************************************************************************
 * Function: void generate_random_three_numbers_range_five_level_four (int nums[])             *
 * Date Created: December 4, 2015                                                 *
 * Date Last Modified: December 4, 2015                                           *
 * Description: Generates three random numbers for the equation. The range is 1-5. *          
 * Input Parameters: int nums[]                                                    *
 * Returns: Three numbers.                                                         *
 * Preconditions: An empty array of int type that is the size of three needs to be *
 *				  available.                                                       *
 * Postconditions: Three random numbers will be returned through the number array. *      
 ***********************************************************************************/
void generate_random_three_numbers_range_five_level_four (int nums[])
{
	nums[0] = rand () % 5 + 1;
	nums[1] = rand () % 5 + 1; 
	nums[2] = rand () % 5 + 1;
}

/***********************************************************************************
 * Function: void generate_random_three_numbers_range_nine_level_four (int nums[])             *
 * Date Created: December 5, 2015                                                 *
 * Date Last Modified: December 5, 2015                                           *
 * Description: Generates three random numbers for the equation. The range is 1-9. *          
 * Input Parameters: int nums[]                                                    *
 * Returns: Three numbers.                                                         *
 * Preconditions: An empty array of int type that is the size of three needs to be *
 *				  available.                                                       *
 * Postconditions: Three random numbers will be returned through the number array. *      
 ***********************************************************************************/
void generate_random_three_numbers_range_nine_level_four (int nums[])
{
	nums[0] = rand () % 9 + 1;
	nums[1] = rand () % 9 + 1;
	nums[2] = rand () % 9 + 1;
}

/*
Date Created: December 4, 2015
*/
void generate_random_operator_level_four (int *oper)
{
	*oper = rand () % 113;
}

/*************************************************************************************
 * Function: void print_equation_level_one (int nums[], int oper, int *user_answer)  *
 * Date Created: December 4, 2015                                                   *
 * Date Last Modified: December 4, 2015                                             *
 * Description: Prints out the equation and gets an answer from the user.            *
 * Input Parameters: int nums[], int oper, and a pointer pointing to whre the user's *
 *					 answer is going to be held.                                     *
 * Returns: user_answer                                                              *
 * Preconditions: In the nums array the three numbers has to randomly generated. A   *
 *				  number has to be generated for the operator. A variable that holds *
 *				  the user's answer needs to be available.                           *
 * Postconditions: The equation should be displayed and accepts an answer from the   *
 *				   user.                                                             *
 *************************************************************************************/
void print_equation_level_four (int nums[], int oper, char *user_divisor, int *user_answer, double *user_division)
{
	double user_numer = 0, user_denom = 0;

	switch (oper)
	{
		case 0: printf ("%d + %d + %d = ", nums[0], nums[1], nums[2]);
				scanf ("%d", user_answer);
				break;
		case 1: printf ("-%d + %d + %d = ", nums[0], nums[1], nums[2]);
				scanf ("%d", user_answer);
				break;
		case 2: printf ("%d + -%d + %d = ", nums[0], nums[1], nums[2]);
				scanf ("%d", user_answer);
				break;
		case 3: printf ("%d + %d + -%d = ", nums[0], nums[1], nums[2]);
				scanf ("%d", user_answer);
				break;
		case 4:	printf ("-%d + -%d + %d = ", nums[0], nums[1], nums[2]);
				scanf ("%d", user_answer);
				break;
		case 5:	printf ("-%d + %d + -%d = ", nums[0], nums[1], nums[2]);
				scanf ("%d", user_answer);
				break;
		case 6: printf ("%d + -%d + -%d = ", nums[0], nums[1], nums[2]);
				scanf ("%d", user_answer);
				break;
		case 7: printf ("-%d + -%d + -%d = ", nums[0], nums[1], nums[2]);
				scanf ("%d", user_answer);
				break;
		case 8: printf ("%d - %d - %d = ", nums[0], nums[1], nums[2]);
				scanf ("%d", user_answer);
				break;
		case 9: printf ("-%d - %d - %d = ", nums[0], nums[1], nums[2]);
				scanf ("%d", user_answer);
				break;
		case 10: printf ("%d - -%d - %d = ", nums[0], nums[1], nums[2]);
				 scanf ("%d", user_answer);
				 break;
		case 11: printf ("%d - %d - -%d = ", nums[0], nums[1], nums[2]);
				 scanf ("%d", user_answer);
				 break;
		case 12: printf ("-%d - -%d - %d = ", nums[0], nums[1], nums[2]);
				 scanf ("%d", user_answer);
				 break;
		case 13: printf ("-%d - %d - -%d = ", nums[0], nums[1], nums[2]);
				 scanf ("%d", user_answer);
				 break;
		case 14: printf ("%d - -%d - -%d = ", nums[0], nums[1], nums[2]);
				 scanf ("%d", user_answer);
				 break;
		case 15: printf ("-%d - -%d - -%d = ", nums[0], nums[1], nums[2]);
				 scanf ("%d", user_answer);
				 break;
		case 16: printf ("%d + %d - %d = ", nums[0], nums[1], nums[2]);
				 scanf ("%d", user_answer);
				 break;
		case 17: printf ("-%d + %d - %d = ", nums[0], nums[1], nums[2]);
				 scanf ("%d", user_answer);
				 break;
		case 18: printf ("%d + -%d - %d = ", nums[0], nums[1], nums[2]);
				 scanf ("%d", user_answer);
				 break;
		case 19: printf ("%d + %d - -%d = ", nums[0], nums[1], nums[2]);
				 scanf ("%d", user_answer);
				 break;
		case 20: printf ("-%d + -%d - %d = ", nums[0], nums[1], nums[2]);
				 scanf ("%d", user_answer);
				 break;
		case 21: printf ("-%d + %d - -%d = ", nums[0], nums[1], nums[2]);
				 scanf ("%d", user_answer);
				 break;
		case 22: printf ("%d + -%d - -%d = ", nums[0], nums[1], nums[2]);
				 scanf ("%d", user_answer);
				 break;
		case 23: printf ("-%d + -%d - -%d = ", nums[0], nums[1], nums[2]);
				 scanf ("%d", user_answer);
				 break;
		case 24: printf ("%d - %d + %d = ", nums[0], nums[1], nums[2]);
				 scanf ("%d", user_answer);
				 break;
		case 25: printf ("-%d - %d + %d = ", nums[0], nums[1], nums[2]);
				 scanf ("%d", user_answer);
				 break;
		case 26: printf ("%d - -%d + %d = ", nums[0], nums[1], nums[2]);
				 scanf ("%d", user_answer);
				 break;
		case 27: printf ("%d - %d + -%d = ", nums[0], nums[1], nums[2]);
				 scanf ("%d", user_answer);
				 break;
		case 28: printf ("-%d - -%d + %d = ", nums[0], nums[1], nums[2]);
				 scanf ("%d", user_answer);
				 break;
		case 29: printf ("-%d - %d + -%d = ", nums[0], nums[1], nums[2]);
				 scanf ("%d", user_answer);
				 break;
		case 30: printf ("%d - -%d + -%d = ", nums[0], nums[1], nums[2]);
				 scanf ("%d", user_answer);
				 break;
		case 31: printf ("-%d - -%d + -%d = ", nums[0], nums[1], nums[2]);
				 scanf ("%d", user_answer);
				 break;
		case 32: printf ("%d x %d x %d = ", nums[0], nums[1], nums[2]);
				 scanf ("%d", user_answer);
				 break;
		case 33: printf ("-%d x %d x %d = ", nums[0], nums[1], nums[2]);
				 scanf ("%d", user_answer);
				 break;
		case 34: printf ("%d x -%d x %d = ", nums[0], nums[1], nums[2]);
				 scanf ("%d", user_answer);
				 break;
		case 35: printf ("%d x %d x -%d = ", nums[0], nums[1], nums[2]);
				 scanf ("%d", user_answer);
				 break;
		case 36: printf ("-%d x -%d x %d = ", nums[0], nums[1], nums[2]);
				 scanf ("%d", user_answer);
				 break;
		case 37: printf ("-%d x %d x -%d = ", nums[0], nums[1], nums[2]);
				 scanf ("%d", user_answer);
				 break;
		case 38: printf ("%d x -%d x -%d = ", nums[0], nums[1], nums[2]);
				 scanf ("%d", user_answer);
				 break;
		case 39: printf ("-%d x -%d x -%d = ", nums[0], nums[1], nums[2]);
				 scanf ("%d", user_answer);
				 break;
		case 40: printf ("%d / %d / %d = ", nums[0], nums[1], nums[2]);
				 scanf ("%lf %c %lf", &user_numer, user_divisor, &user_denom);
				 *user_division = user_numer / user_denom;
				 break;
		case 41: printf ("-%d / %d / %d = ", nums[0], nums[1], nums[2]);
				 scanf ("%lf %c %lf", &user_numer, user_divisor, &user_denom);
				 *user_division = user_numer / user_denom;
				 break;
		case 42: printf ("%d / -%d / %d = ", nums[0], nums[1], nums[2]);
				 scanf ("%lf %c %lf", &user_numer, user_divisor, &user_denom);
				 *user_division = user_numer / user_denom;
				 break;
		case 43: printf ("%d / %d / -%d = ", nums[0], nums[1], nums[2]);
				 scanf ("%lf %c %lf", &user_numer, user_divisor, &user_denom);
				 *user_division = user_numer / user_denom;
				 break;
		case 44: printf ("-%d / -%d / %d = ", nums[0], nums[1], nums[2]);
				 scanf ("%lf %c %lf", &user_numer, user_divisor, &user_denom);
				 *user_division = user_numer / user_denom;
				 break;
		case 45: printf ("-%d / %d / -%d = ", nums[0], nums[1], nums[2]);
				 scanf ("%lf %c %lf", &user_numer, user_divisor, &user_denom);
				 *user_division = user_numer / user_denom;
				 break;
		case 46: printf ("%d / -%d / -%d = ", nums[0], nums[1], nums[2]);
				 scanf ("%lf %c %lf", &user_numer, user_divisor, &user_denom);
				 *user_division = user_numer / user_denom;
				 break;
		case 47: printf ("-%d / -%d / -%d = ", nums[0], nums[1], nums[2]);
				 scanf ("%lf %c %lf", &user_numer, user_divisor, &user_denom);
				 *user_division = user_numer / user_denom;
				 break;
		case 48: printf ("%d + %d x %d = ", nums[0], nums[1], nums[2]);
				 scanf ("%d", user_answer);
				 break;
		case 49: printf ("-%d + %d x %d = ", nums[0], nums[1], nums[2]);
				 scanf ("%d", user_answer);
				 break;
		case 50: printf ("%d + -%d x %d = ", nums[0], nums[1], nums[2]);
				 scanf ("%d", user_answer);
				 break;
		case 51: printf ("%d + %d x -%d = ", nums[0], nums[1], nums[2]);
				 scanf ("%d", user_answer);
				 break;
		case 52: printf ("-%d + -%d x %d = ", nums[0], nums[1], nums[2]);
				 scanf ("%d", user_answer);
				 break;
		case 53: printf ("-%d + %d x -%d = ", nums[0], nums[1], nums[2]);
				 scanf ("%d", user_answer);
				 break;
		case 54: printf ("%d + -%d x -%d = ", nums[0], nums[1], nums[2]);
				 scanf ("%d", user_answer);
				 break;
		case 55: printf ("-%d + -%d x -%d = ", nums[0], nums[1], nums[2]);
				 scanf ("%d", user_answer);
				 break;
		case 56: printf ("%d + %d / %d = ", nums[0], nums[1], nums[2]);
				 scanf ("%lf %c %lf", &user_numer, user_divisor, &user_denom);
				 *user_division = user_numer / user_denom;
				 break;
		case 57: printf ("-%d + %d / %d = ", nums[0], nums[1], nums[2]);
				 scanf ("%lf %c %lf", &user_numer, user_divisor, &user_denom);
				 *user_division = user_numer / user_denom;
				 break;
		case 58: printf ("%d + -%d / %d = ", nums[0], nums[1], nums[2]);
				 scanf ("%lf %c %lf", &user_numer, user_divisor, &user_denom);
				 *user_division = user_numer / user_denom;
				 break;
		case 59: printf ("%d + %d / -%d = ", nums[0], nums[1], nums[2]);
				 scanf ("%lf %c %lf", &user_numer, user_divisor, &user_denom);
				 *user_division = user_numer / user_denom;
				 break;
		case 60: printf ("-%d + -%d / %d = ", nums[0], nums[1], nums[2]);
				 scanf ("%lf %c %lf", &user_numer, user_divisor, &user_denom);
				 *user_division = user_numer / user_denom;
				 break;
		case 61: printf ("-%d + %d / -%d = ", nums[0], nums[1], nums[2]);
				 scanf ("%lf %c %lf", &user_numer, user_divisor, &user_denom);
				 *user_division = user_numer / user_denom;
				 break;
		case 62: printf ("%d + -%d / -%d = ", nums[0], nums[1], nums[2]);
				 scanf ("%lf %c %lf", &user_numer, user_divisor, &user_denom);
				 *user_division = user_numer / user_denom;
				 break;
		case 63: printf ("-%d + -%d / -%d = ", nums[0], nums[1], nums[2]);
				 scanf ("%lf %c %lf", &user_numer, user_divisor, &user_denom);
				 *user_division = user_numer / user_denom;
				 break;
		case 64: printf ("%d - %d x %d = ", nums[0], nums[1], nums[2]);
				 scanf ("%d", user_answer);
				 break;
		case 65: printf ("-%d - %d x %d = ", nums[0], nums[1], nums[2]);
				 scanf ("%d", user_answer);
				 break;
		case 66: printf ("%d - -%d x %d = ", nums[0], nums[1], nums[2]);
				 scanf ("%d", user_answer);
				 break;
		case 67: printf ("%d - %d x -%d = ", nums[0], nums[1], nums[2]);
				 scanf ("%d", user_answer);
				 break;
		case 68: printf ("-%d - -%d x %d = ", nums[0], nums[1], nums[2]);
				 scanf ("%d", user_answer);
				 break;
		case 69: printf ("-%d - %d x -%d = ", nums[0], nums[1], nums[2]);
				 scanf ("%d", user_answer);
				 break;
		case 70: printf ("%d - -%d x -%d = ", nums[0], nums[1], nums[2]);
				 scanf ("%d", user_answer);
				 break;
		case 71: printf ("-%d - -%d x -%d = ", nums[0], nums[1], nums[2]);
				 scanf ("%d", user_answer);
				 break;
		case 72: printf ("%d - %d / %d = ", nums[0], nums[1], nums[2]);
				 scanf ("%lf %c %lf", &user_numer, user_divisor, &user_denom);
				 *user_division = user_numer / user_denom;
				 break;
		case 73: printf ("-%d - %d / %d = ", nums[0], nums[1], nums[2]);
				 scanf ("%lf %c %lf", &user_numer, user_divisor, &user_denom);
				 *user_division = user_numer / user_denom;
				 break;
		case 74: printf ("%d - -%d / %d = ", nums[0], nums[1], nums[2]);
				 scanf ("%lf %c %lf", &user_numer, user_divisor, &user_denom);
				 *user_division = user_numer / user_denom;
				 break;
		case 75: printf ("%d - %d / -%d = ", nums[0], nums[1], nums[2]);
				 scanf ("%lf %c %lf", &user_numer, user_divisor, &user_denom);
				 *user_division = user_numer / user_denom;
				 break;
		case 76: printf ("-%d - -%d / %d = ", nums[0], nums[1], nums[2]);
				 scanf ("%lf %c %lf", &user_numer, user_divisor, &user_denom);
				 *user_division = user_numer / user_denom;
				 break; 
		case 77: printf ("-%d - %d / -%d = ", nums[0], nums[1], nums[2]);
				 scanf ("%lf %c %lf", &user_numer, user_divisor, &user_denom);
				 *user_division = user_numer / user_denom;
				 break;
		case 78: printf ("%d - -%d / -%d = ", nums[0], nums[1], nums[2]);
				 scanf ("%lf %c %lf", &user_numer, user_divisor, &user_denom);
				 *user_division = user_numer / user_denom;
				 break;
		case 79: printf ("-%d - -%d / -%d = ", nums[0], nums[1], nums[2]);
				 scanf ("%lf %c %lf", &user_numer, user_divisor, &user_denom);
				 *user_division = user_numer / user_denom;
				 break;
		case 80: printf ("%d x %d + %d = ", nums[0], nums[1], nums[2]);
				 scanf ("%d", user_answer);
				 break;
		case 81: printf ("-%d x %d + %d = ", nums[0], nums[1], nums[2]);
				 scanf ("%d", user_answer);
				 break;
		case 82: printf ("%d x -%d + %d = ", nums[0], nums[1], nums[2]);
				 scanf ("%d", user_answer);
				 break;
		case 83: printf ("%d x %d + -%d = ", nums[0], nums[1], nums[2]);
				 scanf ("%d", user_answer);
				 break;
		case 84: printf ("-%d x -%d + %d = ", nums[0], nums[1], nums[2]);
				 scanf ("%d", user_answer);
				 break;
		case 85: printf ("-%d x %d + -%d = ", nums[0], nums[1], nums[2]);
				 scanf ("%d", user_answer);
				 break;
		case 86: printf ("%d x -%d + -%d = ", nums[0], nums[1], nums[2]);
				 scanf ("%d", user_answer);
				 break;
		case 87: printf ("-%d x -%d + -%d = ", nums[0], nums[1], nums[2]);
				 scanf ("%d", user_answer);
				 break;
		case 88: printf ("%d x %d - %d = ", nums[0], nums[1], nums[2]);
				 scanf ("%d", user_answer);
				 break;
		case 89: printf ("-%d x %d - %d = ", nums[0], nums[1], nums[2]);
				 scanf ("%d", user_answer);
				 break;
		case 90: printf ("%d x -%d - %d = ", nums[0], nums[1], nums[2]);
				 scanf ("%d", user_answer);
				 break;
		case 91: printf ("%d x %d - -%d = ", nums[0], nums[1], nums[2]);
				 scanf ("%d", user_answer);
				 break;
		case 92: printf ("-%d x -%d - %d = ", nums[0], nums[1], nums[2]);
				 scanf ("%d", user_answer);
				 break;
		case 93: printf ("-%d x %d - -%d = ", nums[0], nums[1], nums[2]);
				 scanf ("%d", user_answer);
				 break;
		case 94: printf ("%d x -%d - -%d = ", nums[0], nums[1], nums[2]);
				 scanf ("%d", user_answer);
				 break;
		case 95: printf ("-%d x -%d - -%d = ", nums[0], nums[1], nums[2]);
				 scanf ("%d", user_answer);
				 break;
		case 96: printf ("%d / %d + %d = ", nums[0], nums[1], nums[2]);
				 scanf ("%lf %c %lf", &user_numer, user_divisor, &user_denom);
				 *user_division = user_numer / user_denom;
				 break;
		case 97: printf ("-%d / %d + %d = ", nums[0], nums[1], nums[2]);
				 scanf ("%lf %c %lf", &user_numer, user_divisor, &user_denom);
				 *user_division = user_numer / user_denom;
				 break;
		case 98: printf ("%d / -%d + %d = ", nums[0], nums[1], nums[2]);
				 scanf ("%lf %c %lf", &user_numer, user_divisor, &user_denom);
				 *user_division = user_numer / user_denom;
				 break;
		case 99: printf ("%d / %d + -%d = ", nums[0], nums[1], nums[2]);
				 scanf ("%lf %c %lf", &user_numer, user_divisor, &user_denom);
				 *user_division = user_numer / user_denom;
				 break;
		case 100: printf ("-%d / -%d + %d = ", nums[0], nums[1], nums[2]);
				 scanf ("%lf %c %lf", &user_numer, user_divisor, &user_denom);
				 *user_division = user_numer / user_denom;
				 break;
		case 101: printf ("-%d / %d + -%d = ", nums[0], nums[1], nums[2]);
				 scanf ("%lf %c %lf", &user_numer, user_divisor, &user_denom);
				 *user_division = user_numer / user_denom;
				 break;
		case 102: printf ("%d / -%d + -%d = ", nums[0], nums[1], nums[2]);
				 scanf ("%lf %c %lf", &user_numer, user_divisor, &user_denom);
				 *user_division = user_numer / user_denom;
				 break;
		case 103: printf ("-%d / -%d + -%d = ", nums[0], nums[1], nums[2]);
				 scanf ("%lf %c %lf", &user_numer, user_divisor, &user_denom);
				 *user_division = user_numer / user_denom;
				 break;
		case 104: printf ("%d / %d - %d = ", nums[0], nums[1], nums[2]);
				 scanf ("%lf %c %lf", &user_numer, user_divisor, &user_denom);
				 *user_division = user_numer / user_denom;
				 break;
		case 105: printf ("-%d / %d - %d = ", nums[0], nums[1], nums[2]);
				 scanf ("%lf %c %lf", &user_numer, user_divisor, &user_denom);
				 *user_division = user_numer / user_denom;
				 break;
		case 106: printf ("%d / -%d - %d = ", nums[0], nums[1], nums[2]);
				 scanf ("%lf %c %lf", &user_numer, user_divisor, &user_denom);
				 *user_division = user_numer / user_denom;
				 break;
		case 107: printf ("%d / %d - -%d = ", nums[0], nums[1], nums[2]);
				 scanf ("%lf %c %lf", &user_numer, user_divisor, &user_denom);
				 *user_division = user_numer / user_denom;
				 break;
		case 108: printf ("-%d / -%d - %d = ", nums[0], nums[1], nums[2]);
				 scanf ("%lf %c %lf", &user_numer, user_divisor, &user_denom);
				 *user_division = user_numer / user_denom;
				 break;
		case 109: printf ("-%d / %d - -%d = ", nums[0], nums[1], nums[2]);
				 scanf ("%lf %c %lf", &user_numer, user_divisor, &user_denom);
				 *user_division = user_numer / user_denom;
				 break;
		case 110: printf ("%d / -%d - -%d = ", nums[0], nums[1], nums[2]);
				 scanf ("%lf %c %lf", &user_numer, user_divisor, &user_denom);
				 *user_division = user_numer / user_denom;
				 break;
		case 111: printf ("-%d / -%d - -%d = ", nums[0], nums[1], nums[2]);
				 scanf ("%lf %c %lf", &user_numer, user_divisor, &user_denom);
				 *user_division = user_numer / user_denom;
				 break;
	}
}

/*
Date Created: December 4, 2015
*/
void evaluate_equation_level_four (int nums[], int oper, int *answer, double *answer_division)
{
	switch (oper)
	{
		case 0: *answer = nums[0] + nums[1] + nums[2];
				break;
		case 1: *answer = -nums[0] + nums[1] + nums[2];
				break;
		case 2: *answer = nums[0] + -nums[1] + nums[2];
				break;
		case 3: *answer = nums[0] + nums[1] + -nums[2];
				break;
		case 4: *answer = -nums[0] + -nums[1] + nums[2];
				break;
		case 5: *answer = -nums[0] + nums[1] + -nums[2];
				break;
		case 6: *answer = nums[0] + -nums[1] + -nums[2];
				break;
		case 7: *answer = -nums[0] + -nums[1] + -nums[2];
				break;
		case 8: *answer = nums[0] - nums[1] - nums[2];
				break;
		case 9: *answer = -nums[0] - nums[1] - nums[2];
				break;
		case 10: *answer = nums[0] - -nums[1] - nums[2];
				 break;
		case 11: *answer = nums[0] - nums[1] - -nums[2];
				break;
		case 12: *answer = -nums[0] - -nums[1] - nums[2];
				 break;
		case 13: *answer = -nums[0] - nums[1] - -nums[2];
				 break;
		case 14: *answer = nums[0] - -nums[1] - -nums[2];
				 break;
		case 15: *answer = -nums[0] - -nums[1] - -nums[2];
				 break;
		case 16: *answer = nums[0] + nums[1] - nums[2];
				 break;
		case 17: *answer = -nums[0] + nums[1] - nums[2];
				 break;
		case 18: *answer = nums[0] + -nums[1] - nums[2];
				 break;
		case 19: *answer = nums[0] + nums[1] - -nums[2];
				 break;
		case 20: *answer = -nums[0] + -nums[1] - nums[2];
				 break;
		case 21: *answer = -nums[0] + nums[1] - -nums[2];
				 break;
		case 22: *answer = nums[0] + -nums[1] - -nums[2];
				 break;
		case 23: *answer = -nums[0] + -nums[1] - -nums[2];
				 break;
		case 24: *answer = nums[0] - nums[1] + nums[2];
				 break;
		case 25: *answer = -nums[0] - nums[1] + nums[2];
				 break;
		case 26: *answer = nums[0] - -nums[1] + nums[2];
				 break;
		case 27: *answer = nums[0] - nums[1] + -nums[2];
				 break;
		case 28: *answer = -nums[0] - -nums[1] + nums[2];
				 break;
		case 29: *answer = -nums[0] - nums[1] + -nums[2];
				 break;
		case 30: *answer = nums[0] - -nums[1] + -nums[2];
				 break;
		case 31: *answer = -nums[0] - -nums[1] + -nums[2];
				 break;
		case 32: *answer = nums[0] * nums[1] * nums[2];
				 break;
		case 33: *answer = -nums[0] * nums[1] * nums[2];
				 break;
		case 34: *answer = nums[0] * -nums[1] * nums[2];
				 break;
		case 35: *answer = nums[0] * nums[1] * -nums[2];
				 break;
		case 36: *answer = -nums[0] * -nums[1] * nums[2];
				 break;
		case 37: *answer = -nums[0] * nums[1] * -nums[2];
				 break;
		case 38: *answer = nums[0] * -nums[1] * -nums[2];
				 break;
		case 39: *answer = -nums[0] * -nums[1] * -nums[2];
				 break;
		case 40: *answer_division = nums[0] / nums[1] / nums[2];
				 break;
		case 41: *answer_division = -nums[0] / nums[1] / nums[2];
				 break;
		case 42: *answer_division = nums[0] / -nums[1] / nums[2];
				 break;
		case 43: *answer_division = nums[0] / nums[1] / -nums[2];
				 break;
		case 44: *answer_division = -nums[0] / -nums[1] / nums[2];
				 break;
		case 45: *answer_division = -nums[0] / nums[1] / -nums[2];
				 break;
		case 46: *answer_division = nums[0] / -nums[1] / -nums[2];
				 break;
		case 47: *answer_division = -nums[0] / -nums[1] / -nums[2];
				 break;
		case 48: *answer = nums[0] + nums[1] * nums[2];
				 break; 
		case 49: *answer = -nums[0] + nums[1] * nums[2];
				 break;
		case 50: *answer = nums[0] + -nums[1] * nums[2];
				 break;
		case 51: *answer = nums[0] + nums[1] * -nums[2];
				 break;
		case 52: *answer = -nums[0] + -nums[1] * nums[2];
				 break;
		case 53: *answer = -nums[0] + nums[1] * -nums[2];
				 break;
		case 54: *answer = nums[0] + -nums[1] * -nums[2];
				 break;
		case 55: *answer = -nums[0] + -nums[1] * -nums[2];
				 break;
		case 56: *answer_division = nums[0] + nums[1] / nums[2];
				 break;
		case 57: *answer_division = -nums[0] + nums[1] / nums[2];
				 break;
		case 58: *answer_division = nums[0] + -nums[1] / nums[2];
				 break;
		case 59: *answer_division = nums[0] + nums[1] / -nums[2];
				 break;
		case 60: *answer_division = -nums[0] + -nums[1] / nums[2];
				 break;
		case 61: *answer_division = -nums[0] + nums[1] / -nums[2];
				 break;
		case 62: *answer_division = nums[0] + -nums[1] / -nums[2];
				 break;
		case 63: *answer_division = -nums[0] + -nums[1] / -nums[2];
				 break;
		case 64: *answer = nums[0] - nums[1] * nums[2];
				 break;
		case 65: *answer = -nums[0] - nums[1] * nums[2];
				 break;
		case 66: *answer = nums[0] - -nums[1] * nums[2];
				 break;
		case 67: *answer = nums[0] - nums[1] * -nums[2];
				 break;
		case 68: *answer = -nums[0] - -nums[1] * nums[2];
				 break;
		case 69: *answer = -nums[0] - nums[1] * -nums[2];
				 break;
		case 70: *answer = nums[0] - -nums[1] * -nums[2];
				 break;
		case 71: *answer = -nums[0] - -nums[1] * -nums[2];
				 break;
		case 72: *answer_division = nums[0] - nums[1] / nums[2];
				 break;
		case 73: *answer_division = -nums[0] - nums[1] / nums[2];
				 break;
		case 74: *answer_division = nums[0] - -nums[1] / nums[2];
				 break;
		case 75: *answer_division = nums[0] - nums[1] / -nums[2];
				 break;
		case 76: *answer_division = -nums[0] - -nums[1] / nums[2];
				 break;
		case 77: *answer_division = -nums[0] - nums[1] / -nums[2];
				 break;
		case 78: *answer_division = nums[0] - -nums[1] / -nums[2];
				 break;
		case 79: *answer_division = -nums[0] - -nums[1] / -nums[2];
				 break;
		case 80: *answer = nums[0] * nums[1] + nums[2];
				 break; 
		case 81: *answer = -nums[0] * nums[1] + nums[2];
				 break; 
		case 82: *answer = nums[0] * -nums[1] + nums[2];
				 break; 
		case 83: *answer = nums[0] * nums[1] + -nums[2];
				 break; 
		case 84: *answer = -nums[0] * -nums[1] + nums[2];
				 break; 
		case 85: *answer = -nums[0] * nums[1] + -nums[2];
				 break; 
		case 86: *answer = nums[0] * -nums[1] + -nums[2];
				 break; 
		case 87: *answer = -nums[0] * -nums[1] + -nums[2];
				 break; 
		case 88: *answer = nums[0] * nums[1] - nums[2];
				 break;
		case 89: *answer = -nums[0] * nums[1] - nums[2];
				 break;
		case 90: *answer = nums[0] * -nums[1] - nums[2];
				 break;
		case 91: *answer = nums[0] * nums[1] - -nums[2];
				 break;
		case 92: *answer = -nums[0] * -nums[1] - nums[2];
				 break;
		case 93: *answer = -nums[0] * nums[1] - -nums[2];
				 break;
		case 94: *answer = nums[0] * -nums[1] - -nums[2];
				 break;
		case 95: *answer = -nums[0] * -nums[1] - -nums[2];
				 break;
		case 96: *answer_division = nums[0] / nums[1] + nums[2];
				 break;
		case 97: *answer_division = -nums[0] / nums[1] + nums[2];
				 break;
		case 98: *answer_division = nums[0] / -nums[1] + nums[2];
				 break;
		case 99: *answer_division = nums[0] / nums[1] + -nums[2];
				 break;
		case 100: *answer_division = -nums[0] / -nums[1] + nums[2];
				  break;
		case 101: *answer_division = -nums[0] / nums[1] + -nums[2];
				  break;
		case 102: *answer_division = nums[0] / -nums[1] + -nums[2];
				  break;
		case 103: *answer_division = -nums[0] / -nums[1] + -nums[2];
				  break;
		case 104: *answer_division = nums[0] / nums[1] - nums [2];
				  break;
		case 105: *answer_division = -nums[0] / nums[1] - nums [2];
				  break;
		case 106: *answer_division = nums[0] / -nums[1] - nums [2];
				  break;
		case 107: *answer_division = nums[0] / nums[1] - -nums [2];
				  break;
		case 108: *answer_division = -nums[0] / -nums[1] - nums [2];
				  break;
		case 109: *answer_division = -nums[0] / nums[1] - -nums [2];
				  break;
		case 110: *answer_division = nums[0] / -nums[1] - -nums [2];
				  break;
		case 111: *answer_division = -nums[0] / -nums[1] - -nums [2];
				  break;
	}
}

/*
Date Created: December 4, 2015
*/
void check_answer_correct_four (int answer, int user_answer, int answer_division, int user_division, char divisor, char user_divisor, int oper, int points[], int index)
{
	if ((oper > 39 && oper < 48) || (oper > 55 && oper < 64) || (oper > 71 && oper < 80) || (oper > 95 && oper < 112))
	{
		if (user_division == answer_division && user_divisor == divisor)
		{
			printf ("\nCorrect! 10 points!\n");
			points[index] = 10;
		}
		else 
		{
			printf ("\nWrong! Minus 5 points...\n");
			points[index] = -5;
		}
	}
	else 
	{
		if (user_answer == answer)
		{
			printf ("\nCorrect! 10 points!\n");
			points[index] = 10;
		}
		else
		{
			printf ("\nWrong! Minus 5 points...\n");
			points[index] = -5;
		}
	}
}

/*
 * Function: void level_four (int total_points_in_game[], int level)
 * Date Created: December 4, 2015
 * Date Last Modified: December 4, 2015                                        
 * Description: Starts Level four.         
 * Input Parameters: int total_points_in_game and int level                                               
 * Returns: None                                      
 * Preconditions: An array need to be available and it's index     
 * Postconditions: The level should start up.       
*/
void level_four (int total_points_in_game[], int level)
{
	int nums[3] = {0}, points[10] = {0};
	int user_answer = 0, answer = 0, sum = 0, count = 0, oper = 0;
	double user_division = 0, answer_division = 0;
	char user_divsor = '\0', divsor = '/';

	srand ((unsigned int) time (NULL));

	printf ("Starting Level Four\n");

	system ("pause");
	system ("cls");

	//difficulty one
	print_question_number_level_four_five (1);
	generate_random_three_numbers_range_two_level_four (nums);
	print_equation_level_four (nums, 0, &user_divsor, &user_answer, &user_division); 
	evaluate_equation_level_four (nums, 0, &answer, &answer_division);
	check_answer_correct_four (answer, user_answer, answer_division, user_division, divsor, user_divsor, 0, points, 0);
	sum = total_points (points, 10);
	print_total_points (sum);

	system ("pause");
	system ("cls");

	//difficulty two
	print_question_number_level_four_five (2);
	generate_random_three_numbers_range_three_level_four (nums);
	print_equation_level_four (nums, 8, &user_divsor, &user_answer, &user_division);
	evaluate_equation_level_four (nums, 8, &answer, &answer_division);
	check_answer_correct_four (answer, user_answer, answer_division, user_division, divsor, user_divsor, 8, points, 1);
	sum = total_points (points, 10);
	print_total_points (sum);

	system ("pause");
	system ("cls");

	//difficulty three
	print_question_number_level_four_five (3);
	generate_random_three_numbers_range_five_level_four (nums);
	print_equation_level_four (nums, 32, &user_divsor, &user_answer, &user_division);
	evaluate_equation_level_four (nums, 32, &answer, &answer_division);
	check_answer_correct_four (answer, user_answer, answer_division, user_division, divsor, user_divsor, 32, points, 2);
	sum = total_points (points, 10);
	print_total_points (sum);

	//difficulty four
	while (count > 7)
	{
		system ("pause");
		system ("cls");
		print_question_number_level_four_five (4+count);
		generate_random_three_numbers_range_nine_level_four (nums);
		generate_random_operator_level_four (&oper);
		print_equation_level_four (nums, oper, &user_divsor, &user_answer, &user_division);
		evaluate_equation_level_four (nums, oper, &answer, &answer_division);
		check_answer_correct_four (answer, user_answer, answer_division, user_division, divsor, user_divsor, oper, points, 3+count);
		sum = total_points (points, 10);
		print_total_points (sum);
	}

	total_points_in_game[level] = sum;
}

/***********************************************************************************
 * Function: void generate_double_digit_numbers (int nums[])             *
 * Date Created: December 4, 2015                                                 *
 * Date Last Modified: December 4, 2015                                           *
 * Description: Generates four random numbers for the equation. The range is 1-99. *          
 * Input Parameters: int nums[]                                                    *
 * Returns: four numbers.                                                         *
 * Preconditions: An empty array of int type that is the size of four needs to be *
 *				  available.                                                       *
 * Postconditions: four random numbers will be returned through the number array. *      
 ***********************************************************************************/
void generate_double_digit_numbers (int nums[])
{
	nums[0] = rand () % 99 + 1;
	nums[1] = rand () % 99 + 1;
	nums[2] = rand () % 99 + 1;
	nums[3] = rand () % 99 + 1;
}

/***********************************************************************************
 * Function: void generate_triple_digit_numbers (int nums[])             *
 * Date Created: December 4, 2015                                                 *
 * Date Last Modified: December 4, 2015                                           *
 * Description: Generates four random numbers for the equation. The range is 1-999. *          
 * Input Parameters: int nums[]                                                    *
 * Returns: four numbers.                                                         *
 * Preconditions: An empty array of int type that is the size of four needs to be *
 *				  available.                                                       *
 * Postconditions: four random numbers will be returned through the number array. *      
 ***********************************************************************************/
void generate_triple_digit_numbers (int nums[])
{
	nums[0] = rand () % 999 + 1;
	nums[1] = rand () % 999 + 1;
	nums[2] = rand () % 999 + 1;
	nums[3] = rand () % 999 + 1;
}

/*
Date Created: December 4, 2015
*/
void generate_random_operator_level_five (int *oper)
{
	*oper = rand () % 49;
}

/*************************************************************************************
 * Function: void print_equation_level_five (int nums[], int oper, int *user_answer)  *
 * Date Created: December 4, 2015                                                   *
 * Date Last Modified: December 4, 2015                                             *
 * Description: Prints out the equation and gets an answer from the user.            *
 * Input Parameters: int nums[], int oper, and a pointer pointing to whre the user's *
 *					 answer is going to be held.                                     *
 * Returns: user_answer                                                              *
 * Preconditions: In the nums array the four numbers has to randomly generated. A   *
 *				  number has to be generated for the operator. A variable that holds *
 *				  the user's answer needs to be available.                           *
 * Postconditions: The equation should be displayed and accepts an answer from the   *
 *				   user.                                                             *
 *************************************************************************************/
void print_equation_level_five (int nums[], int oper, char *user_divisor, int *user_answer, double *user_division)
{
	double numer = 0, denom = 0;

	switch (oper)
	{
		case 0: printf ("%d + %d + %d + %d = ", nums[0], nums[1], nums[2], nums[3], nums[4]);
				scanf ("%d", user_answer);
				break;
		case 1: printf ("-%d + %d + %d + %d = ", nums[0], nums[1], nums[2], nums[3], nums[4]);
				scanf ("%d", user_answer);
				break;
		case 2: printf ("%d + -%d + %d + %d = ", nums[0], nums[1], nums[2], nums[3], nums[4]);
				scanf ("%d", user_answer);
				break;
		case 3: printf ("%d + %d + -%d + %d = ", nums[0], nums[1], nums[2], nums[3], nums[4]);
				scanf ("%d", user_answer);
				break;
		case 4: printf ("%d + %d + %d + -%d = ", nums[0], nums[1], nums[2], nums[3], nums[4]);
				scanf ("%d", user_answer);
				break;
		case 5: printf ("%d - %d - %d - %d = ", nums[0], nums[1], nums[2], nums[3], nums[4]);
				scanf ("%d", user_answer);
				break;
		case 6: printf ("-%d - %d - %d - %d = ", nums[0], nums[1], nums[2], nums[3], nums[4]);
				scanf ("%d", user_answer);
				break;
		case 7: printf ("%d - -%d - %d - %d = ", nums[0], nums[1], nums[2], nums[3], nums[4]);
				scanf ("%d", user_answer);
				break;
		case 8: printf ("%d - %d - -%d - %d = ", nums[0], nums[1], nums[2], nums[3], nums[4]);
				scanf ("%d", user_answer);
				break;
		case 9: printf ("%d - %d - %d - -%d = ", nums[0], nums[1], nums[2], nums[3], nums[4]);
				scanf ("%d", user_answer);
				break;
		case 10: printf ("%d + %d + %d - %d = ", nums[0], nums[1], nums[2], nums[3], nums[4]);
				 scanf ("%d", user_answer);
				 break;
		case 11: printf ("-%d + %d + %d - %d = ", nums[0], nums[1], nums[2], nums[3], nums[4]);
				 scanf ("%d", user_answer);
				 break;
		case 12: printf ("%d + -%d + %d - %d = ", nums[0], nums[1], nums[2], nums[3], nums[4]);
				 scanf ("%d", user_answer);
				 break;
		case 13: printf ("%d + %d + -%d - %d = ", nums[0], nums[1], nums[2], nums[3], nums[4]);
				 scanf ("%d", user_answer);
				 break;
		case 14: printf ("%d + %d + %d - -%d = ", nums[0], nums[1], nums[2], nums[3], nums[4]);
				 scanf ("%d", user_answer);
				 break;
		case 15: printf ("%d + %d - %d - %d = ", nums[0], nums[1], nums[2], nums[3], nums[4]);
				 scanf ("%d", user_answer);
				 break;
		case 16: printf ("-%d + %d - %d - %d = ", nums[0], nums[1], nums[2], nums[3], nums[4]);
				 scanf ("%d", user_answer);
				 break;
		case 17: printf ("%d + -%d - %d - %d = ", nums[0], nums[1], nums[2], nums[3], nums[4]);
				 scanf ("%d", user_answer);
				 break;
		case 18: printf ("%d + %d - -%d - %d = ", nums[0], nums[1], nums[2], nums[3], nums[4]);
				 scanf ("%d", user_answer);
				 break;
		case 19: printf ("%d + %d - %d - -%d = ", nums[0], nums[1], nums[2], nums[3], nums[4]);
				 scanf ("%d", user_answer);
				 break;
		case 20: printf ("%d - %d - %d + %d = ", nums[0], nums[1], nums[2], nums[3], nums[4]);
				 scanf ("%d", user_answer);
				 break;
		case 21: printf ("-%d - %d - %d + %d = ", nums[0], nums[1], nums[2], nums[3], nums[4]);
				 scanf ("%d", user_answer);
				 break;
		case 22: printf ("%d - -%d - %d + %d = ", nums[0], nums[1], nums[2], nums[3], nums[4]);
				 scanf ("%d", user_answer);
				 break;
		case 23: printf ("%d - %d - -%d + %d = ", nums[0], nums[1], nums[2], nums[3], nums[4]);
				 scanf ("%d", user_answer);
				 break;
		case 24: printf ("%d - %d - %d + -%d = ", nums[0], nums[1], nums[2], nums[3], nums[4]);
				 scanf ("%d", user_answer);
				 break;
		case 25: printf ("%d - %d + %d + %d = ", nums[0], nums[1], nums[2], nums[3], nums[4]);
				 scanf ("%d", user_answer);
				 break;
		case 26: printf ("-%d - %d + %d + %d = ", nums[0], nums[1], nums[2], nums[3], nums[4]);
				 scanf ("%d", user_answer);
				 break;
		case 27: printf ("%d - -%d + %d + %d = ", nums[0], nums[1], nums[2], nums[3], nums[4]);
				 scanf ("%d", user_answer);
				 break;
		case 28: printf ("%d - %d + -%d + %d = ", nums[0], nums[1], nums[2], nums[3], nums[4]);
				 scanf ("%d", user_answer);
				 break;
		case 29: printf ("%d - %d + %d + -%d = ", nums[0], nums[1], nums[2], nums[3], nums[4]);
				 scanf ("%d", user_answer);
				 break;
		case 30: printf ("%d x %d x %d x %d = ", nums[0], nums[1], nums[2], nums[3], nums[4]);
				 scanf ("%d", user_answer);
				 break;
		case 31: printf ("-%d x %d x %d x %d = ", nums[0], nums[1], nums[2], nums[3], nums[4]);
				 scanf ("%d", user_answer);
				 break;
		case 32: printf ("%d x -%d x %d x %d = ", nums[0], nums[1], nums[2], nums[3], nums[4]);
				 scanf ("%d", user_answer);
				 break;
		case 33: printf ("%d x %d x -%d x %d = ", nums[0], nums[1], nums[2], nums[3], nums[4]);
				 scanf ("%d", user_answer);
				 break;
		case 34: printf ("%d x %d x %d x -%d = ", nums[0], nums[1], nums[2], nums[3], nums[4]);
				 scanf ("%d", user_answer);
				 break;
		case 35: printf ("%d / %d / %d / %d = ", nums[0], nums[1], nums[2], nums[3], nums[4]);
				 scanf ("%lf %c %lf", &numer, user_divisor, &denom);
				 *user_division = numer / denom;
				 break;
		case 36: printf ("-%d / %d / %d / %d = ", nums[0], nums[1], nums[2], nums[3], nums[4]);
				 scanf ("%lf %c %lf", &numer, user_divisor, &denom);
				 *user_division = numer / denom;
				 break;
		case 37: printf ("%d / -%d / %d / %d = ", nums[0], nums[1], nums[2], nums[3], nums[4]);
				 scanf ("%lf %c %lf", &numer, user_divisor, &denom);
				 *user_division = numer / denom;
				 break;
		case 38: printf ("%d / %d / -%d / %d = ", nums[0], nums[1], nums[2], nums[3], nums[4]);
				 scanf ("%lf %c %lf", &numer, user_divisor, &denom);
				 *user_division = numer / denom;
				 break;
		case 39: printf ("%d / %d / %d / -%d = ", nums[0], nums[1], nums[2], nums[3], nums[4]);
				 scanf ("%lf %c %lf", &numer, user_divisor, &denom);
				 *user_division = numer / denom;
				 break;
		case 40: printf ("%d / %d + %d / %d = ", nums[0], nums[1], nums[2], nums[3], nums[4]);
				 scanf ("%lf %c %lf", &numer, user_divisor, &denom);
				 *user_division = numer / denom;
				 break;
		case 41: printf ("-%d / %d + %d / %d = ", nums[0], nums[1], nums[2], nums[3], nums[4]);
				 scanf ("%lf %c %lf", &numer, user_divisor, &denom);
				 *user_division = numer / denom;
				 break;
		case 42: printf ("%d / %d + -%d / %d = ", nums[0], nums[1], nums[2], nums[3], nums[4]);
				 scanf ("%lf %c %lf", &numer, user_divisor, &denom);
				 *user_division = numer / denom;
				 break;
		case 43: printf ("%d / %d - %d / %d = ", nums[0], nums[1], nums[2], nums[3], nums[4]);
				 scanf ("%lf %c %lf", &numer, user_divisor, &denom);
				 *user_division = numer / denom;
				 break;
		case 44: printf ("-%d / %d - %d / %d = ", nums[0], nums[1], nums[2], nums[3], nums[4]);
				 scanf ("%lf %c %lf", &numer, user_divisor, &denom);
				 *user_division = numer / denom;
				 break;
		case 45: printf ("%d / %d - -%d / %d = ", nums[0], nums[1], nums[2], nums[3], nums[4]);
				 scanf ("%lf %c %lf", &numer, user_divisor, &denom);
				 *user_division = numer / denom;
				 break;
		case 46: printf ("%d / %d x %d / %d = ", nums[0], nums[1], nums[2], nums[3], nums[4]);
				 scanf ("%lf %c %lf", &numer, user_divisor, &denom);
				 *user_division = numer / denom;
				 break;
		case 47: printf ("-%d / %d x %d / %d = ", nums[0], nums[1], nums[2], nums[3], nums[4]);
				 scanf ("%lf %c %lf", &numer, user_divisor, &denom);
				 *user_division = numer / denom;
				 break;
		case 48: printf ("%d / %d x -%d / %d = ", nums[0], nums[1], nums[2], nums[3], nums[4]);
				 scanf ("%lf %c %lf", &numer, user_divisor, &denom);
				 *user_division = numer / denom;
				 break;
	}
}
 /*
 Date Created: December 4, 2015
 */
void evaluate_equation_level_five (int nums[], int oper, int *answer, double *answer_division)
{
	switch (oper)
	{
		case 0: *answer = nums[0] + nums[1] + nums[2] + nums[3];
				break;
		case 1: *answer = -nums[0] + nums[1] + nums[2] + nums[3];
				break;
		case 2: *answer = nums[0] + -nums[1] + nums[2] + nums[3];
				break;
		case 3: *answer = nums[0] + nums[1] + -nums[2] + nums[3];
				break;
		case 4: *answer = nums[0] + nums[1] + nums[2] + -nums[3];
				break;
		case 5: *answer = nums[0] - nums[1] - nums[2] - nums[3];
				break;
		case 6: *answer = -nums[0] - nums[1] - nums[2] - nums[3];
				break;
		case 7: *answer = nums[0] - -nums[1] - nums[2] - nums[3];
				break;
		case 8: *answer = nums[0] - nums[1] - -nums[2] - nums[3];
				break;
		case 9: *answer = nums[0] - nums[1] - nums[2] - -nums[3];
				break;
		case 10: *answer = nums[0] + nums[1] + nums[2] - nums[3];
				 break;
		case 11: *answer = -nums[0] + nums[1] + nums[2] - nums[3];
				 break;
		case 12: *answer = nums[0] + -nums[1] + nums[2] - nums[3];
				 break;
		case 13: *answer = nums[0] + nums[1] + -nums[2] - nums[3];
				 break;
		case 14: *answer = nums[0] + nums[1] + nums[2] - -nums[3];
				 break;
		case 15: *answer = nums[0] + nums[1] - nums[2] - nums[3];
				 break;
		case 16: *answer = -nums[0] + nums[1] - nums[2] - nums[3];
				 break;
		case 17: *answer = nums[0] + -nums[1] - nums[2] - nums[3];
				 break;
		case 18: *answer = nums[0] + nums[1] - -nums[2] - nums[3];
				 break;
		case 19: *answer = nums[0] + nums[1] - nums[2] - -nums[3];
				 break;
		case 20: *answer = nums[0] - nums[1] - nums[2] + nums[3];
				 break;
		case 21: *answer = -nums[0] - nums[1] - nums[2] + nums[3];
				 break;
		case 22: *answer = nums[0] - -nums[1] - nums[2] + nums[3];
				 break;
		case 23: *answer = nums[0] - nums[1] - -nums[2] + nums[3];
				 break;
		case 24: *answer = nums[0] - nums[1] - nums[2] + -nums[3];
				 break;
		case 25: *answer = nums[0] - nums[1] + nums[2] + nums[3];
				 break;
		case 26: *answer = -nums[0] - nums[1] + nums[2] + nums[3];
				 break;
		case 27: *answer = nums[0] - -nums[1] + nums[2] + nums[3];
				 break;
		case 28: *answer = nums[0] - nums[1] + -nums[2] + nums[3];
				 break;
		case 29: *answer = nums[0] - nums[1] + nums[2] + -nums[3];
				 break;
		case 30: *answer = nums[0] * nums[1] * nums[2] * nums[3];
				 break;
		case 31: *answer = -nums[0] * nums[1] * nums[2] * nums[3];
				 break;
		case 32: *answer = nums[0] * -nums[1] * nums[2] * nums[3];
				 break;
		case 33: *answer = nums[0] * nums[1] * -nums[2] * nums[3];
				 break;
		case 34: *answer = nums[0] * nums[1] * nums[2] * -nums[3];
				 break;
		case 35: *answer_division = nums[0] / nums[1] / nums[2] / nums[3];
				 break;
		case 36: *answer_division = -nums[0] / nums[1] / nums[2] / nums[3];
				 break;
		case 37: *answer_division = nums[0] / -nums[1] / nums[2] / nums[3];
				 break;
		case 38: *answer_division = nums[0] / nums[1] / -nums[2] / nums[3];
				 break;
		case 39: *answer_division = nums[0] / nums[1] / nums[2] / -nums[3];
				 break;
		case 40: *answer_division = nums[0] / nums[1] + nums[2] / nums[3];
				 break;
		case 41: *answer_division = -nums[0] / nums[1] + nums[2] / nums[3];
				 break;
		case 42: *answer_division = nums[0] / nums[1] + -nums[2] / nums[3];
				 break;
		case 43: *answer_division = nums[0] / nums[1] - nums[2] / nums[3];
			     break;
		case 44: *answer_division = -nums[0] / nums[1] - nums[2] / nums[3];
			     break;
		case 45: *answer_division = nums[0] / nums[1] - -nums[2] / nums[3];
			     break;
		case 46: *answer_division = nums[0] / nums[1] * nums[2] / nums[3];
				 break;
		case 47: *answer_division = -nums[0] / nums[1] * nums[2] / nums[3];
				 break;
		case 48: *answer_division = nums[0] / nums[1] * -nums[2] / nums[3];
				 break;
	}
}

/*
Date Created: December 4, 2015
*/
void check_answer_correct_five (int answer, int user_answer, int answer_division, int user_division, char divisor, char user_divisor, int oper, int points[], int index)
{
	if (oper > 34)
	{
		if (user_division == answer_division && user_divisor == divisor)
		{
			printf ("\nCorrect! 10 points!\n");
			points[index] = 10;
		}
		else 
		{
			printf ("\nWrong! Minus 5 points...\n");
			points[index] = -5;
		}
	}
	else 
	{
		if (user_answer == answer)
		{
			printf ("\nCorrect! 10 points!\n");
			points[index] = 10;
		}
		else
		{
			printf ("\nWrong! Minus 5 points...\n");
			points[index] = -5;
		}
	}
}

/*
 * Function: void level_five (int total_points_in_game[], int level)
 * Date Created: December 4, 2015
 * Date Last Modified: December 4, 2015                                        
 * Description: Starts Level one.         
 * Input Parameters: int total_points_in_game and int level                                               
 * Returns: None                                      
 * Preconditions: An array need to be available and it's index     
 * Postconditions: The level should start up.       
*/
void level_five (int total_points_in_game[], int level)
{
	int nums[4] = {0}, points[10] = {0};
	int user_answer = 0, answer = 0, sum = 0, count = 0, oper = 0;
	double user_division = 0, answer_division = 0;
	char user_divsor = '\0', divsor = '/';

	srand ((unsigned int) time (NULL));

	printf ("Starting Level Five\n");

	//difficulty one
	print_question_number_level_four_five (1);
	generate_double_digit_numbers (nums);
	print_equation_level_five (nums, 0, &user_divsor, &user_answer, &user_division);
	evaluate_equation_level_five (nums, 0, &answer, &answer_division);
	check_answer_correct_five (answer, user_answer, answer_division, user_division, divsor, user_divsor, 0, points, 0);
	sum = total_points (points, 10);
	print_total_points (sum);

	system ("pause");
	system ("cls");

	//difficulty two
	print_question_number_level_four_five (2);
	generate_triple_digit_numbers (nums);
	print_equation_level_five (nums, 0, &user_divsor, &user_answer, &user_division);
	evaluate_equation_level_five (nums, 0, &answer, &answer_division);
	check_answer_correct_five (answer, user_answer, answer_division, user_division, divsor, user_divsor, 0, points, 1);
	sum = total_points (points, 10);
	print_total_points (sum);

	system ("pause");
	system ("cls");

	//difficulty three 
	print_question_number_level_four_five (3);
	generate_double_digit_numbers (nums);
	print_equation_level_five (nums, 5, &user_divsor, &user_answer, &user_division);
	check_answer_correct_five (answer, user_answer, answer_division, user_division, divsor, user_divsor, 5, points, 2);
	sum = total_points (points, 10);
	print_total_points (sum);

	system ("pause");
	system ("cls");

	//difficulty four
	print_question_number_level_four_five (4);
	generate_triple_digit_numbers (nums);
	print_equation_level_five (nums, 5, &user_divsor, &user_answer, &user_division);
	check_answer_correct_five (answer, user_answer, answer_division, user_division, divsor, user_divsor, 5, points, 3);
	sum = total_points (points, 10);
	print_total_points (sum);

	//difficulty five
	while (count < 7)
	{
		system ("pause");
		system ("cls");
		print_question_number_level_four_five (5+count);
		generate_triple_digit_numbers (nums);
		print_equation_level_five (nums, 5, &user_divsor, &user_answer, &user_division);
		check_answer_correct_five (answer, user_answer, answer_division, user_division, divsor, user_divsor, 5, points, 4+count);
		sum = total_points (points, 10);
		print_total_points (sum);
		count++;
	}

	total_points_in_game[level] = sum; 
}

/*
Date Created: December 5, 2015
*/
void game_menu (int *option)
{
	printf ("*****Welcome to the Educational Math Program!*****\n");
	printf ("* Menu:                                          *\n");
	printf ("* 1. Learn about how to use the program          *\n");
	printf ("* 2. Enter you initals (3 individual characters) *\n");
	printf ("* 3. Difficulty selection                        *\n");
	printf ("* 4. Start a new sequence of problems            *\n");
	printf ("* 5. Save and Quit                               *\n");
	printf ("**************************************************\n\n");

	printf ("Please enter an option: ");
	scanf ("%d", option);
}

/*
Date Created: December 5, 2015
*/
void learn_about_the_program (void)
{
	printf ("In this program you will be answering math questions. There are five levels that progressively get harder.\n");
	printf ("Within each level the question will get harder. Math is one of the most important and difficult subjects to\n");
	printf ("teach and learn. Like many people say \"Practic makes perfect\", so this program will help you pracitce your\n");
	printf ("math. Enjoy and have fun.\n");
}

/*
Date Created: December 5, 2015
*/
void enetr_intials (char intitals[])
{
	printf ("Please enter you initals (3 characters): ");
	gets (intitals);
}

/*
Date Created: December 5, 2015
*/
void difficulty_selections (int *level_option)
{
	printf ("Difficulty selection menu: \n");
	printf ("1. Level 1 - Easy: Includes addition and subtraction problems, postive single digit\n");
	printf ("             operands and up to three terms only.\n");
	printf ("2. Level 2 - Fair: Includes multipication problems, with positive single digit operands\n");
	printf ("             and up to two terms only.\n");
	printf ("3. Level 3 - Intermediate: Includes division problems, with positive single digit operands\n");
	printf ("             and up to two terms only.\n");
	printf ("4. Level 4 - Hard: Includes a mix of addition, subtraction, multiplication, and division\n");
	printf ("             problems, with positive and negative single digit operands and up to three terms\n");
	printf ("             only\n");
	printf ("5. Level 5 - Impossible: Includes a mix of addition, subtraction, multiplication, and division.\n");
	printf ("             problems, with positive and negative two and three digit operands and up to four\n");
	printf ("             four terms only.\n\n");
	
	printf ("Please select a level: ");
	scanf ("%d", level_option);
}

/*
Date Created: December 5, 2015
*/
FILE * open_file_write (void)
{
	FILE *outfile = NULL;

	outfile = fopen ("scores.dat", "w");

	return outfile;
}

/*
Date Created: December 5, 2015
*/
void save_to_file (FILE *outfile, int total_points_for_game, char intials[])
{
	fprintf (outfile, "Name: %s\n", intials);
	fprintf (outfile, "Total points: %d\n", total_points_for_game);
}