; Listing generated by Microsoft (R) Optimizing Compiler Version 19.35.32217.1 

	TITLE	C:\Users\lenovo\Desktop\c++code\test24_10_2\Debug\Variable initialization.obj
	.686P
	.XMM
	include listing.inc
	.model	flat

INCLUDELIB MSVCRTD
INCLUDELIB OLDNAMES

msvcjmc	SEGMENT
__9536E106_Variable initialization@cpp DB 01H
msvcjmc	ENDS
PUBLIC	?doNothing@@YAXAAH@Z				; doNothing
PUBLIC	__JustMyCode_Default
EXTRN	@__CheckForDebuggerJustMyCode@4:PROC
EXTRN	__RTC_CheckEsp:PROC
EXTRN	__RTC_InitBase:PROC
EXTRN	__RTC_Shutdown:PROC
;	COMDAT rtc$TMZ
rtc$TMZ	SEGMENT
__RTC_Shutdown.rtc$TMZ DD FLAT:__RTC_Shutdown
rtc$TMZ	ENDS
;	COMDAT rtc$IMZ
rtc$IMZ	SEGMENT
__RTC_InitBase.rtc$IMZ DD FLAT:__RTC_InitBase
rtc$IMZ	ENDS
; Function compile flags: /Odt
;	COMDAT __JustMyCode_Default
_TEXT	SEGMENT
__JustMyCode_Default PROC				; COMDAT
	push	ebp
	mov	ebp, esp
	pop	ebp
	ret	0
__JustMyCode_Default ENDP
_TEXT	ENDS
; Function compile flags: /Odtp /RTCsu /ZI
;	COMDAT ?doNothing@@YAXAAH@Z
_TEXT	SEGMENT
___formal$ = 8						; size = 4
?doNothing@@YAXAAH@Z PROC				; doNothing, COMDAT
; File C:\Users\lenovo\Desktop\c++code\test24_10_2\Variable initialization.cpp
; Line 4
	push	ebp
	mov	ebp, esp
	sub	esp, 192				; 000000c0H
	push	ebx
	push	esi
	push	edi
	mov	edi, ebp
	xor	ecx, ecx
	mov	eax, -858993460				; ccccccccH
	rep stosd
	mov	ecx, OFFSET __9536E106_Variable initialization@cpp
	call	@__CheckForDebuggerJustMyCode@4
; Line 6
	pop	edi
	pop	esi
	pop	ebx
	add	esp, 192				; 000000c0H
	cmp	ebp, esp
	call	__RTC_CheckEsp
	mov	esp, ebp
	pop	ebp
	ret	0
?doNothing@@YAXAAH@Z ENDP				; doNothing
_TEXT	ENDS
END
