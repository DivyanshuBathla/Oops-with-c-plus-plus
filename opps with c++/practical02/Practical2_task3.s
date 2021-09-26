	.file	"Practical2_task1.cpp"
	.text
	.section	.rodata
	.type	_ZStL19piecewise_construct, @object
	.size	_ZStL19piecewise_construct, 1
_ZStL19piecewise_construct:
	.zero	1
	.local	_ZStL8__ioinit
	.comm	_ZStL8__ioinit,1,1
.LC0:
	.string	" is not prime"
.LC1:
	.string	" is prime"
	.text
	.globl	_Z5primei
	.type	_Z5primei, @function
_Z5primei:
.LFB1522:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movl	%edi, -20(%rbp)
	movl	$0, -8(%rbp)
	movl	$2, -4(%rbp)
.L4:
	movl	-4(%rbp), %eax
	imull	%eax, %eax
	cmpl	%eax, -20(%rbp)
	jle	.L2
	movl	-20(%rbp), %eax
	cltd
	idivl	-4(%rbp)
	movl	%edx, %eax
	testl	%eax, %eax
	jne	.L3
	addl	$1, -8(%rbp)
.L3:
	addl	$1, -4(%rbp)
	jmp	.L4
.L2:
	cmpl	$0, -8(%rbp)
	je	.L5
	leaq	.LC0(%rip), %rsi
	leaq	_ZSt4cout(%rip), %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	jmp	.L7
.L5:
	leaq	.LC1(%rip), %rsi
	leaq	_ZSt4cout(%rip), %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
.L7:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1522:
	.size	_Z5primei, .-_Z5primei
	.section	.rodata
.LC2:
	.string	"Enter the size of array="
.LC3:
	.string	"\nEnter the "
.LC4:
	.string	" element="
.LC5:
	.string	"\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB1523:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%r15
	pushq	%r14
	pushq	%r13
	pushq	%r12
	pushq	%rbx
	subq	$56, %rsp
	.cfi_offset 15, -24
	.cfi_offset 14, -32
	.cfi_offset 13, -40
	.cfi_offset 12, -48
	.cfi_offset 3, -56
	movq	%fs:40, %rax
	movq	%rax, -56(%rbp)
	xorl	%eax, %eax
	movq	%rsp, %rax
	movq	%rax, %rbx
	leaq	.LC2(%rip), %rsi
	leaq	_ZSt4cout(%rip), %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	leaq	-84(%rbp), %rax
	movq	%rax, %rsi
	leaq	_ZSt3cin(%rip), %rdi
	call	_ZNSirsERi@PLT
	movl	-84(%rbp), %eax
	cltq
	subq	$1, %rax
	movq	%rax, -72(%rbp)
	movq	%rax, %rdx
	addq	$1, %rdx
	movq	%rdx, %r14
	movl	$0, %r15d
	movq	%rax, %rdx
	addq	$1, %rdx
	movq	%rdx, %r12
	movl	$0, %r13d
	addq	$1, %rax
	leaq	0(,%rax,4), %rdx
	movl	$16, %eax
	subq	$1, %rax
	addq	%rdx, %rax
	movl	$16, %ecx
	movl	$0, %edx
	divq	%rcx
	imulq	$16, %rax, %rax
	movq	%rax, %rdx
	andq	$-4096, %rdx
	movq	%rsp, %rcx
	subq	%rdx, %rcx
	movq	%rcx, %rdx
.L9:
	cmpq	%rdx, %rsp
	je	.L10
	subq	$4096, %rsp
	orq	$0, 4088(%rsp)
	jmp	.L9
.L10:
	movq	%rax, %rdx
	andl	$4095, %edx
	subq	%rdx, %rsp
	movq	%rax, %rdx
	andl	$4095, %edx
	testq	%rdx, %rdx
	je	.L11
	andl	$4095, %eax
	subq	$8, %rax
	addq	%rsp, %rax
	orq	$0, (%rax)
.L11:
	movq	%rsp, %rax
	addq	$3, %rax
	shrq	$2, %rax
	salq	$2, %rax
	movq	%rax, -64(%rbp)
	movl	$0, -76(%rbp)
.L13:
	movl	-84(%rbp), %eax
	cmpl	%eax, -76(%rbp)
	jge	.L12
	leaq	.LC3(%rip), %rsi
	leaq	_ZSt4cout(%rip), %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	%rax, %rdx
	movl	-76(%rbp), %eax
	addl	$1, %eax
	movl	%eax, %esi
	movq	%rdx, %rdi
	call	_ZNSolsEi@PLT
	leaq	.LC4(%rip), %rsi
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movl	-76(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-64(%rbp), %rax
	addq	%rdx, %rax
	movq	%rax, %rsi
	leaq	_ZSt3cin(%rip), %rdi
	call	_ZNSirsERi@PLT
	addl	$1, -76(%rbp)
	jmp	.L13
.L12:
	movl	$0, -80(%rbp)
.L15:
	movl	-84(%rbp), %eax
	cmpl	%eax, -80(%rbp)
	jge	.L14
	leaq	.LC5(%rip), %rsi
	leaq	_ZSt4cout(%rip), %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	%rax, %rcx
	movq	-64(%rbp), %rax
	movl	-80(%rbp), %edx
	movslq	%edx, %rdx
	movl	(%rax,%rdx,4), %eax
	movl	%eax, %esi
	movq	%rcx, %rdi
	call	_ZNSolsEi@PLT
	movq	-64(%rbp), %rax
	movl	-80(%rbp), %edx
	movslq	%edx, %rdx
	movl	(%rax,%rdx,4), %eax
	movl	%eax, %edi
	call	_Z5primei
	addl	$1, -80(%rbp)
	jmp	.L15
.L14:
	movq	%rbx, %rsp
	movl	$0, %eax
	movq	-56(%rbp), %rbx
	xorq	%fs:40, %rbx
	je	.L17
	call	__stack_chk_fail@PLT
.L17:
	leaq	-40(%rbp), %rsp
	popq	%rbx
	popq	%r12
	popq	%r13
	popq	%r14
	popq	%r15
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1523:
	.size	main, .-main
	.type	_Z41__static_initialization_and_destruction_0ii, @function
_Z41__static_initialization_and_destruction_0ii:
.LFB2007:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
	cmpl	$1, -4(%rbp)
	jne	.L20
	cmpl	$65535, -8(%rbp)
	jne	.L20
	leaq	_ZStL8__ioinit(%rip), %rdi
	call	_ZNSt8ios_base4InitC1Ev@PLT
	leaq	__dso_handle(%rip), %rdx
	leaq	_ZStL8__ioinit(%rip), %rsi
	movq	_ZNSt8ios_base4InitD1Ev@GOTPCREL(%rip), %rax
	movq	%rax, %rdi
	call	__cxa_atexit@PLT
.L20:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2007:
	.size	_Z41__static_initialization_and_destruction_0ii, .-_Z41__static_initialization_and_destruction_0ii
	.type	_GLOBAL__sub_I__Z5primei, @function
_GLOBAL__sub_I__Z5primei:
.LFB2008:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$65535, %esi
	movl	$1, %edi
	call	_Z41__static_initialization_and_destruction_0ii
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2008:
	.size	_GLOBAL__sub_I__Z5primei, .-_GLOBAL__sub_I__Z5primei
	.section	.init_array,"aw"
	.align 8
	.quad	_GLOBAL__sub_I__Z5primei
	.hidden	__dso_handle
	.ident	"GCC: (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	 1f - 0f
	.long	 4f - 1f
	.long	 5
0:
	.string	 "GNU"
1:
	.align 8
	.long	 0xc0000002
	.long	 3f - 2f
2:
	.long	 0x3
3:
	.align 8
4:
