#include <stdio.h>

	int main(){
	char user[5];
	int is_admin = 0;
	printf("Please input your username\n");
	scanf("%5s" , user );
	if (user[0] == 'a' &&
		user[1] == 'd' &&
		user[2] == 'm' &&
		user[3] == 'i' &&
		user[4] == 'n' &&
 		user[5] == '\0'){
	is_admin = 1;
        printf("You are admin");
        }
	else{
	printf("You are simply");}
	return 0;}
