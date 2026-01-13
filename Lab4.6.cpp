#include <stdio.h>
int main() {
	
	int num;
	char char_;
	scanf(" %c %d", &char_, &num);
	for (int i=0; i<num; i++) {
		for (int i=0; i<num; i++) {
			printf("%c", char_);
		}
		printf("\n");
	}
	
	return 0;
}
