extern printf
extern scanf 
	
	
	
	
section .data 	
	text1 db "Input pls first num",10,0
	text2 db "Input pls second num",10,0
	text3 db "Input pls action 1 = +, 2 = -, 3 = /, 4 = *",10,0
	text4 db "Your res: %d", 0
	char db  "_%c",0
	frmt db "%d",0
	
section .bss
	num1 resd 1
	num2 resd 1
	act resd 1


section .text 

	global main
	

main:
	
	push rbp
	mov rbp,rsp 	
	
	mov rdi, text1
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
	xor rax, rax 
	call printf
	
	mov rdi, frmt
	lea rsi, [act]
	xor rax, rax
	call scanf 
	
	movsx r8, dword[num1]
	movsx r9, dword[num2]
	movsx r10, dword[act]
	cmp r10, 1
	je add 
	
	cmp r10, 2
	je sub
	
	
	cmp r10, 3
	je div 
	
	cmp r10, 4
	je imul 
	
add: 
	add r8, r9
	mov rsi,r8 
	xor rax, rax 
	jmp fin 
sub:
	sub r8, r9
	mov rsi, r8 
	xor rax, rax
	jmp fin
div:
	xor rdx, rdx 
	mov rax,r8 
	mov rcx,r9 
	div rcx
	mov r8, rax

	jmp fin
imul:
	imul r8,r9 
	mov rsi, r8 
	xor rax, rax
	jmp fin 
	
fin: 
	mov rdi, text4
	mov rsi, r8
	xor rax,rax
	call printf 

	mov rsp,rbp 	
	pop rbp 
	ret	
