extern printf 
extern scanf 


section .data 
	text db "Please input number",10,0
	frmt db  "%d", 0
	textf db "Your max number is %d",10,0 
section .bss
	number1	resd 1 
	number2	resd 1
section .text 
	push rbp 
	mov rbp,rsp

	mov rdi, text
	xor rax,rax 
	call printf 


	mov rsi, frmt 
	lea rdi, [number1]
	xor rax , rax 
	call scanf 
	
	mov rsi, frmt 
	lea rdi,[number2]
	xor rax , rax
	call scanf
	
	mov rax,[number1]
	mov rbx,[number2]
	cmp rax,rbx 
	jde .true

.true:
mov rdi,textf
mov rsi,rax
xor rax ,rax 
call printf

	
	
	
	mov rsp,rbp 
	pop rbp 
