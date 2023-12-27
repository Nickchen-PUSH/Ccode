	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 14, 0	sdk_version 14, 2
	.globl	_main                           ; -- Begin function main
	.p2align	2
_main:                                  ; @main
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #128
	.cfi_def_cfa_offset 128
	stp	x29, x30, [sp, #112]            ; 16-byte Folded Spill
	add	x29, sp, #112
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	adrp	x8, ___stack_chk_guard@GOTPAGE
	ldr	x8, [x8, ___stack_chk_guard@GOTPAGEOFF]
	ldr	x8, [x8]
	stur	x8, [x29, #-8]
	stur	wzr, [x29, #-32]
	mov	x0, #16
	bl	_malloc
	stur	x0, [x29, #-40]
	ldur	x8, [x29, #-40]
                                        ; kill: def $x9 killed $xzr
	str	xzr, [x8, #8]
	mov	x9, sp
	sub	x8, x29, #44
	str	x8, [x9]
	adrp	x0, l_.str@PAGE
	add	x0, x0, l_.str@PAGEOFF
	bl	_scanf
	b	LBB0_1
LBB0_1:                                 ; =>This Inner Loop Header: Depth=1
	ldur	w8, [x29, #-44]
	subs	w9, w8, #1
	stur	w9, [x29, #-44]
	subs	w8, w8, #0
	cset	w8, eq
	tbnz	w8, #0, LBB0_26
	b	LBB0_2
LBB0_2:                                 ;   in Loop: Header=BB0_1 Depth=1
	mov	x9, sp
	sub	x8, x29, #28
	str	x8, [sp, #24]                   ; 8-byte Folded Spill
	str	x8, [x9]
	adrp	x0, l_.str.1@PAGE
	add	x0, x0, l_.str.1@PAGEOFF
	bl	_scanf
	ldr	x0, [sp, #24]                   ; 8-byte Folded Reload
	adrp	x1, l_.str.2@PAGE
	add	x1, x1, l_.str.2@PAGEOFF
	bl	_strcmp
	subs	w8, w0, #0
	cset	w8, ne
	tbnz	w8, #0, LBB0_7
	b	LBB0_3
LBB0_3:                                 ;   in Loop: Header=BB0_1 Depth=1
	mov	x9, sp
	sub	x8, x29, #48
	str	x8, [x9]
	adrp	x0, l_.str@PAGE
	add	x0, x0, l_.str@PAGEOFF
	bl	_scanf
	ldur	x0, [x29, #-40]
	ldur	w1, [x29, #-48]
	bl	_getValue
	stur	w0, [x29, #-52]
	ldur	w8, [x29, #-52]
	subs	w8, w8, #0
	cset	w8, ne
	tbnz	w8, #0, LBB0_5
	b	LBB0_4
LBB0_4:                                 ;   in Loop: Header=BB0_1 Depth=1
	adrp	x0, l_.str.3@PAGE
	add	x0, x0, l_.str.3@PAGEOFF
	bl	_printf
	b	LBB0_6
LBB0_5:                                 ;   in Loop: Header=BB0_1 Depth=1
	ldur	w9, [x29, #-52]
                                        ; implicit-def: $x8
	mov	x8, x9
	mov	x9, sp
	str	x8, [x9]
	adrp	x0, l_.str.4@PAGE
	add	x0, x0, l_.str.4@PAGEOFF
	bl	_printf
	b	LBB0_6
LBB0_6:                                 ;   in Loop: Header=BB0_1 Depth=1
	b	LBB0_25
LBB0_7:                                 ;   in Loop: Header=BB0_1 Depth=1
	sub	x0, x29, #28
	adrp	x1, l_.str.5@PAGE
	add	x1, x1, l_.str.5@PAGEOFF
	bl	_strcmp
	subs	w8, w0, #0
	cset	w8, ne
	tbnz	w8, #0, LBB0_12
	b	LBB0_8
LBB0_8:                                 ;   in Loop: Header=BB0_1 Depth=1
	mov	x9, sp
	add	x8, sp, #56
	str	x8, [x9]
	add	x8, sp, #52
	str	x8, [x9, #8]
	adrp	x0, l_.str.6@PAGE
	add	x0, x0, l_.str.6@PAGEOFF
	bl	_scanf
	ldur	x0, [x29, #-40]
	ldr	w1, [sp, #56]
	ldr	w2, [sp, #52]
	bl	_addAtIndex
	str	w0, [sp, #48]
	ldr	w8, [sp, #48]
	subs	w8, w8, #1
	cset	w8, ne
	tbnz	w8, #0, LBB0_10
	b	LBB0_9
LBB0_9:                                 ;   in Loop: Header=BB0_1 Depth=1
	ldr	w8, [sp, #52]
                                        ; implicit-def: $x10
	mov	x10, x8
	ldr	w9, [sp, #56]
                                        ; implicit-def: $x8
	mov	x8, x9
	mov	x9, sp
	str	x10, [x9]
	str	x8, [x9, #8]
	adrp	x0, l_.str.7@PAGE
	add	x0, x0, l_.str.7@PAGEOFF
	bl	_printf
	b	LBB0_11
LBB0_10:                                ;   in Loop: Header=BB0_1 Depth=1
	adrp	x0, l_.str.8@PAGE
	add	x0, x0, l_.str.8@PAGEOFF
	bl	_printf
	b	LBB0_11
LBB0_11:                                ;   in Loop: Header=BB0_1 Depth=1
	b	LBB0_24
LBB0_12:                                ;   in Loop: Header=BB0_1 Depth=1
	sub	x0, x29, #28
	adrp	x1, l_.str.9@PAGE
	add	x1, x1, l_.str.9@PAGEOFF
	bl	_strcmp
	subs	w8, w0, #0
	cset	w8, ne
	tbnz	w8, #0, LBB0_17
	b	LBB0_13
LBB0_13:                                ;   in Loop: Header=BB0_1 Depth=1
	mov	x9, sp
	add	x8, sp, #44
	str	x8, [x9]
	adrp	x0, l_.str@PAGE
	add	x0, x0, l_.str@PAGEOFF
	bl	_scanf
	ldur	x0, [x29, #-40]
	ldr	w1, [sp, #44]
	bl	_deleteAtIndex
	str	w0, [sp, #40]
	ldr	w8, [sp, #40]
	subs	w8, w8, #0
	cset	w8, ne
	tbnz	w8, #0, LBB0_15
	b	LBB0_14
LBB0_14:                                ;   in Loop: Header=BB0_1 Depth=1
	adrp	x0, l_.str.10@PAGE
	add	x0, x0, l_.str.10@PAGEOFF
	bl	_printf
	b	LBB0_16
LBB0_15:                                ;   in Loop: Header=BB0_1 Depth=1
	ldr	w8, [sp, #40]
                                        ; implicit-def: $x10
	mov	x10, x8
	ldr	w9, [sp, #44]
                                        ; implicit-def: $x8
	mov	x8, x9
	mov	x9, sp
	str	x10, [x9]
	str	x8, [x9, #8]
	adrp	x0, l_.str.11@PAGE
	add	x0, x0, l_.str.11@PAGEOFF
	bl	_printf
	b	LBB0_16
LBB0_16:                                ;   in Loop: Header=BB0_1 Depth=1
	b	LBB0_23
LBB0_17:                                ;   in Loop: Header=BB0_1 Depth=1
	sub	x0, x29, #28
	adrp	x1, l_.str.12@PAGE
	add	x1, x1, l_.str.12@PAGEOFF
	bl	_strcmp
	subs	w8, w0, #0
	cset	w8, ne
	tbnz	w8, #0, LBB0_19
	b	LBB0_18
LBB0_18:                                ;   in Loop: Header=BB0_1 Depth=1
	ldur	x0, [x29, #-40]
	bl	_reverseList
	ldur	x8, [x29, #-40]
	ldr	x0, [x8, #8]
	bl	_printList
	b	LBB0_22
LBB0_19:                                ;   in Loop: Header=BB0_1 Depth=1
	sub	x0, x29, #28
	adrp	x1, l_.str.13@PAGE
	add	x1, x1, l_.str.13@PAGEOFF
	bl	_strcmp
	subs	w8, w0, #0
	cset	w8, ne
	tbnz	w8, #0, LBB0_21
	b	LBB0_20
LBB0_20:                                ;   in Loop: Header=BB0_1 Depth=1
	mov	x9, sp
	add	x8, sp, #36
	str	x8, [x9]
	add	x8, sp, #32
	str	x8, [x9, #8]
	adrp	x0, l_.str.6@PAGE
	add	x0, x0, l_.str.6@PAGEOFF
	bl	_scanf
	ldur	x0, [x29, #-40]
	ldr	w1, [sp, #36]
	ldr	w2, [sp, #32]
	bl	_reverseIndex
	ldur	x8, [x29, #-40]
	ldr	x0, [x8, #8]
	bl	_printList
	b	LBB0_21
LBB0_21:                                ;   in Loop: Header=BB0_1 Depth=1
	b	LBB0_22
LBB0_22:                                ;   in Loop: Header=BB0_1 Depth=1
	b	LBB0_23
LBB0_23:                                ;   in Loop: Header=BB0_1 Depth=1
	b	LBB0_24
LBB0_24:                                ;   in Loop: Header=BB0_1 Depth=1
	b	LBB0_25
LBB0_25:                                ;   in Loop: Header=BB0_1 Depth=1
	b	LBB0_1
LBB0_26:
	adrp	x0, l_.str.14@PAGE
	add	x0, x0, l_.str.14@PAGEOFF
	bl	_printf
	ldur	x8, [x29, #-40]
	ldr	x0, [x8, #8]
	bl	_printList
	ldur	x8, [x29, #-40]
	ldr	x0, [x8, #8]
	bl	_freeList
	ldur	x8, [x29, #-40]
                                        ; kill: def $x9 killed $xzr
	str	xzr, [x8, #8]
	ldur	x0, [x29, #-40]
	bl	_free
	ldur	x9, [x29, #-8]
	adrp	x8, ___stack_chk_guard@GOTPAGE
	ldr	x8, [x8, ___stack_chk_guard@GOTPAGEOFF]
	ldr	x8, [x8]
	subs	x8, x8, x9
	cset	w8, eq
	tbnz	w8, #0, LBB0_28
	b	LBB0_27
LBB0_27:
	bl	___stack_chk_fail
LBB0_28:
	mov	w0, #0
	ldp	x29, x30, [sp, #112]            ; 16-byte Folded Reload
	add	sp, sp, #128
	ret
	.cfi_endproc
                                        ; -- End function
	.section	__TEXT,__cstring,cstring_literals
l_.str:                                 ; @.str
	.asciz	"%d"

l_.str.1:                               ; @.str.1
	.asciz	"%s"

l_.str.2:                               ; @.str.2
	.asciz	"getValue"

l_.str.3:                               ; @.str.3
	.asciz	"getValue: fail\n"

l_.str.4:                               ; @.str.4
	.asciz	"getValue: get %d\n"

l_.str.5:                               ; @.str.5
	.asciz	"addAtIndex"

l_.str.6:                               ; @.str.6
	.asciz	"%d%d"

l_.str.7:                               ; @.str.7
	.asciz	"addAtIndex: add %d at %d\n"

l_.str.8:                               ; @.str.8
	.asciz	"addAtIndex: fail\n"

l_.str.9:                               ; @.str.9
	.asciz	"deleteAtIndex"

l_.str.10:                              ; @.str.10
	.asciz	"deleteAtIndex: fail\n"

l_.str.11:                              ; @.str.11
	.asciz	"deletaAtIndex: delete %d at %d\n"

l_.str.12:                              ; @.str.12
	.asciz	"reverseList"

l_.str.13:                              ; @.str.13
	.asciz	"reverseIndex"

l_.str.14:                              ; @.str.14
	.asciz	"\n"

.subsections_via_symbols
