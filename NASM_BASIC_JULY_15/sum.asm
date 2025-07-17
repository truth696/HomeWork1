extern printf
extern scanf

section .data
  text db "Hello Input your first number:",10,0
  text2 db "Please input your second number:" , 10,0
  frmt db "%d" , 0
  finish db "This sum your's numbers %d" , 0

section .bss
  number1 resd 1
  number2 resd 1


section .text

global _main



_main:

        push rbp
        mov rbp, rsp
        mov rdi, text
        xor rax, rax
        call printf

        mov rdi, frmt
        lea rsi, [number1]
        xor rax , rax
        call scanf

        mov rdi, frmt
        lea rsi,  [number2]
        xor rax, rax
        call scanf

        mov rdi, finish
        mov rax,[ number1]
	add rax,[ number2]
	mov rsi, rax
	xor rax , rax
	call printf 
	

        mov rsp, rbp
        pop rbp

  ret
