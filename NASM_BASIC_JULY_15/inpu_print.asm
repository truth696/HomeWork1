extern printf
extern scanf 


section .data 
	text db "Please input your number" ,10 , 0
    frmt db "%d", 0
	finish db "Your number %d",0 ,10

section .bss
	num resb 1

section .text 
	
	global main 
	
	main:

	push rbp
	mov rbp , rsp
	


	mov rdi, text
	xor rax, rax 
	call printf 

	mov rdi, frmt
	lea rsi, [num]
	xor rax, rax 
	call scanf 


	mov rdi, finish 
	xor rax,  rax
	call printf


	mov rsp,rbp
	pop rbp

	ret
