#include <stdio.h>
#include <stdlib.h>

/**
  * create_array - Creates the array and initialize it with a character
  * @size - the size of the array 
  * @c - The character to initialize the array.
  $ 
  * @return A pointer to the initialized array or Null.
  */
char *create_array(unsigned int size, char __attribute__((unused)) c)
{

unsigned int i;
char *arr;

if(size == 0) return NULL;


arr = (char *)malloc( size * sizeof(char));

if (arr == NULL) return NULL;


for (i = 0; i < size; i++)
{
	arr[i] = c;
}

return arr;
}

int main()
{
	unsigned int size = 10;
	char c = 'A';
	unsigned int i;

	char *result = create_array(size, c);

	if (result != NULL)
	{
		printf("array created: ");

		for(i = 0; i < size; i++)
		{
			printf("%c ", result[i]);
		}

		printf("\n");

		free(result);
	} else 	printf("faild to create array.\n");

	return (0);
}
			
