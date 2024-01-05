

#include <iostream>

#include <vector>

#include "GlobalVariables.h"


// Function Used to get a vector from the user
void getVector(std::vector<int>& vec)
{
	// initialize variables
	int size;
	int index;

	// prompt the user for the size of the vector and store that value in the variable "size"
	printf("Enter the size of the vector: ");
	scanf_s("%d", &size);
	printf("%c", NEW_LINE_CHAR);

	vec.resize(size);

	printf("Enter elements into the vector:\n");
	for (index = 0; index < size; index++)
	{
		printf("Element ");
		printf("%d", index + 1);
		printf(": ");
		scanf_s("%d", &vec[index]);
	}

}



// Function: Display the vector to the user that was previously entered
void displayVector(const std::vector<int>& vec)
{
	int index;

	printf("Vector Elements: ");

	for (index = 0; index < vec.size(); index++ )
	{
		printf("%d", vec[index]);
	}

	printf("%c", NEW_LINE_CHAR);

}


