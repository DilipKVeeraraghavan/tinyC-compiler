STR1:
.string "\nEnter 1 to add \n 2 to subtract\n 3 to multiply \n 4 to divide \n 5 for modulo \n 6 for exit\n"
STR2:
.string "The value of Computation is : "
STR3:
.string "Enter the element a: "
STR4:
.string "Enter the element b: "
STR5:
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
.globl sub
 .type sub, @function
sub:
pushq	%rbp
movq 	%rsp,%rbp
subq	$16,%rsp
movq 16(%rbp), %rax
movq 24(%rbp), %rdx
subq %rdx, %rax
movq %rax, -16(%rbp)
movq -16(%rbp), %rax
movq %rax, -8(%rbp)
movq -8(%rbp), %rax
movq %rbp,%rsp
popq %rbp
ret
.globl mult
 .type mult, @function
mult:
pushq	%rbp
movq 	%rsp,%rbp
subq	$16,%rsp
movq 16(%rbp), %rax
movq 24(%rbp), %rdx
imulq %rdx, %rax
movq %rax, -16(%rbp)
movq -16(%rbp), %rax
movq %rax, -8(%rbp)
movq -8(%rbp), %rax
movq %rbp,%rsp
popq %rbp
ret
.globl div
 .type div, @function
div:
pushq	%rbp
movq 	%rsp,%rbp
subq	$16,%rsp
movq 16(%rbp), %rax
cltd
idivq 24(%rbp)
movq %rax, -16(%rbp)
movq -16(%rbp), %rax
movq %rax, -8(%rbp)
movq -8(%rbp), %rax
movq %rbp,%rsp
popq %rbp
ret
.globl mod
 .type mod, @function
mod:
pushq	%rbp
movq 	%rsp,%rbp
subq	$16,%rsp
movq 16(%rbp), %rax
cltd
idivq 24(%rbp)
movq %rdx, -16(%rbp)
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
subq	$424,%rsp
movq $STR1, -64(%rbp)
movq -64(%rbp), %rax
movq %rax, -56(%rbp)
movq $STR2, -80(%rbp)
movq -80(%rbp), %rax
movq %rax, -72(%rbp)
movq $STR3, -96(%rbp)
movq -96(%rbp), %rax
movq %rax, -88(%rbp)
movq $STR4, -112(%rbp)
movq -112(%rbp), %rax
movq %rax, -104(%rbp)
movq $STR5, -128(%rbp)
movq -128(%rbp), %rax
movq %rax, -120(%rbp)
movq -56(%rbp), %rax
movq %rax,-8(%rsp)
	movq -8(%rsp),%rdi
call prints
movq %rax, -136(%rbp)
leaq -48(%rbp), %rax
movq %rax, -144(%rbp)
movq -144(%rbp), %rax
movq %rax,-8(%rsp)
	movq -8(%rsp),%rdi
call readi
movq %rax, -152(%rbp)
movq -152(%rbp), %rax
movq %rax, -16(%rbp)
.LBNO32:
movq $1, -160(%rbp)
movq -16(%rbp), %rax
cmpq -160(%rbp), %rax
jge  .LBNO1
jmp  .LBNO2
.LBNO1:
movq $1, -168(%rbp)
jmp  .LBNO3
.LBNO2:
movq $0, -168(%rbp)
jmp  .LBNO4
.LBNO3:
movq $5, -176(%rbp)
movq -16(%rbp), %rax
cmpq -176(%rbp), %rax
jle  .LBNO5
jmp  .LBNO6
.LBNO5:
movq $1, -184(%rbp)
jmp  .LBNO7
.LBNO6:
movq $0, -184(%rbp)
jmp  .LBNO4
jmp  .LBNO4
.LBNO7:
movq -88(%rbp), %rax
movq %rax,-8(%rsp)
	movq -8(%rsp),%rdi
call prints
movq %rax, -200(%rbp)
leaq -48(%rbp), %rax
movq %rax, -208(%rbp)
movq -208(%rbp), %rax
movq %rax,-8(%rsp)
	movq -8(%rsp),%rdi
call readi
movq %rax, -216(%rbp)
movq -216(%rbp), %rax
movq %rax, -24(%rbp)
movq -104(%rbp), %rax
movq %rax,-8(%rsp)
	movq -8(%rsp),%rdi
call prints
movq %rax, -224(%rbp)
leaq -48(%rbp), %rax
movq %rax, -232(%rbp)
movq -232(%rbp), %rax
movq %rax,-8(%rsp)
	movq -8(%rsp),%rdi
call readi
movq %rax, -240(%rbp)
movq -240(%rbp), %rax
movq %rax, -32(%rbp)
movq $1, -248(%rbp)
movq -16(%rbp), %rax
cmpq -248(%rbp), %rax
je  .LBNO8
jmp  .LBNO9
.LBNO8:
movq $1, -256(%rbp)
jmp  .LBNO10
.LBNO9:
movq $0, -256(%rbp)
jmp  .LBNO11
jmp  .LBNO12
.LBNO10:
movq -24(%rbp), %rax
movq %rax,0(%rsp)
	movq 0(%rsp),%rdi
movq -32(%rbp), %rax
movq %rax,0(%rsp)
	movq 0(%rsp),%rdi
call add
movq %rax, -264(%rbp)
movq -264(%rbp), %rax
movq %rax, -40(%rbp)
jmp  .LBNO12
.LBNO11:
movq $2, -272(%rbp)
movq -16(%rbp), %rax
cmpq -272(%rbp), %rax
je  .LBNO13
jmp  .LBNO14
.LBNO13:
movq $1, -280(%rbp)
jmp  .LBNO15
.LBNO14:
movq $0, -280(%rbp)
jmp  .LBNO16
jmp  .LBNO17
.LBNO15:
movq -24(%rbp), %rax
movq %rax,0(%rsp)
	movq 0(%rsp),%rdi
movq -32(%rbp), %rax
movq %rax,0(%rsp)
	movq 0(%rsp),%rdi
call sub
movq %rax, -288(%rbp)
movq -288(%rbp), %rax
movq %rax, -40(%rbp)
jmp  .LBNO12
.LBNO16:
movq $3, -296(%rbp)
movq -16(%rbp), %rax
cmpq -296(%rbp), %rax
je  .LBNO18
jmp  .LBNO19
.LBNO18:
movq $1, -304(%rbp)
jmp  .LBNO20
.LBNO19:
movq $0, -304(%rbp)
jmp  .LBNO21
jmp  .LBNO22
.LBNO20:
movq -24(%rbp), %rax
movq %rax,0(%rsp)
	movq 0(%rsp),%rdi
movq -32(%rbp), %rax
movq %rax,0(%rsp)
	movq 0(%rsp),%rdi
call mult
movq %rax, -312(%rbp)
movq -312(%rbp), %rax
movq %rax, -40(%rbp)
jmp  .LBNO12
.LBNO21:
movq $4, -320(%rbp)
movq -16(%rbp), %rax
cmpq -320(%rbp), %rax
je  .LBNO23
jmp  .LBNO24
.LBNO23:
movq $1, -328(%rbp)
jmp  .LBNO25
.LBNO24:
movq $0, -328(%rbp)
jmp  .LBNO26
jmp  .LBNO27
.LBNO25:
movq -24(%rbp), %rax
movq %rax,0(%rsp)
	movq 0(%rsp),%rdi
movq -32(%rbp), %rax
movq %rax,0(%rsp)
	movq 0(%rsp),%rdi
call div
movq %rax, -336(%rbp)
movq -336(%rbp), %rax
movq %rax, -40(%rbp)
jmp  .LBNO12
.LBNO26:
movq $5, -344(%rbp)
movq -16(%rbp), %rax
cmpq -344(%rbp), %rax
je  .LBNO28
jmp  .LBNO29
.LBNO28:
movq $1, -352(%rbp)
jmp  .LBNO30
.LBNO29:
movq $0, -352(%rbp)
jmp  .LBNO12
jmp  .LBNO31
.LBNO30:
movq -24(%rbp), %rax
movq %rax,0(%rsp)
	movq 0(%rsp),%rdi
movq -32(%rbp), %rax
movq %rax,0(%rsp)
	movq 0(%rsp),%rdi
call mod
movq %rax, -360(%rbp)
movq -360(%rbp), %rax
movq %rax, -40(%rbp)
jmp  .LBNO12
.LBNO31:
jmp  .LBNO12
.LBNO27:
jmp  .LBNO12
.LBNO22:
jmp  .LBNO12
.LBNO17:
jmp  .LBNO12
.LBNO12:
movq -120(%rbp), %rax
movq %rax,-8(%rsp)
	movq -8(%rsp),%rdi
call prints
movq %rax, -368(%rbp)
movq -72(%rbp), %rax
movq %rax,-8(%rsp)
	movq -8(%rsp),%rdi
call prints
movq %rax, -376(%rbp)
movq -40(%rbp), %rax
movq %rax,0(%rsp)
	movq 0(%rsp),%rdi
call printi
movq -120(%rbp), %rax
movq %rax,-8(%rsp)
	movq -8(%rsp),%rdi
call prints
movq %rax, -384(%rbp)
movq -120(%rbp), %rax
movq %rax,-8(%rsp)
	movq -8(%rsp),%rdi
call prints
movq %rax, -392(%rbp)
movq -56(%rbp), %rax
movq %rax,-8(%rsp)
	movq -8(%rsp),%rdi
call prints
movq %rax, -400(%rbp)
leaq -48(%rbp), %rax
movq %rax, -408(%rbp)
movq -408(%rbp), %rax
movq %rax,-8(%rsp)
	movq -8(%rsp),%rdi
call readi
movq %rax, -416(%rbp)
movq -416(%rbp), %rax
movq %rax, -16(%rbp)
jmp  .LBNO32
.LBNO4:
movq $0, -424(%rbp)
movq -424(%rbp), %rax
movq %rbp,%rsp
popq %rbp
ret
