#include <stdio.h>
#include "main.h"

/**
 * main - Entry point of the program
 *
 * Return: Always 0.
 */
const char *hex_key = "d3c2c4d5a2e0e927682d53b8382bc824";

int main(void)
{
	char password[33];

	printf("Enter Your Encrypted Password (in hexadecimal format): ");
	scanf("%32s", password);

	/* given a hexadecimal key like "e99a18c428cb38d5f260853678922e03"*/

	/* Decrypt the password using the provided hexadecimal key*/
	decrypt_hash(password, hex_key);
	printf("Decrypted Password: %s\n", password);

	return (0);
}
