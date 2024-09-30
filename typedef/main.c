#include <stdio.h>

// um "typedef" não é nada mais que um jeito de "criar outros tipos de data"
// um exemplo disso seria:
// "typedef <TIPO QUE VOCÊ QUER MUDAR> <NOVO TIPO>

typedef int INTERGER;

// "typedefs" são semelhantes a "apelidos"

int main() {
	INTERGER numero = 4;

	// viu só? não deu nenhum erro!
	printf("%d\n", numero);
	return 0;
}
