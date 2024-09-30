#include <stdio.h>

int main() {
	int mtz[3][3];

	// para adicionar coisas na matriz
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++) {
			mtz[i][j] = 1;
		}
	}

	// para ver a matriz formatada
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++) {
			printf("%d\t", mtz[i][j]);
		}

		printf("\n");
	}
	
	return 0;
}
