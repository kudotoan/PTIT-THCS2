#include <stdio.h>
#include <math.h>

double distance(double x1, double y1, double x2, double y2)
{
	double z = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
	double ans = sqrt(z);

	return ans;
}

int check(double a, double b, double c)
{
	if (a <= 0 || b <= 0 || c <= 0)
		return 0;
	if (c >= a + b || b >= a + c || a >= c + b)
		return 0;

	return 1;
}

double calc(double a, double b, double c)
{
	double p = (a + b + c) / 2;
	double s = p * (p - a) * (p - b) * (p - c);
	s = sqrt(s);
	return s;
}

int main(void)
{
	int T;
	scanf("%d", &T);

	while (T--)
	{
		double x1, y1, x2, y2, x3, y3;

		scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3);

		double a = distance(x1, y1, x2, y2);
		double b = distance(x1, y1, x3, y3);
		double c = distance(x2, y2, x3, y3);

		int ok = check(a, b, c);

		if (!ok)
		{
			printf("INVALID\n");
			continue;
		}

		double ans = calc(a, b, c);

		printf("%0.2lf\n", ans);
	}

	return 0;
}
