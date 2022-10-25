Section .text

 global _start

_start:
  mov edx,len
  mov ecx,msg
  mov ebx,1
  mov eax,4
  int 0x80

  mov eax, 1
  int 0x080

section .data
  msg: db "Hello, Holberton"
  msglen: equ $ - msg
