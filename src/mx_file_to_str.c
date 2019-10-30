#include "libmx.h"

char *mx_file_to_str(const char *file)
{
    char *target;
	int len = 0;
	int i = 0;
	char buffer[1];
	int fd;

	if (file == NULL)
		return NULL;
	fd = open(file, O_RDONLY);
	if (fd < 0)
		return NULL;
	while (read(fd, buffer, 1))
		len++;
	if (close(fd) < 0)
        return NULL;
    else
        close(fd);
	target = (char *) malloc(sizeof(char) * (len + 1));
	if (target == NULL)
		return NULL;
	fd = open(file, O_RDONLY);
    if (fd < 0)
        return NULL;
	while (read(fd, buffer, 1)) {
		target[i] = buffer[0];
		i++;
	}
	target[i] = '\0';
	if (close(fd) < 0)
		return NULL;
	else
		close(fd);
	return target;
}

int main()
{
    printf("%s", mx_file_to_str("mx_printchar.c")); // NULL
    system("leaks a.out");
}
