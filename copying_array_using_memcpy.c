//This code is referenced by Oreilly.21st.Century.C 
#include <stdio.h>
#include <string.h>
#include <assert.h>

int main()
{
	char array[] = {'a', 'b', 'c'};
	char *copy1, copy2[3];

	copy1 = array;
	memcpy(copy2, array, sizeof(char)*3);

	array[0] = 'd';
	assert(copy1[0] == 'd');
	assert(copy2[0] == 'a');

	printf("The tests were passed successfully.\n");

	return 0;
}
