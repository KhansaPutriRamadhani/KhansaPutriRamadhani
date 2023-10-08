#include <stdio.h>
int main ()
{
	float diameter, jari, volume;
	
	diameter = 15.00;
	
	jari = diameter/ 2.0;
	
	volume = (4.0 / 3.0) * 3.14 * (jari,3);
	
	printf("diameter : %2f\n", diameter);
	printf("Jari-jari : %2f\n", jari);
	printf("Volume : %2f", volume);
	
	return 0;
	
}
