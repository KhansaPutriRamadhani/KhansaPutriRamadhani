#include <stdio.h>
int main(){
	double saldo = 1000000.0;
	double bunga = 0.02;
	int jumlah_bulan = 10;
	int bulan;
	
	for (bulan = 1; bulan <= jumlah_bulan; ++bulan) {
		double bunga_bulan_ini = saldo * bunga;
		saldo += bunga_bulan_ini;
	}
	printf("Jumlah uang setelah %d bulan : Rp.%.2f\n", jumlah_bulan, saldo);
	return 0;
}
