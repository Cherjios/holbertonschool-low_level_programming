/**
*get_endianness - Function that checks the endianness
*Return: int value 0 for big 1 for little
*/
int get_endianness(void)
{
	int x = 1;

	char *y = (char *)&x;

	return (*y);
}
