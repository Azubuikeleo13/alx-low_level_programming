global _start

section .text:

_start
	mov eax, 0x4
	mov ebx, 1
	mov ecx, message
	mov edx, message_len

	mov eax, 0x1
	mov ebx, 0

section .data:
	message: db "Hello, Holberton", 0xA
	message_len equ $-message
