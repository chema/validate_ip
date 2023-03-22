#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <arpa/inet.h>

int main(int argc, char *argv[]) {
	if (argc != 2) {
		// printf("Usage: %s <ip_address>\n", argv[0]);
		exit(EXIT_FAILURE);	
	}

	struct in_addr addr;
	if (inet_pton(AF_INET, argv[1], &addr) != 1) {
		// printf("%s is not a valid IP address.\n", argv[1]);
		exit(EXIT_FAILURE);
	} else {
		exit(EXIT_SUCCESS);
	}
}
