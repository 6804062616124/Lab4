#include <stdio.h>
int main() {
	
	int row, col;
	char char_;
	scanf(" %c %d %d", &char_, &col, &row);
	for (int i=1; i<=row; i++) {
		for (int i=1; i<=col; i++) {
			printf("%c", char_);
		}
		printf("\n");
	}
	
	return 0;
}
