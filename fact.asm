extern printf 
extern scanf
	
	
section .data 
	text1 db "Please input your number for factorial: ",10,0
	text2 db "Your factoiral : %d",0
	frmt db "%d" , 0


section .bss 
	num resd 1

section .data
	global main
main:

	push rbp 
	mov rbp, rsp
		
	mov rdi, text1 
	xor rax,rax
	call printf 
		
	

	mov rdi, frmt
	lea rsi, [num]
	xor rax, rax
	call scanf 
	
	mov rcx, [num]
	loop start
	

start: 
	inc rdi
	imul rdi,rdi
	add rsi,rdi
	jmp fin
	
fin: 
	xor rdi,rdi 
	mov rdi, text2
	add rsi, 0
	xor rax,rax	
	call printf 
	
