#include <stdio.h>
int main() {
	
	int num;
	char char_;
	scanf(" %c %d", &char_, &num);
	for (int i=0; i<num; i++) {
		printf("%c", char_);
	}
	
	return 0;
}
