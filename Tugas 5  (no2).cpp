#include  <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main ()
{
	int Kode, Diskon;
	int Harga, HDiskon;
	char Jenis;
	printf("Jenis : ");
	scanf("%c", &Jenis);
	
	printf("\nKode :");
	scanf("%d", &Kode);
	
	printf("\nHarga :");
	scanf("%d", &Harga);
		
	switch(Jenis) 
	{
	case 'A' :
		Diskon = 10;
		HDiskon = 0.1 * Harga;
		break;
	case 'B' :
		Diskon = 15;
		HDiskon = 0.15 * Harga;
		break;
	case 'C' :
		Diskon = 20;
		HDiskon = 0.20 * Harga;
		break;
	default:
		printf("Input salah");

	}
	
	printf("\nJenis barang %c mendapat diskon %d %%, Harga setelah didiskon : Rp %d\n", Jenis, Diskon, HDiskon);
	return 0;
}
