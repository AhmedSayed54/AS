# include <stdio.h>
# include <stdlib.h>
/*int main() {
	int a=1, b=2, c=3, d=4;
	a=b=c=d;
	printf("%d\n%d\n%d\n%d\n");
	
	return 0;
}*/
/*int main() {
	char c1='A', c2='B', c3='C';
	printf("%d\n", c1);
}*/
/*int main() {
	int a=3, b=2, c=1;
	printf("%d \n", a>b > b);
	printf("%d \n", a<b == c);
	printf("%d \n", b<c == a);
	printf("%d \n", a<b >= c);
	printf("%d \n", b>c != a);

}*/
/*int main() {
	int a=7, b=3;

	printf("%d \n", b<10);
	printf("%d \n", a<b);
	printf("%d \n", a<=b);
}*/
int main()
{
int sec, hr, min, rem;
printf("Enter the number of seconds you want to convert:");
// scanf() function is used to enter an input 
scanf(" %d", &sec);	
hr = sec / 3600;   
//divide the no. of seconds by 3600 to get whole hours
printf("\nHours:%d", hr);
min = (sec - (hr*3600));
//subtract the no. of seconds in whole hours from the input value, the result will be the no. of minutes
printf("\nMinutes:%d", min/=60);
rem = (sec - (hr*3600) - min*60);
// the reminder after subtracting the values of hr and min from sec will be no. of seconds
printf("\nSeconds:%d\n", rem);
// using the built-in function system() not to close immediately after getting the outputs
system("pause");
return 0;
}

