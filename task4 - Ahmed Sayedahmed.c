# include <stdio.h>
# include <stdlib.h>

int main(){ 
	int N, M;   
    printf("Enter the number of rows:");
    scanf("%d",&N);
    printf("Enter the number of columns:");
	scanf("%d",&M);
	int array[N][M];

	int n, m;
    while (n<N)
	{
        for(m=0; m<M; m++){
			scanf("%d", &array[n][m]);        
        }	
		n++;
		printf("\n");
    }
	int X;
    printf("Enter number: ");
	scanf("%d", &X);
	if (array[n][m] == X){
		printf("will not take number\n");
	} else {
		printf("will take number\n");
	}
	system("pause");
	
    return 0;
}
/*I couldn't complete or even take a screenshot of the output due to an error in the compiler(ide) I will try to fix this soon.
I fixed almost everything. there are still some problems in the compiler
Sorry for being late for this task and the two tasks (task4-task5-task6)*/ 
