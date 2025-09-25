extern printf 
extern scanf 
section .data 
	text1 db "Please input first number", 10,0
	text2 db "Please input second number", 10,0
	text db "Your numbers mul: %d", 10,0 
	frmt db  "%d" , 0 
section .bss
	num resd 1
	num2 resd 1
section .text
global main 

main: 
	push rbp 
	mov rbp,rsp
	

	mov rdi, text1
	xor rax , rax
	call printf 
	
	
	mov rdi, frmt
	lea rsi, [num]	
	xor rax, rax 
	call scanf 
	
	mov rdi, text2
	xor rax , rax
	call printf
	
	mov rdi, frmt 
	lea rsi, [num2]	
	xor rax, rax 
	call scanf 
	
	mov r9, dword [num2]
	mov r8, dword [num1]
	cmp r8, r9
	jmp next
	mov rdi , r8
	mov rsi, r9 
	cmp rdi, rci  
	xor rax, rax
	call printf


next: 
	mov rdi, r9 
	xor rax ,rax 
	call printf 

	 mov rsp, rbp 
	pop rbp 
	ret
