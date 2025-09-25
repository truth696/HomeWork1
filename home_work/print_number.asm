extern printf 



section .data
	num db "%d" ,10,0	

section .bss

section .text

global main:

main: 
	push ebp
	mov epb, esp 

	xor eax,eax 
	mov eax, 42
	
	call printf

	mov esp, ebp 
	pop ebp

	ret	
