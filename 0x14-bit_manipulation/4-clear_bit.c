/**
*clear_bit - Sets the value of a bit to 0 at a given index
*@n: Number to evaluate.
*@index: Index to look for.
*Return: The value with the new bit.
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)
		return (-1);

	*n = *n & ~(1 << index);
	return (1);
}
