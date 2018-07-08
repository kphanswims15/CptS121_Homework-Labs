int sum (int num)
{
	int iter = 0, sum_return = 0;

	for (iter = 0; iter < num; iter++)
	{
		sum_return += iter;
	}
	return sum_return; 
}