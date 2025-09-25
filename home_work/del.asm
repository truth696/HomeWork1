extern printf 
	

section .data 
	arr dw 1,2,3,120,71,56
	size egu ($-arr)/2 
	text db "%d",0
section .bss
section .text 
	push rbp
	mov rbp,rsp 
	
	 
	
   ;12 	
