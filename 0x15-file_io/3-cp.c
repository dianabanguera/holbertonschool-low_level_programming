#include "main.h"

/**
 * main - function that copy the content of a file to another file
 * @argc: number of argumments (need be three)
 * @argv: array that save arguments
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
int file, file2, path, destiny, end1, end2;
char buffer[1024];

if (argc != 3)
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
file = open(argv[1], O_RDONLY);
if (file == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
file2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
if (file2 == -1)
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
do {
path = read(file, buffer, 1024);
if (path == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
destiny = write(file2, buffer, path);
if (destiny == -1)
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
} while (path == 1024);
end1 = close(file);
end2 = close(file2);
if (end1 == -1)
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file), exit(100);
if (end2 == -1)
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file2), exit(100);
return (0);
}
