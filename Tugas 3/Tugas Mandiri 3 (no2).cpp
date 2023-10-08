#include <stdio.h>

int main()
{
	//deklarasi variabel
	float celcius, fahrenheit, reamur;
	
	//menginput suhu celcius
	printf("Masukan suhu celcius: ");
	scanf("%f", &celcius);
	
	//menghitung nilai suhu fahrenheit dan reamur
	fahrenheit = (9.0/5.0) * celcius + 32;
	reamur = (4.0/5.0) * celcius;

	//menampilkan hasil dari fahrenheit dan reamur
	printf("Fahrenheit : %.2f", fahrenheit);
	printf("\nReamur : %.3f", reamur);
	
	return 0;
	
}
