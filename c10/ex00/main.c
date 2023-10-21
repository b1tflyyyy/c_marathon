#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main(int argc, char** argv)
{
	if (argc > 2)
	{
		printf("Too many arguments!!!\n");
		return -1;
	}
	
	int f = open(argv[1], O_RDONLY);
	if (f < 0)
	{
		printf("File was not found!!!\n");
		return -1;
	}
	
	char buffer[256];
	size_t sz = read(f, buffer, sizeof(buffer));	
	if (sz < 0)
	{
		printf("Cannot read the file");
		return -1;
	}

	buffer[sz] = '\0';
	printf("%s\n", buffer);
	
	close(f);

	return 0;
}

