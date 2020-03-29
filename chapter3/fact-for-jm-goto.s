	.file	"fact-for-jm-goto.c"
	.text
	.globl	fact_for_jm_goto
	.type	fact_for_jm_goto, @function
fact_for_jm_goto:
.LFB0:
	.cfi_startproc
	movl	$1, %eax
	movl	$2, %edx
	jmp	.L2
.L3:
	imulq	%rdx, %rax
	addq	$1, %rdx
.L2:
	cmpq	%rdi, %rdx
	jle	.L3
	rep ret
	.cfi_endproc
.LFE0:
	.size	fact_for_jm_goto, .-fact_for_jm_goto
	.ident	"GCC: (Ubuntu 7.3.0-27ubuntu1~18.04) 7.3.0"
	.section	.note.GNU-stack,"",@progbits
