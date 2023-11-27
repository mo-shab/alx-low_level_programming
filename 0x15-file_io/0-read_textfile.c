#include "main.h"

/**
 * read_textfile - function that read text file and print it
 * @filename: The name of the file
 * @letters: the number of letters it should read and print
 * Return:  actual number of letters it could read and print
 * 0 if failed
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file_descriptor, letters_read, bytes_written;
	char *buffer;

	buffer = malloc(letters);
	if (buffer == NULL)
		return (0);
	if (filename == NULL)
		return (0);
	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
	{
		free(buffer);
		return (0);
	}
	letters_read = read(file_descriptor, buffer, letters);
	bytes_written = write(STDOUT_FILENO, buffer, letters_read);
	close(file_descriptor);

	return (bytes_written);
}
