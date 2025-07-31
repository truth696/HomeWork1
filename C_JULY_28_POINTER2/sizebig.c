 #include <stdio.h>
   
   
          int main (){
  			
			
                   const int size = 0;
                   int number[size];
  			int i =0; 
   			  int arr[i];
                
                  printf("Input %d numbers\n", size);
                  for (int  i = 0  ; i  < size ; i++ ){
  
                                  scanf ("%d" , &number[i]);
                          }
                  int max= number[0];
                  int min= number[0];
                  for (int i = 1; i < size ; i++){
  
                          if ( number[i] > max) {
  
                                 
				arr[i] = i;
					
                          }
                          if ( number[i] < min){
 
                                  arr [i] =  i;
				
                          }
                          }
		
                 // printf("max :%d", max + 1 );
                 // printf("\nmin :%d", min + 1);
  
                  return 0; }
