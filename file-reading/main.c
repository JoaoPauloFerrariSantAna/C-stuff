#include <stdio.h>
#include <stdbool.h>

int get_number() {
	int number = 0;

	printf("Write a few numbers here (-1 stops file writing): ");
	scanf("%d", &number);

	return number;
}

char get_action() {
	char action = ' ';

	printf("Would like to [R]ead a file, or [W]rite into one? ");
	scanf(" %c", &action);

	return action;
}

void write(const char* fname) {
	FILE *wfile = fopen(fname, "w");

	int exit_number = -1;

	while(true) {
		int user_number = get_number();

		if(user_number == exit_number) {
			printf("Ending file write...\n");
			break;
		}

		fprintf(wfile, "%d\n", user_number);
	}

	fclose(wfile);
}

int read(const char* fname) {
	FILE *rfile = fopen(fname, "r");

	if(rfile == NULL) {
		return 1;
	}

	int finput = 0;

	printf("Inside the file was:\n");
	// will continue to read rfile until the end
	while(fscanf(rfile, "%d", &finput) != EOF) {
		printf("- %d\n", finput);
	}

	fclose(rfile);

	return 0;
}

void init_prog() {
	const char* fname = "./test.txt";

	while(true) {
		char action = get_action();

		if(action == 'W')
			write(fname);

		if(action == 'R') {
			if(read(fname) == 1) {
				printf("File does not exist!\n");
			}
		}
	}
}

int main(int argc, char** argv) {
	init_prog();

	return 0;
}
