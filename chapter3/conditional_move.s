	.file	"conditional_move.c"
	.text
	.globl	cmovdiff
	.type	cmovdiff, @function
cmovdiff:
.LFB0:
	.cfi_startproc
	cmpl	%edi, %esi
	movl	%edi, %eax
	cmovge	%esi, %eax
	ret
	.cfi_endproc
.LFE0:
	.size	cmovdiff, .-cmovdiff
	.globl	cread
	.type	cread, @function
cread:
.LFB1:
	.cfi_startproc
	testq	%rdi, %rdi
	je	.L4
	movl	(%rdi), %eax
	ret
.L4:
	movl	$0, %eax
	ret
	.cfi_endproc
.LFE1:
	.size	cread, .-cread
	.ident	"GCC: (Ubuntu 7.3.0-27ubuntu1~18.04) 7.3.0"
	.section	.note.GNU-stack,"",@progbits
