#include <stdio.h>
	
int main() {

		int num = 0;
		int res = 0;
		

		printf("input num: ");
		scanf("%d",&num);
		int tmp = num;	

		while (num != 0){
			res = res * 10  + num % 10;
			num /= 10;
		}
	
		
		if (res == tmp) { 
			printf("Your number is palindrome %d", res);
		} 
		else { printf("Its not polindrome %d ", res);
		}

		return 0;

} 	
		
