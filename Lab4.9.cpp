#include <stdio.h>
int main(){
	int score=0;
	while (score != -1) {
			scanf(" %d",&score);
			printf("%d", score);
			
			if(score == -1) {
				break;
			}
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
