	.file	"3-5.c"
	.text
	.globl	decode1
	.type	decode1, @function
decode1:
.LFB23:
	.cfi_startproc
	movq	(%rdx), %rax
	movslq	(%rdi), %rcx
	movq	%rcx, (%rsi)
	cltq
	movq	%rax, (%rdx)
	movq	%rax, (%rdi)
	ret
	.cfi_endproc
.LFE23:
	.size	decode1, .-decode1
	.ident	"GCC: (Ubuntu 7.3.0-27ubuntu1~18.04) 7.3.0"
	.section	.note.GNU-stack,"",@progbits
