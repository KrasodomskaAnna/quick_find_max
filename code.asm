.686
.XMM
.model flat, c
public szybki_max
.code
szybki_max PROC
	push ebp
	mov ebp, esp

	push esi
	push edi

	mov esi, [ebp+8]
	mov edi, [ebp+12]

	movups xmm5, [esi]
	movups xmm0, [edi]

	pmaxsw xmm0, xmm5

	pop edi
	pop esi

	pop ebp
	ret
szybki_max ENDP
end