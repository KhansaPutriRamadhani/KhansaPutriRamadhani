#include <stdio.h>
#include <stdlib.h>

int main()
{
	int Masuk, Keluar, Biaya, Lama;
	
	printf("Menghitung Biaya Parkir");
	printf("\nJam Masuk :");
	scanf("%d", &Masuk);
	
	printf("Jam Keluar :");
	scanf("%d", &Keluar);
	
	if (Keluar >= Masuk)
		Lama = Keluar - Masuk;
	else
		Lama = (12 - Masuk) + Keluar;
	
	if (Lama > 2)
		Biaya = 2000 + (Lama - 2 * 500);
	else
		Biaya = 2000;
		
		printf("\nBiaya Parkir Adalah : Rp %d\n", Biaya);
		
	system("PAUSE");
	return 0;
}
