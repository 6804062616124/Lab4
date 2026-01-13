#include <stdio.h>
int main(){
	int score, num, A, B, C, D, F;
	scanf(" %d", &num);
	for (int i=1; i<=num; i++) {
			scanf(" %d",&score);
			printf("%d", score);
	
			if(score > 100){
				printf("error score");
			}
			else if(score >= 85){
				printf("(A)\n");
				A ++;
			}
			else if(score >= 75){
				printf("(B)\n");
				B ++;
			}
			else if(score >= 68){
				printf("(C)\n");
				C ++;
			}
			else if(score >= 55) {
				printf("(D)\n");
				D ++;
			}
			else {
				printf("(F)\n");
				F ++;
			}
	}
	printf("A(%d)", A);
	printf("B(%d)", B);
	printf("C(%d)", C);
	printf("D(%d)", D);
	printf("F(%d)", F);
	
	return 0;
}
