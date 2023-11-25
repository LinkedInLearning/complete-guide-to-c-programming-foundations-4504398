#include <stdio.h>

int main()
{
	float highscore[5];

	highscore[0] = 993.86;
	highscore[1] = 682.01;
	highscore[2] = 639.60;
	highscore[3] = 310.45;
	highscore[4] = 123.25;

	puts("Here are the high scores:");
	printf("#1 %.2f\n",highscore[0]);
	printf("#2 %.2f\n",highscore[1]);
	printf("#3 %.2f\n",highscore[2]);
	printf("#4 %.2f\n",highscore[3]);
	printf("#5 %.2f\n",highscore[4]);

	return(0);
}

