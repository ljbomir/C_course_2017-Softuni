#include <stdio.h>

int main(){
	int N;
	int *numbers = malloc(32);
	printf("Please input the number of array indexes: ");
	scanf("%d", &N);

		int i;
		for ( i = 0; i < N; i++ ){
			printf("Now please input the number of %d index ", i);
			scanf("%d", &numbers[i]);
		}

		int j;
	//because someone didn't manage to set his/her complier properly and gave me low score for initializing inside the for loop
		for (j = 0; j < N; j++ ){
			printf ("%d ", numbers[j]);
		}
    
  free (numbers);
  return 0;
}
