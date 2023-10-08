#include <stdio.h>
#include <math.h>

int main()
{
	//deklarasi variable
	double sisi_alas, sisi_tinggi, sisi_miring;
	
	//menginput sisi_alas (dalam cm)
	printf("Masukan sisi_alas (cm) : ");
	scanf("%f", &sisi_alas);
	
	//menginput sisi_tinggi (dalam cm)
	printf("Masukan sisi_tinggi (cm): ");
	scanf("%f", &sisi_tinggi);
	
	//menghitung sisi_miring menggunakan rumus pytaghoras
	sisi_miring = sqrt(sisi_alas*sisi_alas)+(sisi_tinggi*sisi_tinggi);
	
	//menampilkan hasilnya
	printf("Sisi_miring = %.2f  cm\n", sisi_miring);
	
	return 0;	
	
}

