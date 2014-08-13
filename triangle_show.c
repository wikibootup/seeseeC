#include <stdio.h>

void DecreasingBlank(int line_num, int init_line);
void IncreasingBlank(int line_num, int init_line);
void IncreasingStar(int init_line, int multiply_num);
void DecreasingStar(int line_num, int init_line, int multiply_num);
void Triangle(int line_num, int init_line, int multiply_num);
void InvertedTriangle(int line_num, int init_line, int multiply_num);
void Diamond(int line_num);
void Right_Angled_Right_Angle(int line_num);
void Left_Angled_Right_Algle(int line_num);
void Normal_Triangle(int line_num);

int main()
{
	int line_num;
	line_num = 10;

	printf("You can just watch the Trianles without doing anything \n");

	Right_Angled_Right_Angle(line_num);
	Left_Angled_Right_Algle(line_num);
	Normal_Triangle(line_num);
	Diamond(line_num);	

	return 0;
}

void DecreasingBlank(int line_num, int init_line)
{
	int i;
	for(i = init_line ; i <= line_num ; i++)
		printf(" ");
}

void IncreasingBlank(int line_num, int init_line)
{
	int i;
	for(i = init_line ; i > 0 ; i--)
		printf(" ");
}

void IncreasingStar(int init_line, int multiply_num)
{
	int i;
	int raise_var = (init_line - 1) * multiply_num + 1;

	for(i = raise_var ; i > 0 ; i--)
		printf("*");
}

void DecreasingStar(int line_num, int init_line, int multiply_num)
{
	int i;
	int decrease_var = (line_num - init_line) * multiply_num + 1;

	for(i = decrease_var ; i > 0 ; i--)
		printf("*");
}

void Triangle(int line_num, int init_line, int multiply_num)
{
	for( ; init_line <= line_num ; init_line++)
	{
		DecreasingBlank(line_num, init_line);
		IncreasingStar(init_line, multiply_num);
		printf("\n");
	}
}
void InvertedTriangle(int line_num, int init_line, int multiply_num)
{
	for( ; init_line <= line_num ; init_line++)
	{
		IncreasingBlank(line_num, init_line);
		DecreasingStar(line_num, init_line, multiply_num);
		printf("\n");
	}
}

void Diamond(int line_num)
{
	int init_line = 1;
	int multiply_num = 2;
	Triangle(line_num, init_line, multiply_num);
	InvertedTriangle(line_num, init_line + 1, multiply_num);
}	

void Right_Angled_Right_Angle(int line_num)
{
	int init_line = 1;
	int multiply_num = 1;
	for( ; init_line <= line_num ; init_line++)
	{
		DecreasingBlank(line_num, init_line);
		IncreasingBlank(line_num, init_line + 1);
		IncreasingStar(init_line, multiply_num);
		printf("\n");
	}
}

void Left_Angled_Right_Algle(int line_num)
{
	int init_line = 1;
	int multiply_num = 1;

	Triangle(line_num, init_line, multiply_num);
}

void Normal_Triangle(int line_num)
{
	int init_line = 1;
	int multiply_num = 2;
	Triangle(line_num, init_line, multiply_num);
}	
