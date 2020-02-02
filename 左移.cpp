#include <iostream>
using namespace std;

int main(void) {
	int i,j,k;
	
	i=1;
	j=2<<(-1);
	printf("i=%d j=%d %d\n",i,j,j&i);
	for (k=1;k<10;k++) {
		if (k > 1) {
			continue;
		}
		printf("k=%d\n",(k<<2)&1);
	}
	
	return 0;
}
