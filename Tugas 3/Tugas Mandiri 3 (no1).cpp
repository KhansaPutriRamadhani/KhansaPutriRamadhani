#include <stdio.h>
#include <math.h>

int main()
{
	//deklarasi variabel
	float alas, tinggi, sisi_miring, luas, keliling;
	
	//meminta input panjang alas (dalam cm)
	printf("Masukan panjang alas (cm):");
	scanf("%f", &alas);
	
	//meminta input tinggi segitiga dalam cm
	printf("Masukan tinggi segitiga (cm): ");
	scanf("%f", &tinggi);
	
	//mencari sisi miring
	sisi_miring = sqrt(alas*alas + tinggi*tinggi);
	
	//menghitung luas segitiga
	luas = 0.5 * alas * tinggi;
	
	//menghitung keliling segitiga
	keliling = alas + tinggi + sisi_miring;
	
	//memunculkan hasilnya
	printf("Sisi miring: %.2f cm", sisi_miring);
	printf("\nLuas segitiga: %.2f cm", luas);
	printf("\nKeliling segitiga: %.3f cm", keliling);
	
	return 0;
	
}
