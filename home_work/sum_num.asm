etextern printf
extern scanf

section .data
    numsc db "%d",0
    print db "%d",10,0

section .bss
    num resd 1
    num2 resd 1

section .text
global main:

main:
    push ebp
    mov ebp, esp

    
   
    

	push num
	push numsc
	call scanf
	add esp, 8 
	
	
	push num2 
	push numsc
	call scanf
	add esp, 8 


	mov eax, num 
	add eax, num2 
	
	push eax 
	push print 
	call printf
	add esp, 8 
	
    
  

    mov esp, ebp
    pop ebp
    ret


