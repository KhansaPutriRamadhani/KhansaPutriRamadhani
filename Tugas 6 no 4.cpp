#include <stdio.h>

int main()
{
	float v, s, t;
	printf("Masukan kecepatan kendaraan = ", v);
	scanf("%f", &v);
	printf("Masukan waktu tempuh = ", t);
	scanf("%f", &t);
	s = v * t;
	printf ("Maka jara yang ditempuh = %f", s);
	return 0;
}
