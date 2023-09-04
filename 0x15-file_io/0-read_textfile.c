#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the
 *           function should read and print.
 *
 * Return: Number of letters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fildes;
ssize_t nrd, nwr;
char *buff;

if (!filename)
return (0);

fildes = open(filename, O_RDONLY);
if (fildes == -1)
return (0);
buff = malloc(sizeof(char) * letters);
if (buff == NULL)
return (0);
nrd = read(fildes, buff, letters);
nwr = write(STDOUT_FILENO, buff, nrd);

close(fildes);
free(buff);

return (nwr);



}
