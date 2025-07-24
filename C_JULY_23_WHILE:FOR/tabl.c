#include <stdio.h>
	
	
	int main (){
		
	int x= 0;
	int mn=1;
	int res=0;
	printf ("inpu tnum");
	
	scanf("%d", &x);
	
	while( x!=0&&mn!=11){
		res=x*mn;
		
		++mn;
		printf("your num %d\n",res);}
	return 0;}
