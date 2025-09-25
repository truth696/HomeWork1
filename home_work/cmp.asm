extern printf 
extern scanf 
	
section .data 
	text db "PLs input num: ", 10 ,0
	text2 db "Pls input sec num :",10,0
	frmt db "%d", 0 
	text3 db "Your max num: %d",10,0
	 
section .bss 
	num1 resd 1 
	num2 resd 1
	
	
section .text
global main 
	

main:
	push rbp 	
	mov rsp,rbp 	

	
	mov rdi, text
	xor rax, rax 
	call printf 
	
	mov rdi, frmt 
	lea rsi, [num1]
	xor rax, rax
	call scanf
	
	mov rdi, text2 
	xor rax, rax 
	call printf 
	
	mov rdi, frmt 
	lea rsi, [num2]
	xor rax, rax
	call scanf 
		
	mov rdi, text3
	movsx r8, dword[num1]
	movsx r9, dword[num2]
	cmp r8, r9
	jl next
	jmp high
		
	 
	
	
next: 
	mov rdi, text3 
	mov rsi, r8   
	xor rax,rax 
	call printf 
high:
	mov rsi, r9 
	jmp finish
	 
 
