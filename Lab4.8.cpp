#include <stdio.h>
int main(){
	int score, num;
	scanf(" %d", &num);
	for (int i=1; i<=num; i++) {
			scanf(" %d",&score);
			printf("%d", score);
	
			if(score > 100){
				printf("error score");
			}
			else if(score >= 85){
				printf("(A)\n");
			}
			else if(score >= 75){
				printf("(B)\n");
			}
			else if(score >= 68){
				printf("(C)\n");
			}
			else if(score >= 55) {
				printf("(D)\n");
			}
			else {
				printf("(F)\n");
			}
	}
	
	return 0;
}
