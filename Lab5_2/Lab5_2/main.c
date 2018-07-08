#include <stdio.h>

#define FILE_NAME_SIZE 30

int main (void)
{
	FILE *infile = NULL;
	FILE *outfile = NULL;
	char file_name[FILE_NAME_SIZE];
	double value = 0.0, sum = 0.0, average = 0.0;

	printf ("Enter the name of the file to read from: ");
	scanf ("%s", file_name);

	infile = fopen (file_name, "r");
	outfile = fopen ("oput.dat", "w");

	while (!feof(infile))
	{
		fscanf (infile, "%lf", &value);
		sum += value;
		value ++;
	}

	average = sum / value;

	fprintf (outfile, "%lf", average);

	fclose (infile);
	fclose (outfile);
	
	return 0;
}