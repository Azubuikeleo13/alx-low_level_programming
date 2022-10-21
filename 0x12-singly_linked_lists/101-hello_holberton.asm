
global _start

section .text:

_start
	mov eax, 0x4
	mov ebx, 1
	mov ecx, message
	mov edx, 16

	mov eax, 0x1
	mov ebx, 0

section .data:
        message: db "Hello, Holberton", 0xA
