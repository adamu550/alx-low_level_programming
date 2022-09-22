/**
*_strncpy - concat strings
 *@dest: the 1st string
 *@src: the 2nd string
 *@n: number of character to concat
 *Return: dest;
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j = 0;

	for (; j < n && src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}
	for (; j < n; j++)
	{
		dest[j] = '\0';
	}
	return (dest);
}
