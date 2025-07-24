#include<stdio.h>

int main(){
	printf("input your less letter \n");
	char my_char = '\0';
	scanf ("%c", &my_char) ;
	my_char = my_char - 32;

	printf("%c", my_char);
	return 0;}


