#include "main.h"

/**
 * main - The main function to copy from file to file
 * @argc: Argument count
 * @argv: argument vecteur
 * Return: 0 if success
*/

int main(int argc, char *argv[])
{
	int file_from, file_to;
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
		print_error_and_exit(97, "Usage: %s file_from file_to\n", argv[0]);
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		print_error_and_exit(98, "Error: Can't read from file %s\n", argv[1]);
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR |
				S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (file_to == -1)
	{
		close(file_from);
		print_error_and_exit(99, "Error: Can't write to file %s\n", argv[2]);
	}
	while ((bytes_read = read(file_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(file_to, buffer, bytes_read);
		if (bytes_written == -1)
		{
			close(file_from);
			close(file_to);
			print_error_and_exit(99, "Error: Can't write to file %s\n", argv[2]);
		}
	}
	if (bytes_read == -1)
	{
		close(file_from);
		close(file_to);
		print_error_and_exit(98, "Error: Can't read from file %s\n", argv[1]);
	}
	if (close(file_from) == -1)
		print_error_and_exit(100, "Error: Can't close fd %d\n", file_from);
	if (close(file_to) == -1)
		print_error_and_exit(100, "Error: Can't close fd %d\n", file_to);

	return (0);
}

/**
 * print_err_exit - function that print error and exit with error code
 * @code: The error code
 * @msg: The message to be printed
 * @filename: The file name
 * Return: Nothing
*/

void print_err_exit(int code, const char *msg, const char *filename)
{
	dprintf(STDERR_FILENO, msg, filename);
	exit(code);
}
