#include <stdio.h>
	
	int main () {
	int first =0;
	int second =0;
	int thirtd =0;
	printf ("HElooooooooooooooo please input tree num\n");
	scanf("%d",&first);
	scanf("%d",&second);
	scanf("%d",&thirtd);
	if ( first > second && first > thirtd){
	printf ("Your higher num %d", first);
	} else if ( second > first && second > thirtd){
	printf ("Your higher num %d", second);
	} else if ( thirtd > first && thirtd > second){
	printf ("Your higher num %d", thirtd);}
	return 0;}
