#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
*append_text_to_file - Function that appends text at the end of a file
*@filename: is a char value
*@text_content: Char value
*Return: int value
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int File, Writefile, len;

	if (filename == NULL)
		return (-1);

	File = open(filename, O_APPEND | O_WRONLY);
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
