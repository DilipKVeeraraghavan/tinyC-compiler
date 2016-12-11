STR1:
.string "\n"
STR2:
.string "\n----------Here we test GCD :---------"
STR3:
.string "\nEnter 2 numbers for finding their gcd recursively"
STR4:
.string "\nThe gcd of the 2 numbers you entered is :"
STR5:
.string "\n"

.text
 .globl gcd
 .type gcd, @function
gcd:
pushq	%rbp
movq 	%rsp,%rbp
subq	$144,%rsp
movq $10000, -16(%rbp)
movq 16(%rbp), %rax
cltd
idivq -16(%rbp)
movq %rax, -24(%rbp)
movq -24(%rbp), %rax
movq %rax, -8(%rbp)
movq $10000, -40(%rbp)
movq 16(%rbp), %rax
cltd
idivq -40(%rbp)
movq %rdx, -48(%rbp)
movq -48(%rbp), %rax
movq %rax, -32(%rbp)
movq -8(%rbp), %rax
cmpq -32(%rbp), %rax
je  .LBNO1
jmp  .LBNO2
.LBNO1:
movq $1, -88(%rbp)
jmp  .LBNO3
.LBNO2:
movq $0, -88(%rbp)
jmp  .LBNO4
jmp  .LBNO5
.LBNO3:
movq -8(%rbp), %rax
movq %rbp,%rsp
popq %rbp
ret
jmp  .LBNO6
.LBNO4:
movq -8(%rbp), %rax
cmpq -32(%rbp), %rax
jg  .LBNO7
jmp  .LBNO8
.LBNO7:
movq $1, -96(%rbp)
jmp  .LBNO9
.LBNO8:
movq $0, -96(%rbp)
jmp  .LBNO10
jmp  .LBNO11
.LBNO9:
movq -8(%rbp), %rax
movq -32(%rbp), %rdx
subq %rdx, %rax
movq %rax, -104(%rbp)
movq -104(%rbp), %rax
movq %rax, -56(%rbp)
movq -32(%rbp), %rax
movq %rax, -64(%rbp)
jmp  .LBNO11
.LBNO10:
movq -32(%rbp), %rax
movq -8(%rbp), %rdx
subq %rdx, %rax
movq %rax, -112(%rbp)
movq -112(%rbp), %rax
movq %rax, -56(%rbp)
movq -8(%rbp), %rax
movq %rax, -64(%rbp)
jmp  .LBNO11
.LBNO11:
movq $10000, -120(%rbp)
movq -56(%rbp), %rax
movq -120(%rbp), %rdx
imulq %rdx, %rax
movq %rax, -128(%rbp)
movq -128(%rbp), %rax
movq -64(%rbp), %rdx
addq %rdx, %rax
movq %rax, -136(%rbp)
movq -136(%rbp), %rax
movq %rax, -80(%rbp)
movq -80(%rbp), %rax
movq %rax,0(%rsp)
	movq 0(%rsp),%rdi
call gcd
movq %rax, -144(%rbp)
movq -144(%rbp), %rax
movq %rax, -72(%rbp)
movq -72(%rbp), %rax
movq %rbp,%rsp
popq %rbp
ret
jmp  .LBNO6
.LBNO5:
.globl main
 .type main, @function
main:
pushq	%rbp
movq 	%rsp,%rbp
subq	$200,%rsp
leaq -32(%rbp), %rax
movq %rax, -64(%rbp)
movq -64(%rbp), %rax
movq %rax, -48(%rbp)
movq $STR1, -72(%rbp)
movq -72(%rbp), %rax
movq %rax,-8(%rsp)
	movq -8(%rsp),%rdi
call prints
movq %rax, -80(%rbp)
movq $STR2, -88(%rbp)
movq -88(%rbp), %rax
movq %rax,-8(%rsp)
	movq -8(%rsp),%rdi
call prints
movq %rax, -96(%rbp)
movq $STR3, -104(%rbp)
movq -104(%rbp), %rax
movq %rax,-8(%rsp)
	movq -8(%rsp),%rdi
call prints
movq %rax, -112(%rbp)
movq -48(%rbp), %rax
movq %rax,-8(%rsp)
	movq -8(%rsp),%rdi
call readi
movq %rax, -120(%rbp)
movq -120(%rbp), %rax
movq %rax, -16(%rbp)
movq -48(%rbp), %rax
movq %rax,-8(%rsp)
	movq -8(%rsp),%rdi
call readi
movq %rax, -128(%rbp)
movq -128(%rbp), %rax
movq %rax, -24(%rbp)
movq $10000, -136(%rbp)
movq -16(%rbp), %rax
movq -136(%rbp), %rdx
imulq %rdx, %rax
movq %rax, -144(%rbp)
movq -144(%rbp), %rax
movq -24(%rbp), %rdx
addq %rdx, %rax
movq %rax, -152(%rbp)
movq -152(%rbp), %rax
movq %rax, -56(%rbp)
movq -56(%rbp), %rax
movq %rax,0(%rsp)
	movq 0(%rsp),%rdi
call gcd
movq %rax, -160(%rbp)
movq -160(%rbp), %rax
movq %rax, -40(%rbp)
movq $STR4, -168(%rbp)
movq -168(%rbp), %rax
movq %rax,-8(%rsp)
	movq -8(%rsp),%rdi
call prints
movq %rax, -176(%rbp)
movq -40(%rbp), %rax
movq %rax,0(%rsp)
	movq 0(%rsp),%rdi
call printi
movq $STR5, -184(%rbp)
movq -184(%rbp), %rax
movq %rax,-8(%rsp)
	movq -8(%rsp),%rdi
call prints
movq %rax, -192(%rbp)
movq $0, -200(%rbp)
movq -200(%rbp), %rax
movq %rbp,%rsp
popq %rbp
ret
.LBNO6:
