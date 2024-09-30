#include <stdio.h>

#define LINHAS 4
#define COLUNAS 5

void fill_mtz(int rows, int cols, int mtz[rows][cols], int number) {
	for(int i = 0; i < rows; i++) {
		for(int j = 0; j < cols; j++) {
			mtz[i][j] = number;
			printf("%d ", mtz[i][j]);
		}
		printf("\n");
	}
}

void show_mtz(int rows, int cols, int mtz[rows][cols]) {
	for(int i = 0; i < rows; i++) {
		for(int j = 0; j < cols; j++) {
			printf("%d ", mtz[i][j]);
		}
		printf("\n");
	}
}

int main() {
	int mtz[LINHAS][COLUNAS];

	fill_mtz(LINHAS, COLUNAS, mtz, 2);
	show_mtz(LINHAS, COLUNAS, mtz);

	return 0;
}
