#include <stdio.h>

int main (void)
{
	float plank = 10.0f;
	int piece_count = 4;
	float piece_length = 0.0f;
	piece_length = plank/piece_count;
	printf("length = %.1f", piece_length);
	return 0;
}
