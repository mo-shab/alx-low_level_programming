#include "main.h"


/**
 * append_text_to_file - function that create a file
 * @filename: The name of the file
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success
 * -1 on failure or file exist
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int len, file;


	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	len = strlen(text_content);
	file = open(filename, O_CREAT | O_APPEND);
	if (file == -1)
		return (-1);
	write(file, text_content, len);

	return (1);
}
