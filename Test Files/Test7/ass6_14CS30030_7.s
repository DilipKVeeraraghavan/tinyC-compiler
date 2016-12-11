
.text
 .globl findmax
 .type findmax, @function
findmax:
pushq	%rbp
movq 	%rsp,%rbp
subq	$32,%rsp
movq 16(%rbp), %rax
movq %rax, -8(%rbp)
movq 24(%rbp), %rax
cmpq 16(%rbp), %rax
jg  .LBNO1
jmp  .LBNO2
.LBNO1:
movq $1, -16(%rbp)
jmp  .LBNO3
.LBNO2:
movq $0, -16(%rbp)
jmp  .LBNO4
jmp  .LBNO5
.LBNO3:
movq 24(%rbp), %rax
cmpq 32(%rbp), %rax
jg  .LBNO6
jmp  .LBNO7
.LBNO6:
movq $1, -24(%rbp)
jmp  .LBNO8
.LBNO7:
movq $0, -24(%rbp)
jmp  .LBNO9
jmp  .LBNO10
.LBNO8:
movq 24(%rbp), %rax
movq %rax, -8(%rbp)
jmp  .LBNO5
.LBNO9:
movq 32(%rbp), %rax
movq %rax, -8(%rbp)
jmp  .LBNO5
.LBNO10:
jmp  .LBNO5
.LBNO4:
movq 32(%rbp), %rax
cmpq 16(%rbp), %rax
jg  .LBNO11
jmp  .LBNO12
.LBNO11:
movq $1, -32(%rbp)
jmp  .LBNO13
.LBNO12:
movq $0, -32(%rbp)
jmp  .LBNO5
jmp  .LBNO14
.LBNO13:
movq 32(%rbp), %rax
movq %rax, -8(%rbp)
jmp  .LBNO5
.LBNO14:
jmp  .LBNO5
.LBNO5:
movq -8(%rbp), %rax
movq %rbp,%rsp
popq %rbp
ret
.globl main
 .type main, @function
main:
pushq	%rbp
movq 	%rsp,%rbp
subq	$96,%rsp
movq -40(%rbp), %rax
movq %rax, -16(%rbp)
movq -40(%rbp), %rax
movq %rax, -24(%rbp)
movq -40(%rbp), %rax
movq %rax, -32(%rbp)
movq -16(%rbp), %rax
movq %rax,0(%rsp)
	movq 0(%rsp),%rdi
movq -24(%rbp), %rax
movq %rax,0(%rsp)
	movq 0(%rsp),%rdi
movq -32(%rbp), %rax
movq %rax,0(%rsp)
	movq 0(%rsp),%rdi
call findmax
movq %rax, -56(%rbp)
movq -56(%rbp), %rax
movq %rax, -48(%rbp)
movq -24(%rbp), %rax
movq -32(%rbp), %rdx
imulq %rdx, %rax
movq %rax, -64(%rbp)
movq -64(%rbp), %rax
movq -16(%rbp), %rdx
imulq %rdx, %rax
movq %rax, -72(%rbp)
movq -72(%rbp), %rax
movq %rax, -16(%rbp)
movq -16(%rbp), %rax
cltd
idivq -32(%rbp)
movq %rax, -80(%rbp)
movq -80(%rbp), %rax
movq %rax, -24(%rbp)
movq -16(%rbp), %rax
cltd
idivq -24(%rbp)
movq %rdx, -88(%rbp)
movq -88(%rbp), %rax
movq %rax, -32(%rbp)
movq $0, -96(%rbp)
movq -96(%rbp), %rax
movq %rbp,%rsp
popq %rbp
ret
