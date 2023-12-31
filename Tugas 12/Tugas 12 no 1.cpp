#include <stdio.h>
int main(){
	char A[8] = "JAKARTA";
	int I, J, P = 0, flag = 0;
	int counts[256] = {0};
	//cetak isi array A
	
	printf("Program mencari huruf yang sama\n");
	printf("Isi Array A : ");
	for (I=0; I<8; ++I) {
		printf("%3c", A[I]);
	}
	printf("\nMencari huruf yang sama");
	for (J=0; J<5; ++J){
		if (A[J] == 'A'){
			flag = 1; break;
		}
	}
	if(flag==1){
		printf("\nAda \nHuruf : ");
	} else {
		printf("\nTidak Ada");
	}
	while(P[A])
		counts[A[++P]]++;
		for(P=0;P<256;++P)
			if(counts[P]>1)
				printf("%c", P);
	return 0;
}
