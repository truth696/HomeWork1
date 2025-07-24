#include <stdio.h>
	
	int main(){
	int age = 0;
	int can_vote =0;
	printf("Hello please input how old are you");
	scanf("%d", &age);
	if (age < 18){
	can_vote=age;
	printf("You can't  vote ");
	}else{
	printf("You can vote");}
	printf("%d", can_vote);
	return 0;
}

