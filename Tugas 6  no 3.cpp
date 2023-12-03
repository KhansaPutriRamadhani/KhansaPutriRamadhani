#include <stdio.h>

int main(){
	int i, value = 1;
	
	for (i = 0; i <= 10; ++i) {
		printf("%d\n", value);
		value *= 2;
	}
	
	return 0;
}
