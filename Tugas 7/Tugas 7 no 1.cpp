#include <stdio.h>
int main (){
	//deklarasi array untuk menyimpan nilai mahaiswa
	int N[10];
	//menginput 10 nilai mahasiswa
	printf("Masukan 10 nilai mahasiswa");
	int i;
	for (i = 0; i < 10; ++i) {
		printf("\nNilai mahasiswa ke-%d: ", i + 1);
		scanf("%d", &N[i]);
	}
	//mencetak daftar nilai mahasiswa yang lulus
	printf("Daftar nilai mahasiswa yang lulus: \n");
		int i2;
		for (i2 = 0; 12 < 10; ++i2) {
			if (N[i2] >= 60) {
				printf("Nilai mahasiswa ke-%d : %d\n", i2 + 1, N[i2]);
			}
		}
		return 0;
	
}
