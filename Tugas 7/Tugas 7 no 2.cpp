#include <stdio.h>
int main(){
	int A[11];
	int data_Dokumen[] =  {12, 15, 7, 10, 5, 2, 17, 25, 9, 20, 35};
	
	//menginput data dari dokumen kedalam array
	printf("Data Dokumen : 12, 15, 7, 10, 2, 17, 25, 9, 20, 35 \n");
	int indexA = 0;
	int i;
	for ( i = 0; i < 11; ++i) {
		if(data_Dokumen[i] %2 == 0) {
			A[indexA] = data_Dokumen[i];
			indexA++;
		}
	}
	printf("Isi array A setelah input nilai genap : \n");
	int i2;
	for(i2 = 0; i2 < indexA; ++i2) {
		printf("A[%d] = %d\n", i2, A[i2]);
	}
	return 0;
}
