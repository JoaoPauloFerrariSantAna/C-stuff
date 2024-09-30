#include <stdio.h>

// structs servem para "modelar e agrupar" informação

//  definição de um "struct"
// "struct <NOME DO STRUCT> {};
//struct Database {
//	char hostname[10];
//	char dbname[17];
//	char user[9]; // "postgres" ou "mysql"
//	char pass[33];
//	int port;
//};

// posso também criar "Database", sendo "Database" um "struct"
typedef struct {
	char hostname[10];
	char dbname[17];
	char user[9]; /* "postgres" ou "mysql" */
	char pass[33];
	int port;
} Database;

int main() {
	Database db = { "localhost", "teste", "user", "abc123", 5432 };

	// posso criar também arrays de structs
	Database dbs[5];

	printf("Conn string is: \"postgres://%s:%s@%s:%d/%s\"\n", db.user, db.pass,
			db.hostname, db.port, db.dbname);
	return 0;
}
