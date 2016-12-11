STR1:
.string "suma = "
STR2:
.string "sumb = "
STR3:
.string " "
STR4:
.string "Enter the element a: "
STR5:
.string "\n"
STR6:
.string "Enter the element b: "

.text
 .globl multiply
 .type multiply, @function
multiply:
pushq	%rbp
movq 	%rsp,%rbp
subq	$16,%rsp
movq $2, -8(%rbp)
movq 16(%rbp), %rax
movq -8(%rbp), %rdx
imulq %rdx, %rax
movq %rax, -16(%rbp)
movq -16(%rbp), %rax
movq %rax, 16(%rbp)
movq 16(%rbp), %rax
movq %rbp,%rsp
popq %rbp
ret
.globl main
 .type main, @function
main:
pushq	%rbp
movq 	%rsp,%rbp
subq	$752,%rsp
movq $50, -416(%rbp)
movq $STR1, -480(%rbp)
movq -480(%rbp), %rax
movq %rax, -472(%rbp)
movq $STR2, -496(%rbp)
movq -496(%rbp), %rax
movq %rax, -488(%rbp)
movq $STR3, -512(%rbp)
movq -512(%rbp), %rax
movq %rax, -504(%rbp)
movq $STR4, -528(%rbp)
movq -528(%rbp), %rax
movq %rax, -520(%rbp)
movq $STR5, -544(%rbp)
movq -544(%rbp), %rax
movq %rax, -536(%rbp)
movq $STR6, -560(%rbp)
movq -560(%rbp), %rax
movq %rax, -552(%rbp)
movq -520(%rbp), %rax
movq %rax,-8(%rsp)
	movq -8(%rsp),%rdi
call prints
movq %rax, -576(%rbp)
leaq -568(%rbp), %rax
movq %rax, -584(%rbp)
movq -584(%rbp), %rax
movq %rax,-8(%rsp)
	movq -8(%rsp),%rdi
call readi
movq %rax, -592(%rbp)
movq -592(%rbp), %rax
movq %rax, -440(%rbp)
movq -552(%rbp), %rax
movq %rax,-8(%rsp)
	movq -8(%rsp),%rdi
call prints
movq %rax, -600(%rbp)
leaq -568(%rbp), %rax
movq %rax, -608(%rbp)
movq -608(%rbp), %rax
movq %rax,-8(%rsp)
	movq -8(%rsp),%rdi
call readi
movq %rax, -616(%rbp)
movq -616(%rbp), %rax
movq %rax, -448(%rbp)
movq -440(%rbp), %rax
movq %rax, -456(%rbp)
movq -448(%rbp), %rax
movq %rax, -464(%rbp)
.LBNO13:
movq $0, -624(%rbp)
movq -440(%rbp), %rax
cmpq -624(%rbp), %rax
jg  .LBNO1
jmp  .LBNO2
.LBNO1:
movq $1, -632(%rbp)
jmp  .LBNO3
.LBNO2:
movq $0, -632(%rbp)
jmp  .LBNO4
.LBNO4:
movq $0, -640(%rbp)
movq -448(%rbp), %rax
cmpq -640(%rbp), %rax
jg  .LBNO5
jmp  .LBNO6
.LBNO5:
movq $1, -648(%rbp)
jmp  .LBNO3
.LBNO6:
movq $0, -648(%rbp)
jmp  .LBNO7
jmp  .LBNO7
.LBNO3:
movq -440(%rbp), %rax
cmpq -448(%rbp), %rax
jl  .LBNO8
jmp  .LBNO9
.LBNO8:
movq $1, -664(%rbp)
jmp  .LBNO10
.LBNO9:
movq $0, -664(%rbp)
jmp  .LBNO11
jmp  .LBNO12
.LBNO10:
movq -464(%rbp), %rax
movq %rax,0(%rsp)
	movq 0(%rsp),%rdi
call multiply
movq %rax, -672(%rbp)
movq -672(%rbp), %rax
movq %rax, -464(%rbp)
movq $1, -680(%rbp)
movq -448(%rbp), %rax
movq -680(%rbp), %rdx
subq %rdx, %rax
movq %rax, -688(%rbp)
movq -688(%rbp), %rax
movq %rax, -448(%rbp)
jmp  .LBNO13
.LBNO11:
movq -456(%rbp), %rax
movq %rax,0(%rsp)
	movq 0(%rsp),%rdi
call multiply
movq %rax, -696(%rbp)
movq -696(%rbp), %rax
movq %rax, -456(%rbp)
movq $1, -704(%rbp)
movq -440(%rbp), %rax
movq -704(%rbp), %rdx
subq %rdx, %rax
movq %rax, -712(%rbp)
movq -712(%rbp), %rax
movq %rax, -440(%rbp)
jmp  .LBNO13
.LBNO12:
jmp  .LBNO13
.LBNO7:
movq -472(%rbp), %rax
movq %rax,-8(%rsp)
	movq -8(%rsp),%rdi
call prints
movq %rax, -720(%rbp)
movq -456(%rbp), %rax
movq %rax,0(%rsp)
	movq 0(%rsp),%rdi
call printi
movq -536(%rbp), %rax
movq %rax,-8(%rsp)
	movq -8(%rsp),%rdi
call prints
movq %rax, -728(%rbp)
movq -488(%rbp), %rax
movq %rax,-8(%rsp)
	movq -8(%rsp),%rdi
call prints
movq %rax, -736(%rbp)
movq -464(%rbp), %rax
movq %rax,0(%rsp)
	movq 0(%rsp),%rdi
call printi
movq -536(%rbp), %rax
movq %rax,-8(%rsp)
	movq -8(%rsp),%rdi
call prints
movq %rax, -744(%rbp)
movq $0, -752(%rbp)
movq -752(%rbp), %rax
movq %rbp,%rsp
popq %rbp
ret
