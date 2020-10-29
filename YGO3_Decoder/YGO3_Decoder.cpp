// Yu-Gi-Oh! Online 3 File Codec
//

#include "stdafx.h"
#include "DecodeKeys.h"
#include <stdlib.h>
#include <string.h>

char DecodeKeys1[0x48] = DECODE_KEYS_1;
char DecodeKeys2[0x1000] = DECODE_KEYS_2;

char* OutputFileName;
char FileExt[16];

unsigned int KeyPointers[2];

struct stat st = { 0 };

void __declspec(naked) sub_10E2640()
{
	_asm
	{
		push    ebx
		push    ebp
		push    esi
		mov     esi, eax
		mov     edx, [esi + 4]
		mov     eax, [esp + 0x10]
		push    edi
		mov     edi, [esi]
		mov     ecx, [edi + 0x44]
		xor ecx, [eax]
		mov     eax, ecx
		shr     eax, 0x10
		and eax, 0xFF
		mov     eax, [edx + eax * 4 + 0x400]
		mov     ebx, ecx
		shr     ebx, 0x18
		add     eax, [edx + ebx * 4]
		mov     ebx, ecx
		shr     ebx, 8
		and ebx, 0xFF
		xor eax, [edx + ebx * 4 + 0x800]
		mov     ebx, ecx
		and     ebx, 0xFF
		add     eax, [edx + ebx * 4 + 0xC00]
		mov     ebx, [esp + 0x18]
		xor eax, [edi + 0x40]
		xor eax, [ebx]
		mov     ebx, eax
		shr     ebx, 0x10
		and ebx, 0xFF
		mov     ebx, [edx + ebx * 4 + 0x400]
		mov     ebp, eax
		shr     ebp, 0x18
		add     ebx, [edx + ebp * 4]
		mov     ebp, eax
		shr     ebp, 8
		and ebp, 0xFF
		xor ebx, [edx + ebp * 4 + 0x800]
		mov     ebp, eax
		and     ebp, 0xFF
		add     ebx, [edx + ebp * 4 + 0xC00]
		xor ebx, [edi + 0x3C]
		xor ecx, ebx
		mov     ebx, ecx
		shr     ebx, 0x10
		and ebx, 0xFF
		mov     ebx, [edx + ebx * 4 + 0x400]
		mov     ebp, ecx
		shr     ebp, 0x18
		add     ebx, [edx + ebp * 4]
		mov     ebp, ecx
		shr     ebp, 8
		and ebp, 0xFF
		xor ebx, [edx + ebp * 4 + 0x800]
		mov     ebp, ecx
		and     ebp, 0xFF
		add     ebx, [edx + ebp * 4 + 0xC00]
		xor ebx, [edi + 0x38]
		xor eax, ebx
		mov     ebx, eax
		shr     ebx, 0x10
		and ebx, 0xFF
		mov     ebx, [edx + ebx * 4 + 0x400]
		mov     ebp, eax
		shr     ebp, 0x18
		add     ebx, [edx + ebp * 4]
		mov     ebp, eax
		shr     ebp, 8
		and ebp, 0xFF
		xor ebx, [edx + ebp * 4 + 0x800]
		mov     ebp, eax
		and     ebp, 0xFF
		add     ebx, [edx + ebp * 4 + 0xC00]
		xor ebx, [edi + 0x34]
		xor ecx, ebx
		mov     ebx, ecx
		shr     ebx, 0x10
		and ebx, 0xFF
		mov     ebx, [edx + ebx * 4 + 0x400]
		mov     ebp, ecx
		shr     ebp, 0x18
		add     ebx, [edx + ebp * 4]
		mov     ebp, ecx
		shr     ebp, 8
		and ebp, 0xFF
		xor ebx, [edx + ebp * 4 + 0x800]
		mov     ebp, ecx
		and     ebp, 0xFF
		add     ebx, [edx + ebp * 4 + 0xC00]
		mov     esi, edx
		xor     ebx, [edi + 0x30]
		xor eax, ebx
		mov     ebx, eax
		shr     ebx, 0x10
		and ebx, 0xFF
		mov     ebx, [edx + ebx * 4 + 0x400]
		mov     ebp, eax
		shr     ebp, 0x18
		add     ebx, [edx + ebp * 4]
		mov     ebp, eax
		shr     ebp, 8
		and ebp, 0xFF
		xor ebx, [edx + ebp * 4 + 0x800]
		mov     ebp, eax
		and     ebp, 0xFF
		add     ebx, [edx + ebp * 4 + 0xC00]
		xor ebx, [edi + 0x2C]
		xor ecx, ebx
		mov     ebx, ecx
		shr     ebx, 0x10
		and ebx, 0xFF
		mov     ebx, [edx + ebx * 4 + 0x400]
		mov     ebp, ecx
		shr     ebp, 0x18
		add     ebx, [edx + ebp * 4]
		mov     ebp, ecx
		shr     ebp, 8
		and ebp, 0xFF
		xor ebx, [edx + ebp * 4 + 0x800]
		mov     ebp, ecx
		and     ebp, 0xFF
		add     ebx, [edx + ebp * 4 + 0xC00]
		xor ebx, [edi + 0x28]
		xor eax, ebx
		mov     ebx, eax
		shr     ebx, 0x10
		and ebx, 0xFF
		mov     ebx, [edx + ebx * 4 + 0x400]
		mov     ebp, eax
		shr     ebp, 0x18
		add     ebx, [edx + ebp * 4]
		mov     ebp, eax
		shr     ebp, 8
		and ebp, 0xFF
		xor ebx, [edx + ebp * 4 + 0x800]
		mov     ebp, eax
		and     ebp, 0xFF
		add     ebx, [edx + ebp * 4 + 0xC00]
		xor ebx, [edi + 0x24]
		xor ecx, ebx
		mov     ebx, ecx
		shr     ebx, 0x10
		and ebx, 0xFF
		mov     ebx, [edx + ebx * 4 + 0x400]
		mov     ebp, ecx
		shr     ebp, 0x18
		add     ebx, [edx + ebp * 4]
		mov     edx, ecx
		shr     edx, 8
		and edx, 0xFF
		xor ebx, [esi + edx * 4 + 0x800]
		mov     edx, ecx
		and     edx, 0xFF
		add     ebx, [esi + edx * 4 + 0xC00]
		xor ebx, [edi + 0x20]
		xor eax, ebx
		mov     edx, eax
		shr     edx, 0x10
		and edx, 0xFF
		mov     edx, [esi + edx * 4 + 0x400]
		mov     ebx, eax
		shr     ebx, 0x18
		add     edx, [esi + ebx * 4]
		mov     ebx, eax
		shr     ebx, 8
		and ebx, 0xFF
		xor edx, [esi + ebx * 4 + 0x800]
		mov     ebx, eax
		and     ebx, 0xFF
		add     edx, [esi + ebx * 4 + 0xC00]
		xor edx, [edi + 0x1C]
		xor ecx, edx
		mov     edx, ecx
		shr     edx, 0x10
		and edx, 0xFF
		mov     edx, [esi + edx * 4 + 0x400]
		mov     ebx, ecx
		shr     ebx, 0x18
		add     edx, [esi + ebx * 4]
		mov     ebx, ecx
		shr     ebx, 8
		and ebx, 0xFF
		xor edx, [esi + ebx * 4 + 0x800]
		mov     ebx, ecx
		and     ebx, 0xFF
		add     edx, [esi + ebx * 4 + 0xC00]
		xor edx, [edi + 0x18]
		xor eax, edx
		mov     edx, eax
		shr     edx, 0x10
		and edx, 0xFF
		mov     edx, [esi + edx * 4 + 0x400]
		mov     ebx, eax
		shr     ebx, 0x18
		add     edx, [esi + ebx * 4]
		mov     ebx, eax
		shr     ebx, 8
		and ebx, 0xFF
		xor edx, [esi + ebx * 4 + 0x800]
		mov     ebx, eax
		and     ebx, 0xFF
		add     edx, [esi + ebx * 4 + 0xC00]
		xor edx, [edi + 0x14]
		xor ecx, edx
		mov     edx, ecx
		shr     edx, 0x10
		and edx, 0xFF
		mov     edx, [esi + edx * 4 + 0x400]
		mov     ebx, ecx
		shr     ebx, 0x18
		add     edx, [esi + ebx * 4]
		mov     ebx, ecx
		shr     ebx, 8
		and ebx, 0xFF
		xor edx, [esi + ebx * 4 + 0x800]
		mov     ebx, ecx
		and     ebx, 0xFF
		add     edx, [esi + ebx * 4 + 0xC00]
		xor edx, [edi + 0x10]
		xor eax, edx
		mov     edx, eax
		shr     edx, 0x10
		and edx, 0xFF
		mov     edx, [esi + edx * 4 + 0x400]
		mov     ebx, eax
		shr     ebx, 0x18
		add     edx, [esi + ebx * 4]
		mov     ebx, eax
		shr     ebx, 8
		and ebx, 0xFF
		xor edx, [esi + ebx * 4 + 0x800]
		mov     ebx, eax
		and     ebx, 0xFF
		add     edx, [esi + ebx * 4 + 0xC00]
		xor edx, [edi + 0xC]
		xor ecx, edx
		mov     edx, ecx
		shr     edx, 0x10
		and edx, 0xFF
		mov     edx, [esi + edx * 4 + 0x400]
		mov     ebx, ecx
		shr     ebx, 0x18
		add     edx, [esi + ebx * 4]
		mov     ebx, ecx
		shr     ebx, 8
		and ebx, 0xFF
		xor edx, [esi + ebx * 4 + 0x800]
		mov     ebx, ecx
		and     ebx, 0xFF
		add     edx, [esi + ebx * 4 + 0xC00]
		xor edx, [edi + 8]
		xor eax, edx
		mov     edx, eax
		shr     edx, 0x10
		and edx, 0xFF
		mov     edx, [esi + edx * 4 + 0x400]
		mov     ebx, eax
		shr     ebx, 0x18
		add     edx, [esi + ebx * 4]
		mov     ebx, eax
		shr     ebx, 8
		and ebx, 0xFF
		xor edx, [esi + ebx * 4 + 0x800]
		mov     ebx, eax
		and     ebx, 0xFF
		add     edx, [esi + ebx * 4 + 0xC00]
		xor edx, [edi + 4]
		xor ecx, edx
		mov     edx, [edi]
		xor edx, eax
		mov     eax, [esp + 0x14]
		pop     edi
		pop     esi
		mov[eax], edx
		mov     edx, [esp + 0x10]
		pop     ebp
		mov[edx], ecx
		pop     ebx
		retn
	}
}

void __declspec(naked) sub_10E2210()
{
	_asm
	{
		push    ebx
		push    ebp
		push    esi
		mov     esi, eax
		mov     edx, [esi + 4]
		mov     eax, [esp + 0x10]
		mov     ecx, [eax]
		push    edi
		mov     edi, [esi]
		xor ecx, [edi]
		mov     eax, ecx
		shr     eax, 0x10
		and eax, 0xFF
		mov     eax, [edx + eax * 4 + 0x400]
		mov     ebx, ecx
		shr     ebx, 0x18
		add     eax, [edx + ebx * 4]
		mov     ebx, ecx
		shr     ebx, 8
		and ebx, 0xFF
		xor eax, [edx + ebx * 4 + 0x800]
		mov     ebx, ecx
		and     ebx, 0xFF
		add     eax, [edx + ebx * 4 + 0xC00]
		mov     ebx, [esp + 0x18]
		xor eax, [edi + 4]
		xor eax, [ebx]
		mov     ebx, eax
		shr     ebx, 0x10
		and ebx, 0xFF
		mov     ebx, [edx + ebx * 4 + 0x400]
		mov     ebp, eax
		shr     ebp, 0x18
		add     ebx, [edx + ebp * 4]
		mov     ebp, eax
		shr     ebp, 8
		and ebp, 0xFF
		xor ebx, [edx + ebp * 4 + 0x800]
		mov     ebp, eax
		and     ebp, 0xFF
		add     ebx, [edx + ebp * 4 + 0xC00]
		xor ebx, [edi + 8]
		xor ecx, ebx
		mov     ebx, ecx
		shr     ebx, 0x10
		and ebx, 0xFF
		mov     ebx, [edx + ebx * 4 + 0x400]
		mov     ebp, ecx
		shr     ebp, 0x18
		add     ebx, [edx + ebp * 4]
		mov     ebp, ecx
		shr     ebp, 8
		and ebp, 0xFF
		xor ebx, [edx + ebp * 4 + 0x800]
		mov     ebp, ecx
		and     ebp, 0xFF
		add     ebx, [edx + ebp * 4 + 0xC00]
		xor ebx, [edi + 0xC]
		xor eax, ebx
		mov     ebx, eax
		shr     ebx, 0x10
		and ebx, 0xFF
		mov     ebx, [edx + ebx * 4 + 0x400]
		mov     ebp, eax
		shr     ebp, 0x18
		add     ebx, [edx + ebp * 4]
		mov     ebp, eax
		shr     ebp, 8
		and ebp, 0xFF
		xor ebx, [edx + ebp * 4 + 0x800]
		mov     ebp, eax
		and     ebp, 0xFF
		add     ebx, [edx + ebp * 4 + 0xC00]
		xor ebx, [edi + 0x10]
		xor ecx, ebx
		mov     ebx, ecx
		shr     ebx, 0x10
		and ebx, 0xFF
		mov     ebx, [edx + ebx * 4 + 0x400]
		mov     ebp, ecx
		shr     ebp, 0x18
		add     ebx, [edx + ebp * 4]
		mov     ebp, ecx
		shr     ebp, 8
		and ebp, 0xFF
		xor ebx, [edx + ebp * 4 + 0x800]
		mov     ebp, ecx
		and     ebp, 0xFF
		add     ebx, [edx + ebp * 4 + 0xC00]
		mov     esi, edx
		xor     ebx, [edi + 0x14]
		xor eax, ebx
		mov     ebx, eax
		shr     ebx, 0x10
		and ebx, 0xFF
		mov     ebx, [edx + ebx * 4 + 0x400]
		mov     ebp, eax
		shr     ebp, 0x18
		add     ebx, [edx + ebp * 4]
		mov     ebp, eax
		shr     ebp, 8
		and ebp, 0xFF
		xor ebx, [edx + ebp * 4 + 0x800]
		mov     ebp, eax
		and     ebp, 0xFF
		add     ebx, [edx + ebp * 4 + 0xC00]
		xor ebx, [edi + 0x18]
		xor ecx, ebx
		mov     ebx, ecx
		shr     ebx, 0x10
		and ebx, 0xFF
		mov     ebx, [edx + ebx * 4 + 0x400]
		mov     ebp, ecx
		shr     ebp, 0x18
		add     ebx, [edx + ebp * 4]
		mov     ebp, ecx
		shr     ebp, 8
		and ebp, 0xFF
		xor ebx, [edx + ebp * 4 + 0x800]
		mov     ebp, ecx
		and     ebp, 0xFF
		add     ebx, [edx + ebp * 4 + 0xC00]
		xor ebx, [edi + 0x1C]
		xor eax, ebx
		mov     ebx, eax
		shr     ebx, 0x10
		and ebx, 0xFF
		mov     ebx, [edx + ebx * 4 + 0x400]
		mov     ebp, eax
		shr     ebp, 0x18
		add     ebx, [edx + ebp * 4]
		mov     ebp, eax
		shr     ebp, 8
		and ebp, 0xFF
		xor ebx, [edx + ebp * 4 + 0x800]
		mov     ebp, eax
		and     ebp, 0xFF
		add     ebx, [edx + ebp * 4 + 0xC00]
		xor ebx, [edi + 0x20]
		xor ecx, ebx
		mov     ebx, ecx
		shr     ebx, 0x10
		and ebx, 0xFF
		mov     ebx, [edx + ebx * 4 + 0x400]
		mov     ebp, ecx
		shr     ebp, 0x18
		add     ebx, [edx + ebp * 4]
		mov     edx, ecx
		shr     edx, 8
		and edx, 0xFF
		xor ebx, [esi + edx * 4 + 0x800]
		mov     edx, ecx
		and     edx, 0xFF
		add     ebx, [esi + edx * 4 + 0xC00]
		xor ebx, [edi + 0x24]
		xor eax, ebx
		mov     edx, eax
		shr     edx, 0x10
		and edx, 0xFF
		mov     edx, [esi + edx * 4 + 0x400]
		mov     ebx, eax
		shr     ebx, 0x18
		add     edx, [esi + ebx * 4]
		mov     ebx, eax
		shr     ebx, 8
		and ebx, 0xFF
		xor edx, [esi + ebx * 4 + 0x800]
		mov     ebx, eax
		and     ebx, 0xFF
		add     edx, [esi + ebx * 4 + 0xC00]
		xor edx, [edi + 0x28]
		xor ecx, edx
		mov     edx, ecx
		shr     edx, 0x10
		and edx, 0xFF
		mov     edx, [esi + edx * 4 + 0x400]
		mov     ebx, ecx
		shr     ebx, 0x18
		add     edx, [esi + ebx * 4]
		mov     ebx, ecx
		shr     ebx, 8
		and ebx, 0xFF
		xor edx, [esi + ebx * 4 + 0x800]
		mov     ebx, ecx
		and     ebx, 0xFF
		add     edx, [esi + ebx * 4 + 0xC00]
		xor edx, [edi + 0x2C]
		xor eax, edx
		mov     edx, eax
		shr     edx, 0x10
		and edx, 0xFF
		mov     edx, [esi + edx * 4 + 0x400]
		mov     ebx, eax
		shr     ebx, 0x18
		add     edx, [esi + ebx * 4]
		mov     ebx, eax
		shr     ebx, 8
		and ebx, 0xFF
		xor edx, [esi + ebx * 4 + 0x800]
		mov     ebx, eax
		and     ebx, 0xFF
		add     edx, [esi + ebx * 4 + 0xC00]
		xor edx, [edi + 0x30]
		xor ecx, edx
		mov     edx, ecx
		shr     edx, 0x10
		and edx, 0xFF
		mov     edx, [esi + edx * 4 + 0x400]
		mov     ebx, ecx
		shr     ebx, 0x18
		add     edx, [esi + ebx * 4]
		mov     ebx, ecx
		shr     ebx, 8
		and ebx, 0xFF
		xor edx, [esi + ebx * 4 + 0x800]
		mov     ebx, ecx
		and     ebx, 0xFF
		add     edx, [esi + ebx * 4 + 0xC00]
		xor edx, [edi + 0x34]
		xor eax, edx
		mov     edx, eax
		shr     edx, 0x10
		and edx, 0xFF
		mov     edx, [esi + edx * 4 + 0x400]
		mov     ebx, eax
		shr     ebx, 0x18
		add     edx, [esi + ebx * 4]
		mov     ebx, eax
		shr     ebx, 8
		and ebx, 0xFF
		xor edx, [esi + ebx * 4 + 0x800]
		mov     ebx, eax
		and     ebx, 0xFF
		add     edx, [esi + ebx * 4 + 0xC00]
		xor edx, [edi + 0x38]
		xor ecx, edx
		mov     edx, ecx
		shr     edx, 0x10
		and edx, 0xFF
		mov     edx, [esi + edx * 4 + 0x400]
		mov     ebx, ecx
		shr     ebx, 0x18
		add     edx, [esi + ebx * 4]
		mov     ebx, ecx
		shr     ebx, 8
		and ebx, 0xFF
		xor edx, [esi + ebx * 4 + 0x800]
		mov     ebx, ecx
		and     ebx, 0xFF
		add     edx, [esi + ebx * 4 + 0xC00]
		xor edx, [edi + 0x3C]
		xor eax, edx
		mov     edx, eax
		shr     edx, 0x10
		and edx, 0xFF
		mov     edx, [esi + edx * 4 + 0x400]
		mov     ebx, eax
		shr     ebx, 0x18
		add     edx, [esi + ebx * 4]
		mov     ebx, eax
		shr     ebx, 8
		and ebx, 0xFF
		xor edx, [esi + ebx * 4 + 0x800]
		mov     ebx, eax
		xor     eax, [edi + 0x44]
		and ebx, 0xFF
		add     edx, [esi + ebx * 4 + 0xC00]
		xor edx, [edi + 0x40]
		pop     edi
		xor     ecx, edx
		mov     edx, [esp + 0x14]
		pop     esi
		mov[edx], ecx
		mov     ecx, [esp + 0xC]
		pop     ebp
		mov[ecx], eax
		pop     ebx
		retn    8
	}
}

int YGO3Encoder(int Length, int XORKeys, int InputBuffer)
{
	int v4;
	int v6;
	int v7;
	unsigned int v8;
	int result;
	int v10;
	int v15;
	unsigned int v16;
	unsigned int something;

	v4 = Length;
	v6 = InputBuffer;
	v7 = Length;
	if (Length & 7)
	{
		v7 = Length - (Length & 7) + 8;
		v15 = Length - (Length & 7) + 8;
	}
	else
	{
		v15 = Length;
	}
	v8 = 0;
	v16 = 0;
	if (v7)
	{
		while (1)
		{
			v10 = v4 - 7;
			if (v8 >= v10)
			{
				if (v7 - v4 > 0)
					memset((void *)(v6 + v4), 0, v7 - v4);
				something = v6 + 4;
				_asm
				{
					push something
					push v6
					mov eax, XORKeys
					call sub_10E2210
				}
				v6 += 8;
			}
			else
			{
				something = v6 + 4;
				_asm
				{
					push something
					push v6
					mov eax, XORKeys
					call sub_10E2210
				}
				v6 += 8;
			}

			v8 += 8;
			v16 = v8;
			if (v8 >= v15)
				break;
			v7 = v15;
		}
		result = v15;
	}
	else
	{
		result = 0;
	}
	return result;
}

int YGO3Decoder(int Length, int XORKeys, int InputBuffer)
{
	int v4;
	unsigned int v6;
	unsigned int something;

	v4 = InputBuffer;
	if (Length)
	{
		v6 = ((unsigned int)(Length - 1) >> 3) + 1;
		do
		{
			something = v4 + 4;
			_asm
			{
				push something
				push v4
				mov eax, XORKeys
				call sub_10E2640
				add esp, 8
			}
			v4 += 8;

			--v6;
		} while (v6);
	}
	return 0;
}

int EncodeYGO3File(char* InFilename, char* OutFilename)
{
	FILE* fin = fopen(InFilename, "rb");
	unsigned int FileLength = 0;
	void* InBuffer = NULL;

	if (fin == NULL)
	{
		printf("ERROR: Can't open file for reading: %s\n");
		perror("ERROR");
		return -1;
	}

	stat(InFilename, &st);

	InBuffer = malloc(st.st_size);
	fread(InBuffer, st.st_size, 1, fin);

	KeyPointers[0] = (int)DecodeKeys1;
	KeyPointers[1] = (int)DecodeKeys2;

	YGO3Encoder(st.st_size, (int)KeyPointers, (int)InBuffer);

	FILE* fout = fopen(OutFilename, "wb");
	if (fout == NULL)
	{
		printf("ERROR: Can't open file for writing: %s\n");
		perror("ERROR");
		return -1;
	}

	FileLength = _byteswap_ulong(st.st_size ^ 0x77777777);
	fwrite(&FileLength, sizeof(int), 1, fout);
	fwrite(InBuffer, st.st_size, 1, fout);

	fclose(fout);
	fclose(fin);
	return 0;
}

int DecodeYGO3File(char* InFilename, char* OutFilename)
{
	FILE* fin = fopen(InFilename, "rb");
	unsigned int FileLength = 0;
	void* InBuffer = NULL;

	if (fin == NULL)
	{
		printf("ERROR: Can't open file for reading: %s\n");
		perror("ERROR");
		return -1;
	}

	fread(&FileLength, sizeof(int), 1, fin);
	FileLength = _byteswap_ulong(FileLength);
	FileLength ^= 0x77777777;

	InBuffer = malloc(FileLength);
	fread(InBuffer, FileLength, 1, fin);

	KeyPointers[0] = (int)DecodeKeys1;
	KeyPointers[1] = (int)DecodeKeys2;

	YGO3Decoder(FileLength, (int)KeyPointers, (int)InBuffer);

	FILE* fout = fopen(OutFilename, "wb");
	if (fout == NULL)
	{
		printf("ERROR: Can't open file for writing: %s\n");
		perror("ERROR");
		return -1;
	}

	fwrite(InBuffer, FileLength, 1, fout);

	fclose(fout);
	fclose(fin);
	return 0;
}

int main(int argc, char *argv[])
{
	printf("Yu-Gi-Oh! Online 3 File Codec\n");

	if (argc < 2)
	{
		printf("USAGE (decode): %s InFileName [OutFileName]\n", argv[0]);
		printf("USAGE (encode): %s -e InFileName [OutFileName]\n", argv[0]);
		return -1;
	}

	if (argv[1][0] == '-' && argv[1][1] == 'e') // encoding mode
	{
		if (argc == 3)
		{
			char* PatchPoint;
			OutputFileName = (char*)calloc(strlen(argv[2]), sizeof(char) + 8);
			strcpy(OutputFileName, argv[2]);
			PatchPoint = strrchr(OutputFileName, '.');
			strcpy(FileExt, PatchPoint);
			sprintf(PatchPoint, "_encoded%s", FileExt);
		}
		else
			OutputFileName = argv[3];

		return EncodeYGO3File(argv[2], OutputFileName);
	}

	if (argc == 2)
	{
		char* PatchPoint;
		OutputFileName = (char*)calloc(strlen(argv[1]), sizeof(char) + 8);
		strcpy(OutputFileName, argv[1]);
		PatchPoint = strrchr(OutputFileName, '.');
		strcpy(FileExt, PatchPoint);
		sprintf(PatchPoint, "_decoded%s", FileExt);
	}
	else
		OutputFileName = argv[2];

    return DecodeYGO3File(argv[1], OutputFileName);
}
