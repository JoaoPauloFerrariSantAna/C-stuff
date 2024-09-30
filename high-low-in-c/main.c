#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>

bool is_user_num_secret(int pnum, int snumber) {
	return (pnum == snumber);
}

int gen_seed(int lower, int upper) {
	time_t tm = time(NULL);
	int curr_time = (int)tm;

	srand(curr_time);
	int seed = rand() % (upper - lower + 1 ) + lower;

	return seed;
}

int get_number_input() {
	int input = 0;

	scanf("%d", &input);

	return input;
}

char get_exit_input() {
	printf("Digite [s] para sair. Digite [c] para continuar: ");
	char input = ' ';

	scanf(" %c", &input);

	return input;
}

void high_or_low(int pnum, int snum) {
	printf("Você está %s\n", (pnum > snum ? "quente" : "frio"));
}

void intro() {
	printf("Olá, vamos jogar um jogo: digite um número entre 0 e 100.\n");
	printf("Você possui um total de 7 chances para acertar o número que eu escolhi.\n");
}

void run_game() {
	int chances = 7;
	int secret_number = gen_seed(0, 100);

	while(true) {
		printf("Você tem %d chances\n", chances);
		printf("Escreva um número: ");
		int user_input = get_number_input();

		if(!is_user_num_secret(user_input, secret_number)) {
			high_or_low(user_input, secret_number);
			chances -= 1;

			if(chances == 0) {
				printf("Você perdeu! O número era %d\n", secret_number);

				if(get_exit_input() == 's') {
					printf("Saindo...\n");
					break;
				}

				chances = 7;
				secret_number = gen_seed(0, 100);
			}
		}

		if(is_user_num_secret(user_input, secret_number)) {
			printf("Você acertou!\n");

			if(get_exit_input() == 's') {
				printf("Saindo...\n");
				break;
			}

			chances = 7;
			secret_number = 8;
		}
	}
}

int main() {
	intro();
	run_game();

	return 0;
}
