#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
*read_textfile - Function that reads a text file and prints it to the POSIX
*standar output.
*@filename: is a char value
*@letters: is a size_t value
*Return: A size_t value
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int File, Readfile, Writefile, Closefile;
	char *buffer;

	if (filename == NULL)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	File = open(filename, O_RDONLY);
	if (File == -1)
		return (0);
	Readfile = read(File, buffer, letters);
	if (Readfile == -1)
	{
		free(buffer);
		return (0);
	}
	Writefile = write(STDOUT_FILENO, buffer, Readfile);
	if (Writefile == -1)
	{
		free(buffer);
		return (0);
	}
	Closefile = close(File);
	if (Closefile == -1)
		return (0);
	free(buffer);
	return (Readfile);
}
