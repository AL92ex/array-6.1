#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int values[10];
	int index;

	for (index = 0; index < 10; ++index) {
		values[index] = 0;
		printf("values[%i] = %i\n", index, values[index]);
	}
	
	system("pause");
	return 0;


}