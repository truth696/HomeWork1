extern printf


section .data 
	text db "Hello World!!"

section .bss

section .text

global main:


main:
	push ebp
	mov ebp, esp 

	xor eax, eax
	mov edi, text

	call printf

	mov esp, ebp
	pop ebp 
	
	ret 
