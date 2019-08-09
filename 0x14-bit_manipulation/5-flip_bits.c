/**
*flip_bits - Function that returns the number of a bits you
* would need to get from one numbert to another.
*@n: Fist number
*@m: Second number
*Return: The value of bits
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int number = 0;
	int i = 0;

	for (; i <= 63; i++)
	{
		if (((n ^ m) >> i)  & 1)
			number++;
	}

	return (number);
}
