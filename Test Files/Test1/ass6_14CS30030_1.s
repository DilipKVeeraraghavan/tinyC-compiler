STR1:
.string "Enter a number whose factorial you want to know: "
STR2:
.string "The value is: "
STR3:
.string "\n"
STR4:
.string "Enter a number n whose fibonacci(n) you want to know: "
STR5:
.string "The value is: "
STR6:
.string "\n"

.text
 .globl factorial
 .type factorial, @function
factorial:
pushq	%rbp
movq 	%rsp,%rbp
subq	$64,%rsp
movq $1, -8(%rbp)
movq 16(%rbp), %rax
cmpq -8(%rbp), %rax
jg  .LBNO1
jmp  .LBNO2
.LBNO1:
movq $1, -16(%rbp)
jmp  .LBNO3
.LBNO2:
movq $0, -16(%rbp)
jmp  .LBNO4
jmp  .LBNO4
.LBNO3:
movq $1, -32(%rbp)
movq 16(%rbp), %rax
movq -32(%rbp), %rdx
subq %rdx, %rax
movq %rax, -40(%rbp)
movq -40(%rbp), %rax
movq %rax, -24(%rbp)
movq -24(%rbp), %rax
movq %rax,0(%rsp)
	movq 0(%rsp),%rdi
call factorial
movq %rax, -56(%rbp)
movq -56(%rbp), %rax
movq %rax, -48(%rbp)
movq 16(%rbp), %rax
movq -48(%rbp), %rdx
imulq %rdx, %rax
movq %rax, -64(%rbp)
movq -64(%rbp), %rax
movq %rax, 16(%rbp)
jmp  .LBNO4
.LBNO4:
movq 16(%rbp), %rax
movq %rbp,%rsp
popq %rbp
ret
.globl fibonacci
 .type fibonacci, @function
fibonacci:
pushq	%rbp
movq 	%rsp,%rbp
subq	$128,%rsp
movq $1, -32(%rbp)
movq 16(%rbp), %rax
cmpq -32(%rbp), %rax
je  .LBNO5
jmp  .LBNO6
.LBNO5:
movq $1, -40(%rbp)
jmp  .LBNO7
.LBNO6:
movq $0, -40(%rbp)
jmp  .LBNO8
jmp  .LBNO9
.LBNO7:
movq $1, -48(%rbp)
movq -48(%rbp), %rax
movq %rax, -8(%rbp)
jmp  .LBNO9
.LBNO8:
movq $0, -56(%rbp)
movq 16(%rbp), %rax
cmpq -56(%rbp), %rax
je  .LBNO10
jmp  .LBNO11
.LBNO10:
movq $1, -64(%rbp)
jmp  .LBNO12
.LBNO11:
movq $0, -64(%rbp)
jmp  .LBNO13
jmp  .LBNO14
.LBNO12:
movq $0, -72(%rbp)
movq -72(%rbp), %rax
movq %rax, -8(%rbp)
jmp  .LBNO9
.LBNO13:
movq $1, -80(%rbp)
movq 16(%rbp), %rax
movq -80(%rbp), %rdx
subq %rdx, %rax
movq %rax, -88(%rbp)
movq -88(%rbp), %rax
movq %rax,0(%rsp)
	movq 0(%rsp),%rdi
call fibonacci
movq %rax, -96(%rbp)
movq -96(%rbp), %rax
movq %rax, -16(%rbp)
movq $2, -104(%rbp)
movq 16(%rbp), %rax
movq -104(%rbp), %rdx
subq %rdx, %rax
movq %rax, -112(%rbp)
movq -112(%rbp), %rax
movq %rax,0(%rsp)
	movq 0(%rsp),%rdi
call fibonacci
movq %rax, -120(%rbp)
movq -120(%rbp), %rax
movq %rax, -24(%rbp)
movq -16(%rbp), %rax
movq -24(%rbp), %rdx
addq %rdx, %rax
movq %rax, -128(%rbp)
movq -128(%rbp), %rax
movq %rax, -8(%rbp)
jmp  .LBNO9
.LBNO14:
jmp  .LBNO9
.LBNO9:
movq -8(%rbp), %rax
movq %rbp,%rsp
popq %rbp
ret
.globl main
 .type main, @function
main:
pushq	%rbp
movq 	%rsp,%rbp
subq	$192,%rsp
movq $STR1, -16(%rbp)
movq -16(%rbp), %rax
movq %rax,-8(%rsp)
	movq -8(%rsp),%rdi
call prints
movq %rax, -24(%rbp)
leaq -40(%rbp), %rax
movq %rax, -48(%rbp)
movq -48(%rbp), %rax
movq %rax,-8(%rsp)
	movq -8(%rsp),%rdi
call readi
movq %rax, -56(%rbp)
movq -56(%rbp), %rax
movq %rax, -32(%rbp)
movq -32(%rbp), %rax
movq %rax,0(%rsp)
	movq 0(%rsp),%rdi
call factorial
movq %rax, -72(%rbp)
movq -72(%rbp), %rax
movq %rax, -64(%rbp)
movq $STR2, -80(%rbp)
movq -80(%rbp), %rax
movq %rax,-8(%rsp)
	movq -8(%rsp),%rdi
call prints
movq %rax, -88(%rbp)
movq -64(%rbp), %rax
movq %rax,0(%rsp)
	movq 0(%rsp),%rdi
call printi
movq $STR3, -96(%rbp)
movq -96(%rbp), %rax
movq %rax,-8(%rsp)
	movq -8(%rsp),%rdi
call prints
movq %rax, -104(%rbp)
movq $STR4, -112(%rbp)
movq -112(%rbp), %rax
movq %rax,-8(%rsp)
	movq -8(%rsp),%rdi
call prints
movq %rax, -120(%rbp)
leaq -40(%rbp), %rax
movq %rax, -128(%rbp)
movq -128(%rbp), %rax
movq %rax,-8(%rsp)
	movq -8(%rsp),%rdi
call readi
movq %rax, -136(%rbp)
movq -136(%rbp), %rax
movq %rax, -32(%rbp)
movq $STR5, -152(%rbp)
movq -152(%rbp), %rax
movq %rax,-8(%rsp)
	movq -8(%rsp),%rdi
call prints
movq %rax, -160(%rbp)
movq -32(%rbp), %rax
movq %rax,0(%rsp)
	movq 0(%rsp),%rdi
call fibonacci
movq %rax, -168(%rbp)
movq -168(%rbp), %rax
movq %rax, -144(%rbp)
movq -144(%rbp), %rax
movq %rax,0(%rsp)
	movq 0(%rsp),%rdi
call printi
movq $STR6, -176(%rbp)
movq -176(%rbp), %rax
movq %rax,-8(%rsp)
	movq -8(%rsp),%rdi
call prints
movq %rax, -184(%rbp)
movq $0, -192(%rbp)
movq -192(%rbp), %rax
movq %rbp,%rsp
popq %rbp
ret
