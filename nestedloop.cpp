#include <stdio.h>
#pragma warning(disable: 4996)

int main() {
	for (int i = 0; i < 5; i++) 
	{
		for (int j = 0; j < 10; j++) printf("*");
		printf("\n");
	}
	return 0; 
}