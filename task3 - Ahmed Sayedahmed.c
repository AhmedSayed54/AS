# include <stdio.h>
# include <stdlib.h>
int main() {
	int no_1;
	printf("Please enter a number :\n");
	scanf("%d", &no_1);

	if (no_1 >= 0 && no_1 < 25){	
			printf("Interval [0,25]\n");
	} else if (no_1 > 25 && no_1 < 50){
			printf("Interval [25,50)\n");
	} else if (no_1 >= 50 && no_1 < 75){
			printf("Interval [50,75)\n");
	} else if (no_1 >= 75 && no_1 < 100){
			printf("Interval [75,100)\n");
	} else if (no_1 = 25){
			printf("Interval [0,25]\nInterval [25,50)\n");	
	} else{
			printf("Out of intervals\n");
	}
	system("pause");
	return 0;
}

