section .data

msg			db		"Greetings, human!", 0xa
msglen		equ		$-msg 		            ; string length in bytes
STDOUT		equ		1						; standard output device
SYS_write	equ		1						; write message
SYS_exit	equ		60						; exit program
EXIT_OK		equ		0						; return value

section .text
global _start
_start:

			mov		rax, SYS_write			; rax holds the function
			mov		rdi, STDOUT				; output device
			mov		rsi, msg				; text address
			mov		rdx, msglen				; string length
			syscall							; system interrupt
;exit
			mov		rax,SYS_exit			; exit function
			mov		rdi,EXIT_OK				; exit return value
			syscall							; system interrupt
;done
