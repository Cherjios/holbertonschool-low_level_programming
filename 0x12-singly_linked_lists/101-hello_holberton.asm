section .data

	msg db 10d,13d, "Hello, Holberton"
	1 equ $-msg
section .text
	global _start
_start:
	mov rax, 1
	mov rdi, 1
	mov rsi, message
	mov rdx, 1
	syscall

	mov rax, 60
	mov rdi, 0
	syscall
end:

