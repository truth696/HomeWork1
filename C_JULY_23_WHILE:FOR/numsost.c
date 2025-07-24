#include <stdio.h>
	
	int main(){
		int num=0;
		printf("Input num: ");
		scanf("%d", &num);	
		if (num%2!=0 && num/1==num && num/num==1 && num>0){
		printf("Your num simply");
		}else if(num%2==0 &&num/1==num && num/num==1 && num>0) {
		printf("Your num natural");
		}else { printf("input correct num");}
	return 0;}
