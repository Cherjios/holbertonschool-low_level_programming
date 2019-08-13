#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
*create_file - Function that creates a file
*@filename: is a char value
*@text_content: Char value
*Return: int value
*/
int create_file(const char *filename, char *text_content)
{
	int File, Writefile, len;

	mode_t mode = S_IRUSR | S_IWUSR; /*Permission rw- --- ---*/

	if (filename == NULL)
		return (-1);

	File = open(filename, O_CREAT | O_WRONLY | O_TRUNC, mode);
	if (File == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[len])
			len++;
		Writefile = write(File, text_content, len);
		if (!Writefile)
			return (-1);
	}
	close(File);

	return (1);

}
