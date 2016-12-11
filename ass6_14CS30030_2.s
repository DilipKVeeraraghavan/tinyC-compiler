STR1:
.string "Enter the first number: "
STR2:
.string "Enter the second number: "
STR3:
.string "Enter the third number: "
STR4:
.string "The first number address was pointed to second one: "
STR5:
.string "\n"
STR6:
.string "The second number address was pointed to third one: "
STR7:
.string "\n"
STR8:
.string "After pointer arrangements second was greater than first by :"
STR9:
.string "\n"
STR10:
.string "After pointer arrangements second was less than first by :"
STR11:
.string "\n"
STR12:
.string "Character comparison"
STR13:
.string "\n"
STR14:
.string "q was less\n"
STR15:
.string "q was best\n"
STR16:
.string "p was best\n"
STR17:
.string "A character array handling. Ignore the garbage due to lack of terminal null char\n"
STR18:
.string "\n"

.text
 .globl main
 .type main, @function
main:
pushq	%rbp
movq 	%rsp,%rbp
subq	$896,%rsp
movq $STR1, -48(%rbp)
movq -48(%rbp), %rax
movq %rax,-8(%rsp)
	movq -8(%rsp),%rdi
call prints
movq %rax, -56(%rbp)
leaq -40(%rbp), %rax
movq %rax, -64(%rbp)
movq -64(%rbp), %rax
movq %rax,-8(%rsp)
	movq -8(%rsp),%rdi
call readi
movq %rax, -72(%rbp)
movq -72(%rbp), %rax
movq %rax, -16(%rbp)
movq $STR2, -80(%rbp)
movq -80(%rbp), %rax
movq %rax,-8(%rsp)
	movq -8(%rsp),%rdi
call prints
movq %rax, -88(%rbp)
leaq -40(%rbp), %rax
movq %rax, -96(%rbp)
movq -96(%rbp), %rax
movq %rax,-8(%rsp)
	movq -8(%rsp),%rdi
call readi
movq %rax, -104(%rbp)
movq -104(%rbp), %rax
movq %rax, -24(%rbp)
movq $STR3, -112(%rbp)
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
movb $97, -216(%rbp)
movzbq -216(%rbp), %rax
movb %al, -168(%rbp)
movb $98, -224(%rbp)
movzbq -224(%rbp), %rax
movb %al, -176(%rbp)
movb $100, -232(%rbp)
movzbq -232(%rbp), %rax
movb %al, -184(%rbp)
leaq -168(%rbp), %rax
movq %rax, -240(%rbp)
movq -240(%rbp), %rax
movq %rax, -192(%rbp)
leaq -176(%rbp), %rax
movq %rax, -248(%rbp)
movq -248(%rbp), %rax
movq %rax, -200(%rbp)
leaq -184(%rbp), %rax
movq %rax, -256(%rbp)
movq -256(%rbp), %rax
movq %rax, -208(%rbp)
leaq -16(%rbp), %rax
movq %rax, -264(%rbp)
movq -264(%rbp), %rax
movq %rax, -144(%rbp)
leaq -24(%rbp), %rax
movq %rax, -272(%rbp)
movq -272(%rbp), %rax
movq %rax, -152(%rbp)
leaq -32(%rbp), %rax
movq %rax, -280(%rbp)
movq -280(%rbp), %rax
movq %rax, -160(%rbp)
movq -152(%rbp), %rax
movq (%rax), %rax
movq %rax, -288(%rbp)
movq -144(%rbp), %rax
movq -288(%rbp), %rdx
movq %rdx, (%rax)
movq $STR4, -296(%rbp)
movq -296(%rbp), %rax
movq %rax,-8(%rsp)
	movq -8(%rsp),%rdi
call prints
movq %rax, -304(%rbp)
movq -16(%rbp), %rax
movq %rax,0(%rsp)
	movq 0(%rsp),%rdi
call printi
movq $STR5, -312(%rbp)
movq -312(%rbp), %rax
movq %rax,-8(%rsp)
	movq -8(%rsp),%rdi
call prints
movq %rax, -320(%rbp)
movq -160(%rbp), %rax
movq (%rax), %rax
movq %rax, -328(%rbp)
movq -152(%rbp), %rax
movq -328(%rbp), %rdx
movq %rdx, (%rax)
movq $STR6, -336(%rbp)
movq -336(%rbp), %rax
movq %rax,-8(%rsp)
	movq -8(%rsp),%rdi
call prints
movq %rax, -344(%rbp)
movq -24(%rbp), %rax
movq %rax,0(%rsp)
	movq 0(%rsp),%rdi
call printi
movq $STR7, -352(%rbp)
movq -352(%rbp), %rax
movq %rax,-8(%rsp)
	movq -8(%rsp),%rdi
call prints
movq %rax, -360(%rbp)
movq $0, -376(%rbp)
movq -376(%rbp), %rax
movq %rax, -368(%rbp)
movq -16(%rbp), %rax
cmpq -24(%rbp), %rax
jl  .LBNO1
jmp  .LBNO2
.LBNO1:
movq $1, -384(%rbp)
jmp  .LBNO3
.LBNO2:
movq $0, -384(%rbp)
jmp  .LBNO4
jmp  .LBNO5
.LBNO3:
movq -368(%rbp), %rax
movq %rax, -392(%rbp)
movq -368(%rbp), %rax
addq $1, %rax
movq %rax, -368(%rbp)
movq -16(%rbp), %rax
movq %rax, -400(%rbp)
movq -16(%rbp), %rax
addq $1, %rax
movq %rax, -16(%rbp)
movq -16(%rbp), %rax
cmpq -24(%rbp), %rax
jl  .LBNO6
jmp  .LBNO7
.LBNO6:
movq $1, -408(%rbp)
jmp  .LBNO3
.LBNO7:
movq $0, -408(%rbp)
jmp  .LBNO8
jmp  .LBNO8
.LBNO8:
movq $STR8, -416(%rbp)
movq -416(%rbp), %rax
movq %rax,-8(%rsp)
	movq -8(%rsp),%rdi
call prints
movq %rax, -424(%rbp)
movq -368(%rbp), %rax
movq %rax,0(%rsp)
	movq 0(%rsp),%rdi
call printi
movq $STR9, -432(%rbp)
movq -432(%rbp), %rax
movq %rax,-8(%rsp)
	movq -8(%rsp),%rdi
call prints
movq %rax, -440(%rbp)
jmp  .LBNO5
.LBNO4:
movq -368(%rbp), %rax
movq %rax, -448(%rbp)
movq -368(%rbp), %rax
addq $1, %rax
movq %rax, -368(%rbp)
movq -24(%rbp), %rax
movq %rax, -456(%rbp)
movq -24(%rbp), %rax
addq $1, %rax
movq %rax, -24(%rbp)
movq -16(%rbp), %rax
cmpq -24(%rbp), %rax
jg  .LBNO9
jmp  .LBNO10
.LBNO9:
movq $1, -464(%rbp)
jmp  .LBNO4
.LBNO10:
movq $0, -464(%rbp)
jmp  .LBNO11
jmp  .LBNO11
.LBNO11:
movq $STR10, -472(%rbp)
movq -472(%rbp), %rax
movq %rax,-8(%rsp)
	movq -8(%rsp),%rdi
call prints
movq %rax, -480(%rbp)
movq -368(%rbp), %rax
movq %rax,0(%rsp)
	movq 0(%rsp),%rdi
call printi
movq $STR11, -488(%rbp)
movq -488(%rbp), %rax
movq %rax,-8(%rsp)
	movq -8(%rsp),%rdi
call prints
movq %rax, -496(%rbp)
jmp  .LBNO5
.LBNO5:
movq $STR12, -504(%rbp)
movq -504(%rbp), %rax
movq %rax,-8(%rsp)
	movq -8(%rsp),%rdi
call prints
movq %rax, -512(%rbp)
movq $STR13, -520(%rbp)
movq -520(%rbp), %rax
movq %rax,-8(%rsp)
	movq -8(%rsp),%rdi
call prints
movq %rax, -528(%rbp)
movq -200(%rbp), %rax
movzbq (%rax), %rax
movb %al, -536(%rbp)
movq -208(%rbp), %rax
movzbq (%rax), %rax
movb %al, -544(%rbp)
movzbq -536(%rbp), %rax
cmpb -544(%rbp), %al
jl  .LBNO12
jmp  .LBNO13
.LBNO12:
movq $1, -552(%rbp)
jmp  .LBNO14
.LBNO13:
movq $0, -552(%rbp)
jmp  .LBNO15
jmp  .LBNO16
.LBNO14:
movq $STR14, -560(%rbp)
movq -560(%rbp), %rax
movq %rax,-8(%rsp)
	movq -8(%rsp),%rdi
call prints
movq %rax, -568(%rbp)
jmp  .LBNO16
.LBNO15:
movq -200(%rbp), %rax
movzbq (%rax), %rax
movb %al, -576(%rbp)
movq -192(%rbp), %rax
movzbq (%rax), %rax
movb %al, -584(%rbp)
movzbq -576(%rbp), %rax
cmpb -584(%rbp), %al
jg  .LBNO17
jmp  .LBNO18
.LBNO17:
movq $1, -592(%rbp)
jmp  .LBNO19
.LBNO18:
movq $0, -592(%rbp)
jmp  .LBNO20
jmp  .LBNO21
.LBNO19:
movq $STR15, -600(%rbp)
movq -600(%rbp), %rax
movq %rax,-8(%rsp)
	movq -8(%rsp),%rdi
call prints
movq %rax, -608(%rbp)
jmp  .LBNO16
.LBNO20:
movq $STR16, -616(%rbp)
movq -616(%rbp), %rax
movq %rax,-8(%rsp)
	movq -8(%rsp),%rdi
call prints
movq %rax, -624(%rbp)
jmp  .LBNO16
.LBNO21:
jmp  .LBNO16
.LBNO16:
movq $STR17, -632(%rbp)
movq -632(%rbp), %rax
movq %rax,-8(%rsp)
	movq -8(%rsp),%rdi
call prints
movq %rax, -640(%rbp)
movq $5, -688(%rbp)
movq $0, -696(%rbp)
movq -696(%rbp), %rax
imulq $8, %rax
movq %rax, -704(%rbp)
movb $121, -712(%rbp)
leaq -680(%rbp), %rdx
movq -704(%rbp), %rax
addq %rax, %rdx
movzbq -712(%rbp), %rax
movb %al, (%rdx)
movq $1, -720(%rbp)
movq -720(%rbp), %rax
imulq $8, %rax
movq %rax, -728(%rbp)
movb $111, -736(%rbp)
leaq -680(%rbp), %rdx
movq -728(%rbp), %rax
addq %rax, %rdx
movzbq -736(%rbp), %rax
movb %al, (%rdx)
movq $2, -744(%rbp)
movq -744(%rbp), %rax
imulq $8, %rax
movq %rax, -752(%rbp)
movb $117, -760(%rbp)
leaq -680(%rbp), %rdx
movq -752(%rbp), %rax
addq %rax, %rdx
movzbq -760(%rbp), %rax
movb %al, (%rdx)
movq $3, -768(%rbp)
movq -768(%rbp), %rax
imulq $8, %rax
movq %rax, -776(%rbp)
movb $114, -784(%rbp)
leaq -680(%rbp), %rdx
movq -776(%rbp), %rax
addq %rax, %rdx
movzbq -784(%rbp), %rax
movb %al, (%rdx)
movq $4, -792(%rbp)
movq -792(%rbp), %rax
imulq $8, %rax
movq %rax, -800(%rbp)
movb $92, -808(%rbp)
leaq -680(%rbp), %rdx
movq -800(%rbp), %rax
addq %rax, %rdx
movzbq -808(%rbp), %rax
movb %al, (%rdx)
movq $0, -816(%rbp)
movq -816(%rbp), %rax
movq %rax, -368(%rbp)
.LBNO26:
movq $5, -824(%rbp)
movq -368(%rbp), %rax
cmpq -824(%rbp), %rax
jl  .LBNO22
jmp  .LBNO23
.LBNO22:
movq $1, -832(%rbp)
jmp  .LBNO24
.LBNO23:
movq $0, -832(%rbp)
jmp  .LBNO25
jmp  .LBNO25
.LBNO27:
movq -368(%rbp), %rax
movq %rax, -840(%rbp)
movq -368(%rbp), %rax
addq $1, %rax
movq %rax, -368(%rbp)
jmp  .LBNO26
.LBNO24:
movq -368(%rbp), %rax
imulq $8, %rax
movq %rax, -848(%rbp)
leaq -680(%rbp), %rdx
movq -848(%rbp), %rax
addq %rdx, %rax
movzbq (%rax), %rax
movb %al, -856(%rbp)
leaq -856(%rbp), %rax
movq %rax, -864(%rbp)
movq -864(%rbp), %rax
movq %rax,-8(%rsp)
	movq -8(%rsp),%rdi
call prints
movq %rax, -872(%rbp)
movq $STR18, -880(%rbp)
movq -880(%rbp), %rax
movq %rax,-8(%rsp)
	movq -8(%rsp),%rdi
call prints
movq %rax, -888(%rbp)
jmp  .LBNO27
.LBNO25:
movq $0, -896(%rbp)
movq -896(%rbp), %rax
movq %rbp,%rsp
popq %rbp
ret
