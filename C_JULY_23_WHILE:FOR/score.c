#include <stdio.h>
	
	int main () {
	int score = 0;
	printf( "input your score for exam ");
	scanf("%d",&score);
	if (score>=90&&score<=100) {
	printf("Yoooo you are the best!!!, your mark A");
	}
	else if (score>=80&&score<90) {
	printf ("Yooooo this so good bro!!, your mark B");
	}
	else if (score>=70&&score<80) {
	printf ("Yooo not bad bro, your mark C");
	}
	else if (score>=60&&score<70) {
	printf ("mmm not bad bro, but try harder next time, your mark D");
	}else if (score <= 59)  { 
	printf ("bro i know you can better!, but your mark E sorry:(");
	}
	else{
	printf("over");}
		return 0;}
