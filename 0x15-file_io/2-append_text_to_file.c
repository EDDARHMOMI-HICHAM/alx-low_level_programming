#include "main.h"

/**
 * append_text_to_file - Append text to the end of a file.
 * @filename: Name of the file to append to.
 * @text_content: The text content to append to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, write_result;
	size_t text_length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	while (text_content[text_length] != '\0')
		text_length++;

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	write_result = write(fd, text_content, text_length);
	close(fd);

	if (write_result == -1)
		return (-1);

	return (1);
}
