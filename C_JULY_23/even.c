#include <stdio.h>
	
	
int main(){
	
	
	int a = 0;
	int b = 0;
	int sum =0;
	int sum1 =0;
	printf("inpu numbers:\n ");
	scanf("%d",&a);
	scanf("%d",&b);
	if( a%2==0 && b%2==0){	
	
			while ( a<=b){
				sum=sum + a;
				a= a + 2;	
				};}
	else if( a%2==0 && b%2!=0){
		
			while ( a<=b){
				if (a%2==0){
				sum= sum + a;
				a= a+ 2;
				}else{
				a++;};}
				
			}
	else if( a%2!=0 && b%2==0){
			while (a<=b){
				;
				if (a%2!=0){
				a++;
				sum= sum + a;}
				else{
				a++;};}}
	else if( a%2!=0 && b%2!=0){
			a++;
				 while ( a<=b){
                                if (a%2==0){
                                sum= sum + a;
                                a= a+ 2;
                                }else{
                                a++;};}}
	printf ("Your sum %d" , sum);
	return 0;}
				
			
		 
				
