extern printf 

section .data 
	msg db "Hello World!",10 ,0 


section .bss 


section .text 
 global main 


 main: 
	push rbp
	mov rbp,rsp 

	mov rdi, msg 
	xor rax, rax 
	call printf 

	mov rsp, rbp 
	pop rbp
	ret
