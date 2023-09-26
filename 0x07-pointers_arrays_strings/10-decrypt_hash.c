#include <stdio.h>
#include <string.h>
#include <linux/kernel.h>
#include "main.h"

/**
 * decrypt_hash - function to decrypt password
 * @password: A character array that represents the encrypted password.
 * @hex_key: A pointer to a constant character string that
 * represents the decryption key in hexadecimal format.
 *
 * Return : void
 */
void decrypt_hash(char password[], const char *hex_key)
{
	unsigned int key;

	if (kstrtouint(hex_key, "16", &key) != 0)

		for (size_t i = 0; i < strlen(password); i++)
		{
			password[i] = password[i] - key;
		}
}
