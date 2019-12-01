#include <stdio.h>
void Sdv(int sg[][5]);
void Sbv(int sg[][5]);
void Fl(int sg[][5]);
void Fo(int sg[][5]);

//#include <stdio.h>
//int main() {
//	int inchar;
//	scanf("%d", &inchar);
//	(((inchar / 10) % 10) + 48);
//	printf("%c %c %c %c", (((inchar / 1000) % 10) + 48), (((inchar / 100) % 10) + 48), (((inchar / 10) % 10) + 48), ((inchar / 1) % 10) + 48);
//	return 0;
//}

int main()
{
	int sg[10][5] = { 0,0,0,0,0 };
	for (int i = 0; i < 10; i++)
	{
		scanf("%d%d%d%d%d", &sg[i][0], &sg[i][1], &sg[i][2], &sg[i][3], &sg[i][4]);
	}
	Sdv(sg);
	Sbv(sg);
	Fl(sg);
	Fo(sg);
	return 0;
}
void Sdv(int sg[][5])
{
	float aval = 0;
	int i = 0;
	scanf("%d", &i);
	aval = (sg[i][0] + sg[i][1] + sg[i][2] + sg[i][3] + sg[i][4]) * 1.0 / 5;
	printf("%.2f\n", aval);
}
void Sbv(int sg[][5])
{
	float aval = 0;
	int i = 0;
	scanf("%d", &i);
	aval = (sg[0][i] + sg[1][i] + sg[2][i] + sg[3][i] + sg[4][i]) * 1.0 / 5;
	printf("%.2f\n", aval);
}
void Fl(int sg[][5])
{
	int highest = 0, hstudent = 0, hsubjet = 0;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (highest < sg[i][j])
			{
				hstudent = i, hsubjet = j, highest = sg[hstudent][hsubjet];
			}
		}
	}
	printf("%d %d %d\n", hstudent, hsubjet, highest);
}
void Fo(int sg[][5])
{
	float aval = 0.0, sum[10] = { 0 }, fo = 0.0, out = 0.0;
	for (int i = 0; i < 10; i++)
	{
		aval = (float)(sg[i][0] + sg[i][1] + sg[i][2] + sg[i][3] + sg[i][4]) / 5;
		sum[i] = aval;
		fo += sum[i];
	}
	fo =(fo/10)* (fo / 10);
	for (int i = 0; i < 10; i++)
	{
		out += sum[i]*sum[i] - fo;
	}
	printf("%.2f\n", (out / 10));
}
