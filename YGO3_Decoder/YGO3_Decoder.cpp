// Yu-Gi-Oh! Online 3 File Decoder
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
	printf("Yu-Gi-Oh! Online 3 File Decoder\n");

	if (argc < 2)
	{
		printf("USAGE: %s InFileName [OutFileName]\n", argv[0]);
		return -1;
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
