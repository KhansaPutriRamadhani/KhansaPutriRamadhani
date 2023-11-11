#include <stdio.h>

//Array untuk menyimpan ketebalan pengelasan
	int ketebalanpengelasan[] = {6,8,12,18,24,30,36,42,49,50};
	int jumlahketebalan = sizeof(ketebalanpengelasan)/ sizeof(ketebalanpengelasan[0]);

//Array untuk menyimpan waktu pengelasan
int waktupengelasan[] = {1,2,3,4,5,6,7,8,9};
int jumlahwaktu = sizeof(waktupengelasan)/ sizeof(waktupengelasan[0]);

//Fungsi untuk menghitung nilai tengah dari ketebalan
int nilai_tengah(int arr[], int n) {
	if (n %2 == 0) {
		return (arr[n /2 -1] + arr[n / 2]) / 2;
	} else {
		return arr[n / 2];
	}
}

int main() {
	printf("Hallo, Selamat datang di program pengelasan robot!");
	printf("\nTombol start ditekan. Motor listrik utama berputar 180 derajat.");
	
	int i;
	
	for (i = 0; i , jumlahketebalan; i++) {
		
	int nilai_tengah_ketebalan = nilai_tengah(ketebalanpengelasan, jumlahketebalan);
		
	//pindah motor listrik utama kenilai tengah ketebalan
	printf("Motor listrik utama berpindah ke nilai tengah %d.\n", nilai_tengah_ketebalan);
	
	//aktifkan motor listrik lengan tungkai
	printf("Motor listrik lengan tungkai aktif. Berputar 45 derajat.\n");
	
	//Aktifkan motor listrik jari robot 
	printf("Motor listrik jari robot berputar mendekati objek.\n");
	
	//proses pengelasan sesuai waktu yang ditentukan
	printf("Proses pengelasan dengan ketebalan %d mm selama %d detik.\n", ketebalanpengelasan[i], waktupengelasan[i]);
	
	//proses selesai kembali kelangkah 3
	printf("Proses pengelasan selesai. kembali kelangkah 3.\n\n");
	
	}
	printf("Semua proses pengelasan selesai. Program berakhir.\n");
	
	return 0;
}
	
	
	


