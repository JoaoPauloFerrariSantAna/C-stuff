#include <stdio.h>

/* so, let's create enums */
enum HttpSuccess { OK = 200, CREATED, ACCEPTED, NOCONTENT = 204 };
enum HttpServerError { INTERNAL = 500, NOTIMPLEMENTED, UNAVAILABLE };

/* let's typefy HttpSuccess */
typedef enum HttpSuccess HttpSuccess;

int main() {
	/* now, let's use it */
	HttpSuccess resp_type = CREATED;

	/* let's print a message */
	switch(resp_type) {
		case OK:
			printf("Obtained...\n");
		break;

		case CREATED:
			printf("Resource created!\n");
		break;

		case ACCEPTED:
			printf("Request obtained, continuing...\n");
		break;

		case NOCONTENT:
			printf("Resource updated!\n");
		break;

		default:
			printf("Unknown response!\n");
		break;
	}

	return 0;
}
