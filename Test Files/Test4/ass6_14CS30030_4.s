STR1:
.string "Enter number of elements\n"
STR2:
.string "Enter the elements: "
STR3:
.string "The sum of array is: "
STR4:
.string "\n"

.text
 .globl add
 .type add, @function
add:
pushq	%rbp
movq 	%rsp,%rbp
subq	$16,%rsp
movq 16(%rbp), %rax
movq 24(%rbp), %rdx
addq %rdx, %rax
movq %rax, -16(%rbp)
movq -16(%rbp), %rax
movq %rax, -8(%rbp)
movq -8(%rbp), %rax
movq %rbp,%rsp
popq %rbp
ret
.globl main
 .type main, @function
main:
pushq	%rbp
movq 	%rsp,%rbp
subq	$240,%rsp
movq $STR1, -72(%rbp)
movq -72(%rbp), %rax
movq %rax, -64(%rbp)
movq $STR2, -88(%rbp)
movq -88(%rbp), %rax
movq %rax, -80(%rbp)
movq $STR3, -104(%rbp)
movq -104(%rbp), %rax
movq %rax, -96(%rbp)
movq $STR4, -120(%rbp)
movq -120(%rbp), %rax
movq %rax, -112(%rbp)
movq -64(%rbp), %rax
movq %rax,-8(%rsp)
	movq -8(%rsp),%rdi
call prints
movq %rax, -128(%rbp)
leaq -136(%rbp), %rax
movq %rax, -144(%rbp)
movq -144(%rbp), %rax
movq %rax,-8(%rsp)
	movq -8(%rsp),%rdi
call readi
movq %rax, -152(%rbp)
movq -152(%rbp), %rax
movq %rax, -24(%rbp)
movq $0, -160(%rbp)
movq -160(%rbp), %rax
movq %rax, -48(%rbp)
movq $0, -168(%rbp)
movq -168(%rbp), %rax
movq %rax, -32(%rbp)
.LBNO5:
movq -32(%rbp), %rax
cmpq -24(%rbp), %rax
jl  .LBNO1
jmp  .LBNO2
.LBNO1:
movq $1, -176(%rbp)
jmp  .LBNO3
.LBNO2:
movq $0, -176(%rbp)
jmp  .LBNO4
jmp  .LBNO4
.LBNO6:
movq -32(%rbp), %rax
movq %rax, -184(%rbp)
movq -32(%rbp), %rax
addq $1, %rax
movq %rax, -32(%rbp)
jmp  .LBNO5
.LBNO3:
movq -80(%rbp), %rax
movq %rax,-8(%rsp)
	movq -8(%rsp),%rdi
call prints
movq %rax, -192(%rbp)
leaq -136(%rbp), %rax
movq %rax, -200(%rbp)
movq -200(%rbp), %rax
movq %rax,-8(%rsp)
	movq -8(%rsp),%rdi
call readi
movq %rax, -208(%rbp)
movq -208(%rbp), %rax
movq %rax, -56(%rbp)
movq -48(%rbp), %rax
movq -56(%rbp), %rdx
addq %rdx, %rax
movq %rax, -216(%rbp)
movq -216(%rbp), %rax
movq %rax, -48(%rbp)
jmp  .LBNO6
.LBNO4:
movq -96(%rbp), %rax
movq %rax,-8(%rsp)
	movq -8(%rsp),%rdi
call prints
movq %rax, -224(%rbp)
movq -48(%rbp), %rax
movq %rax,0(%rsp)
	movq 0(%rsp),%rdi
call printi
movq -112(%rbp), %rax
movq %rax,-8(%rsp)
	movq -8(%rsp),%rdi
call prints
movq %rax, -232(%rbp)
movq $0, -240(%rbp)
movq -240(%rbp), %rax
movq %rbp,%rsp
popq %rbp
ret
