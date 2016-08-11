#include <stdio.h>

void	ft_takes_place(int hour)
{
	printf("THE FOLLOWING TAKES PLACE BETWEEN");
	if (hour == 0)
		printf(" %d.00 A.M. AND %d.00 A.M.",12, 1);
	if (hour == 23)
		printf(" %d.00 P.M. AND %d.00 A.M.",11, 12);
	if (hour > 0 && hour < 11)
		printf(" %d.00 A.M. AND %d.00 A.M.",hour,hour + 1);
	if (hour == 11)
		printf(" %d.00 A.M. AND %d.00 P.M.",11, 12);
	if (hour > 12 && hour < 23)
		printf(" %d.00 P.M. AND %d.00 P.M.",hour - 12, hour - 11);
	if (hour == 12)
		printf(" %d.00 P.M. AND %d.00 P.M.",hour , 1);
	printf("\n");
}

int main()
{
	int x;

	x = 0;
	while(x != 24)
	{
		ft_takes_place(x);
		x++;
	}
}
