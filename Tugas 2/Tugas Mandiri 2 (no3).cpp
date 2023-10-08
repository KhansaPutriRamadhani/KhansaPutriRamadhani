#include <stdio.h>
#include <math.h>

int main()
{
	int sisi_alas;
	int sisi_tinggi;
	int sisi_miring;
	
	//panjang sisi alas dan sisi tinggi
	sisi_alas = 4;
	sisi_tinggi = 5;
	
	//menghitung sisi miring dengan rumus pythagoras
	sisi_miring = sqrt(sisi_alas * sisi_alas + sisi_tinggi * sisi_tinggi);
	
	//munculkan hasilnya
	printf("Sisi alas: %i ", sisi_alas);
	printf("\nSisi tinggi: %i", sisi_tinggi);
	printf("\nrumus: (a x a + t x t)");
	printf("\nSisi miringnya adalah: %.i", sisi_miring);
	
	return 0;
	
	
}
