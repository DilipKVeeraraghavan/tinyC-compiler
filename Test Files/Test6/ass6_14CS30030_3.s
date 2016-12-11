STR1:
.string "Enter three numbers whose maximum among them you want to know\n"
STR2:
.string "Enter the first number: "
STR3:
.string "Enter the second number: "
STR4:
.string "Enter the third number: "
STR5:
.string "The max value is: "
STR6:
.string "\n"
STR7:
.string "Lets do expression tests:\n"
STR8:
.string "a = b*c*a = "
STR9:
.string "\n"
STR10:
.string "b = a/c = "
STR11:
.string "\n"
STR12:
.string "c = a%b = "
STR13:
.string "\n"

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
subq	$352,%rsp
movq $STR1, -16(%rbp)
movq -16(%rbp), %rax
movq %rax,-8(%rsp)
	movq -8(%rsp),%rdi
call prints
movq %rax, -24(%rbp)
movq $STR2, -64(%rbp)
movq -64(%rbp), %rax
movq %rax,-8(%rsp)
	movq -8(%rsp),%rdi
call prints
movq %rax, -72(%rbp)
leaq -56(%rbp), %rax
movq %rax, -80(%rbp)
movq -80(%rbp), %rax
movq %rax,-8(%rsp)
	movq -8(%rsp),%rdi
call readi
movq %rax, -88(%rbp)
movq -88(%rbp), %rax
movq %rax, -32(%rbp)
movq $STR3, -96(%rbp)
movq -96(%rbp), %rax
movq %rax,-8(%rsp)
	movq -8(%rsp),%rdi
call prints
movq %rax, -104(%rbp)
leaq -56(%rbp), %rax
movq %rax, -112(%rbp)
movq -112(%rbp), %rax
movq %rax,-8(%rsp)
	movq -8(%rsp),%rdi
call readi
movq %rax, -120(%rbp)
movq -120(%rbp), %rax
movq %rax, -40(%rbp)
movq $STR4, -128(%rbp)
movq -128(%rbp), %rax
movq %rax,-8(%rsp)
	movq -8(%rsp),%rdi
call prints
movq %rax, -136(%rbp)
leaq -56(%rbp), %rax
movq %rax, -144(%rbp)
movq -144(%rbp), %rax
movq %rax,-8(%rsp)
	movq -8(%rsp),%rdi
call readi
movq %rax, -152(%rbp)
movq -152(%rbp), %rax
movq %rax, -48(%rbp)
movq -32(%rbp), %rax
movq %rax,0(%rsp)
	movq 0(%rsp),%rdi
movq -40(%rbp), %rax
movq %rax,0(%rsp)
	movq 0(%rsp),%rdi
movq -48(%rbp), %rax
movq %rax,0(%rsp)
	movq 0(%rsp),%rdi
call findmax
movq %rax, -168(%rbp)
movq -168(%rbp), %rax
movq %rax, -160(%rbp)
movq $STR5, -176(%rbp)
movq -176(%rbp), %rax
movq %rax,-8(%rsp)
	movq -8(%rsp),%rdi
call prints
movq %rax, -184(%rbp)
movq -160(%rbp), %rax
movq %rax,0(%rsp)
	movq 0(%rsp),%rdi
call printi
movq $STR6, -192(%rbp)
movq -192(%rbp), %rax
movq %rax,-8(%rsp)
	movq -8(%rsp),%rdi
call prints
movq %rax, -200(%rbp)
movq $STR7, -208(%rbp)
movq -208(%rbp), %rax
movq %rax,-8(%rsp)
	movq -8(%rsp),%rdi
call prints
movq %rax, -216(%rbp)
movq $STR8, -224(%rbp)
movq -224(%rbp), %rax
movq %rax,-8(%rsp)
	movq -8(%rsp),%rdi
call prints
movq %rax, -232(%rbp)
movq -40(%rbp), %rax
movq -48(%rbp), %rdx
imulq %rdx, %rax
movq %rax, -240(%rbp)
movq -240(%rbp), %rax
movq -32(%rbp), %rdx
imulq %rdx, %rax
movq %rax, -248(%rbp)
movq -248(%rbp), %rax
movq %rax, -32(%rbp)
movq -32(%rbp), %rax
movq %rax,0(%rsp)
	movq 0(%rsp),%rdi
call printi
movq $STR9, -256(%rbp)
movq -256(%rbp), %rax
movq %rax,-8(%rsp)
	movq -8(%rsp),%rdi
call prints
movq %rax, -264(%rbp)
movq $STR10, -272(%rbp)
movq -272(%rbp), %rax
movq %rax,-8(%rsp)
	movq -8(%rsp),%rdi
call prints
movq %rax, -280(%rbp)
movq -32(%rbp), %rax
cltd
idivq -48(%rbp)
movq %rax, -288(%rbp)
movq -288(%rbp), %rax
movq %rax, -40(%rbp)
movq -40(%rbp), %rax
movq %rax,0(%rsp)
	movq 0(%rsp),%rdi
call printi
movq $STR11, -296(%rbp)
movq -296(%rbp), %rax
movq %rax,-8(%rsp)
	movq -8(%rsp),%rdi
call prints
movq %rax, -304(%rbp)
movq $STR12, -312(%rbp)
movq -312(%rbp), %rax
movq %rax,-8(%rsp)
	movq -8(%rsp),%rdi
call prints
movq %rax, -320(%rbp)
movq -32(%rbp), %rax
cltd
idivq -40(%rbp)
movq %rdx, -328(%rbp)
movq -328(%rbp), %rax
movq %rax, -48(%rbp)
movq -48(%rbp), %rax
movq %rax,0(%rsp)
	movq 0(%rsp),%rdi
call printi
movq $STR13, -336(%rbp)
movq -336(%rbp), %rax
movq %rax,-8(%rsp)
	movq -8(%rsp),%rdi
call prints
movq %rax, -344(%rbp)
movq $0, -352(%rbp)
movq -352(%rbp), %rax
movq %rbp,%rsp
popq %rbp
ret
