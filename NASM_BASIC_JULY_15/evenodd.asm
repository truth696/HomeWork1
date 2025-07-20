extern printf 
extern scanf 
	
section .data 	
	texet1 db "Hello pls input your num",10,0
	frmt db "%d",0
	even db "Your num %d is even",0
	odd db "Your num %d is odd",0	
section .bss 
	num resd 1
	

section .text
	
	global main
	
	main:
	
	push rbp	
	
	mov rbp,rsp
	
	
	mov rdi, text1
	xor rax, rax	
	call printf 
	
	mov rdi,frmt 
	lea rsi,[num]
	call scanf 
	
	
	mov rdi, [num]
	and rdi, 1
	cmp rdi, 0
	jg odd
	je even	
odd:
	mov rsi,odd
	xor rax, rax
	jmp fin 
	
even: 
	mov rsi,even 
	xor rax, rax
	jmp fin
	
fin: 	
	xor rax, rax, 	
	call printf 
	
	mov rsp, rbp 
	pop rbp 
	ret 
