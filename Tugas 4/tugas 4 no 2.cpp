#include <stdio.h>

 int main()
 {
 	int n;
 	
 	printf ("inputkan sebuah nilai:");
 	scanf ("%d", &n);
 	
 	if (n > 50){
 		n += 10;
 	}
 	
 	else{
 		n -= 25;
	 }
 	printf ("Nilai akhir :%d\n",n);
	return 0; 
 	
 	 
 }
