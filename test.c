#include <stdio.h>

int main(int argc, char* argv[]) {

	for (int i = 0; i < argc; ++i)
		printf("Argument%3d:  %s\n", i, argv[i]);

	return 0;
}
