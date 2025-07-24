#include <stdio.h>
	
	int main(){
		int x =0;
		int y =0;
		int res = 0;
		printf("input first  num ");
		scanf("%d", &x);
		printf("Input second num ");
		scanf("%d", &y);
		if( x>0 && y>0){
		res=x*x;
		y=y-2;
		while ( y!=0){
			
			res = res * x;
			--y;
			continue;
	
		}printf( "Your res %d", res);}
		
		else {
			printf ("Input correct num");
			}
		return 0;
			}
