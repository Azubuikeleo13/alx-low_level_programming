extern printf

global _start

section .text:

_start

	mov	edi, message
	xor	eax, eax
	call	printf
	mov	eax, 0
	ret

section .data:
	message: db "Hello, Holberton", 0xA, 0x0
	message_len equ $-message
