; hello.asm
section .data
	msg db "hello world"
section .bbs
section .text
	global main
main:
	mov eax, 1
	mov edi, 1
	mov esi, msg
	mov edx, 12
	syscall
	mov eax, 60 
	mov edi, 0 
	syscall

