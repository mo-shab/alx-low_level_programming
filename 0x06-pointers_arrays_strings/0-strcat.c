 /**
 * _strcat - function appends the src to dest with \0 at the end
 * @src: The char source
 * @dest: the destination of the appends
 * return: a pointer to the result dest
 */
 char *_strcat(char *dest, char *src)
 {
int i, j;

for( i = 0; dest[i] != '\0'; i++)
for ( j = 0; src[j] != '\0'; j++)
{
dest[i] = src[j];
i++;
}
dest[i] = '\0';
return (&dest);
}
