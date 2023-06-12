#include "main.h"


/**
 * read_textfile-A function that reads text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */


ssize_t read_textfile(const char *filename, size_t letters)
{
	char *fp;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	fp = malloc(sizeof(char) * letters);
	t = read(fd, fp, letters);
	w = write(STDOUT_FILENO, fp, t);

	free(fp);
	close(fd);
	return (w);
}
