STR1:
.string "Enter number of elements\n"
STR2:
.string "Sorted list in ascending order:\n"
STR3:
.string " "
STR4:
.string "Enter the elements: "
STR5:
.string "The array is: "
STR6:
.string "\n"

.text
 .globl main
 .type main, @function
main:
pushq	%rbp
movq 	%rsp,%rbp
subq	$1000,%rsp
movq $50, -416(%rbp)
movq $STR1, -472(%rbp)
movq -472(%rbp), %rax
movq %rax, -464(%rbp)
movq $STR2, -488(%rbp)
movq -488(%rbp), %rax
movq %rax, -480(%rbp)
movq $STR3, -504(%rbp)
movq -504(%rbp), %rax
movq %rax, -496(%rbp)
movq $STR4, -520(%rbp)
movq -520(%rbp), %rax
movq %rax, -512(%rbp)
movq $STR5, -536(%rbp)
movq -536(%rbp), %rax
movq %rax, -528(%rbp)
movq $STR6, -552(%rbp)
movq -552(%rbp), %rax
movq %rax, -544(%rbp)
movq -464(%rbp), %rax
movq %rax,-8(%rsp)
	movq -8(%rsp),%rdi
call prints
movq %rax, -560(%rbp)
leaq -568(%rbp), %rax
movq %rax, -576(%rbp)
movq -576(%rbp), %rax
movq %rax,-8(%rsp)
	movq -8(%rsp),%rdi
call readi
movq %rax, -584(%rbp)
movq -584(%rbp), %rax
movq %rax, -424(%rbp)
movq $0, -592(%rbp)
movq -592(%rbp), %rax
movq %rax, -440(%rbp)
.LBNO5:
movq -440(%rbp), %rax
cmpq -424(%rbp), %rax
jl  .LBNO1
jmp  .LBNO2
.LBNO1:
movq $1, -600(%rbp)
jmp  .LBNO3
.LBNO2:
movq $0, -600(%rbp)
jmp  .LBNO4
jmp  .LBNO4
.LBNO6:
movq -440(%rbp), %rax
movq %rax, -608(%rbp)
movq -440(%rbp), %rax
addq $1, %rax
movq %rax, -440(%rbp)
jmp  .LBNO5
.LBNO3:
movq -512(%rbp), %rax
movq %rax,-8(%rsp)
	movq -8(%rsp),%rdi
call prints
movq %rax, -616(%rbp)
movq -440(%rbp), %rax
imulq $8, %rax
movq %rax, -624(%rbp)
leaq -568(%rbp), %rax
movq %rax, -632(%rbp)
movq -632(%rbp), %rax
movq %rax,-8(%rsp)
	movq -8(%rsp),%rdi
call readi
movq %rax, -640(%rbp)
movq -640(%rbp), %rdx
movq -624(%rbp), %rax
movq %rdx, -408(%rbp,%rax,1)
jmp  .LBNO6
.LBNO4:
movq -528(%rbp), %rax
movq %rax,-8(%rsp)
	movq -8(%rsp),%rdi
call prints
movq %rax, -648(%rbp)
movq $0, -656(%rbp)
movq -656(%rbp), %rax
movq %rax, -440(%rbp)
.LBNO11:
movq -440(%rbp), %rax
cmpq -424(%rbp), %rax
jl  .LBNO7
jmp  .LBNO8
.LBNO7:
movq $1, -664(%rbp)
jmp  .LBNO9
.LBNO8:
movq $0, -664(%rbp)
jmp  .LBNO10
jmp  .LBNO10
.LBNO12:
movq -440(%rbp), %rax
movq %rax, -672(%rbp)
movq -440(%rbp), %rax
addq $1, %rax
movq %rax, -440(%rbp)
jmp  .LBNO11
.LBNO9:
movq -440(%rbp), %rax
imulq $8, %rax
movq %rax, -680(%rbp)
movq -680(%rbp), %rax
movq -408(%rbp,%rax,1), %rax
movq %rax, -688(%rbp)
movq -688(%rbp), %rax
movq %rax,0(%rsp)
	movq 0(%rsp),%rdi
call printi
movq -496(%rbp), %rax
movq %rax,-8(%rsp)
	movq -8(%rsp),%rdi
call prints
movq %rax, -696(%rbp)
jmp  .LBNO12
.LBNO10:
movq -544(%rbp), %rax
movq %rax,-8(%rsp)
	movq -8(%rsp),%rdi
call prints
movq %rax, -704(%rbp)
movq $0, -712(%rbp)
movq -712(%rbp), %rax
movq %rax, -440(%rbp)
.LBNO17:
movq $1, -720(%rbp)
movq -424(%rbp), %rax
movq -720(%rbp), %rdx
subq %rdx, %rax
movq %rax, -728(%rbp)
movq -440(%rbp), %rax
cmpq -728(%rbp), %rax
jl  .LBNO13
jmp  .LBNO14
.LBNO13:
movq $1, -736(%rbp)
jmp  .LBNO15
.LBNO14:
movq $0, -736(%rbp)
jmp  .LBNO16
jmp  .LBNO16
.LBNO21:
movq -440(%rbp), %rax
movq %rax, -744(%rbp)
movq -440(%rbp), %rax
addq $1, %rax
movq %rax, -440(%rbp)
jmp  .LBNO17
.LBNO15:
movq $0, -752(%rbp)
movq -752(%rbp), %rax
movq %rax, -432(%rbp)
.LBNO23:
movq -424(%rbp), %rax
movq -440(%rbp), %rdx
subq %rdx, %rax
movq %rax, -760(%rbp)
movq $1, -768(%rbp)
movq -760(%rbp), %rax
movq -768(%rbp), %rdx
subq %rdx, %rax
movq %rax, -776(%rbp)
movq -432(%rbp), %rax
cmpq -776(%rbp), %rax
jl  .LBNO18
jmp  .LBNO19
.LBNO18:
movq $1, -784(%rbp)
jmp  .LBNO20
.LBNO19:
movq $0, -784(%rbp)
jmp  .LBNO21
jmp  .LBNO22
.LBNO27:
movq -432(%rbp), %rax
movq %rax, -792(%rbp)
movq -432(%rbp), %rax
addq $1, %rax
movq %rax, -432(%rbp)
jmp  .LBNO23
.LBNO20:
movq -432(%rbp), %rax
imulq $8, %rax
movq %rax, -800(%rbp)
movq -800(%rbp), %rax
movq -408(%rbp,%rax,1), %rax
movq %rax, -808(%rbp)
movq $1, -816(%rbp)
movq -432(%rbp), %rax
movq -816(%rbp), %rdx
addq %rdx, %rax
movq %rax, -824(%rbp)
movq -824(%rbp), %rax
imulq $8, %rax
movq %rax, -832(%rbp)
movq -832(%rbp), %rax
movq -408(%rbp,%rax,1), %rax
movq %rax, -840(%rbp)
movq -808(%rbp), %rax
cmpq -840(%rbp), %rax
jg  .LBNO24
jmp  .LBNO25
.LBNO24:
movq $1, -848(%rbp)
jmp  .LBNO26
.LBNO25:
movq $0, -848(%rbp)
jmp  .LBNO27
jmp  .LBNO28
.LBNO26:
movq -432(%rbp), %rax
imulq $8, %rax
movq %rax, -856(%rbp)
movq -856(%rbp), %rax
movq -408(%rbp,%rax,1), %rax
movq %rax, -864(%rbp)
movq -864(%rbp), %rax
movq %rax, -456(%rbp)
movq -432(%rbp), %rax
imulq $8, %rax
movq %rax, -872(%rbp)
movq $1, -880(%rbp)
movq -432(%rbp), %rax
movq -880(%rbp), %rdx
addq %rdx, %rax
movq %rax, -888(%rbp)
movq -888(%rbp), %rax
imulq $8, %rax
movq %rax, -896(%rbp)
movq -896(%rbp), %rax
movq -408(%rbp,%rax,1), %rax
movq %rax, -904(%rbp)
movq -904(%rbp), %rdx
movq -872(%rbp), %rax
movq %rdx, -408(%rbp,%rax,1)
movq $1, -912(%rbp)
movq -432(%rbp), %rax
movq -912(%rbp), %rdx
addq %rdx, %rax
movq %rax, -920(%rbp)
movq -920(%rbp), %rax
imulq $8, %rax
movq %rax, -928(%rbp)
movq -456(%rbp), %rdx
movq -928(%rbp), %rax
movq %rdx, -408(%rbp,%rax,1)
jmp  .LBNO27
.LBNO28:
jmp  .LBNO27
.LBNO22:
jmp  .LBNO21
.LBNO16:
movq -480(%rbp), %rax
movq %rax,-8(%rsp)
	movq -8(%rsp),%rdi
call prints
movq %rax, -936(%rbp)
movq $0, -944(%rbp)
movq -944(%rbp), %rax
movq %rax, -440(%rbp)
.LBNO33:
movq -440(%rbp), %rax
cmpq -424(%rbp), %rax
jl  .LBNO29
jmp  .LBNO30
.LBNO29:
movq $1, -952(%rbp)
jmp  .LBNO31
.LBNO30:
movq $0, -952(%rbp)
jmp  .LBNO32
jmp  .LBNO32
.LBNO34:
movq -440(%rbp), %rax
movq %rax, -960(%rbp)
movq -440(%rbp), %rax
addq $1, %rax
movq %rax, -440(%rbp)
jmp  .LBNO33
.LBNO31:
movq -440(%rbp), %rax
imulq $8, %rax
movq %rax, -968(%rbp)
movq -968(%rbp), %rax
movq -408(%rbp,%rax,1), %rax
movq %rax, -976(%rbp)
movq -976(%rbp), %rax
movq %rax,0(%rsp)
	movq 0(%rsp),%rdi
call printi
movq -496(%rbp), %rax
movq %rax,-8(%rsp)
	movq -8(%rsp),%rdi
call prints
movq %rax, -984(%rbp)
jmp  .LBNO34
.LBNO32:
movq -544(%rbp), %rax
movq %rax,-8(%rsp)
	movq -8(%rsp),%rdi
call prints
movq %rax, -992(%rbp)
movq $0, -1000(%rbp)
movq -1000(%rbp), %rax
movq %rbp,%rsp
popq %rbp
ret
