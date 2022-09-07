#include <stdlib.h>
#include <stdio.h>

/*int main(void) {

	int a[5] = { 1,2,3,4,5 };
	int b[5] = { 0,0,0,0,0 };
	int c = 3;
	int* p0, p1;
	p0 = &a[0];
	p1 = &b[0];

	//se l`elemento di a e' maggiore di c metto un uno in b
	__asm {
		mov ecx, p0
		mov edx, p1
		mov ebx, c

		/*condizione :
			cmp ecx, ebx
			jg fai
			mov 
		fai: 
			mov edx, 1
			mov edx, dword ptr[edx + edx * 4];
			jmp condizione
		altrimenti:
		fine:*/

		/*mov esi, 0
		condizione: 
			cmp esi, 5
			je fineciclo 
			mov eax, dword [ecx + esi*4]
			cmp eax, ebx 
			jle nonfare
			mov dword ptr[edx+esi*4],1
		nonfare:
			inc esi
			jmp condizione

		fineciclo:

	}

	for (int i = 0; i < 5; i++) {
		printf("%d ", b[i]);
	}
	getchar();
}*/

/*int main(void) {

	int a[5] = { 1,2,3,4,5 };
	int b[5] = { 10,15,7,30,50};
	int c = 3;
	int* p0, p1;
	p0 = &a[0];
	p1 = &b[0];

	//se l`elemento di a e' maggiore di c metto un uno in b
	__asm {
		mov ecx, p0
		mov edx, p1		

		mov esi, 0
		mov ebx, 0

		ciclo1: 
			cmp esi,5
			je fineciclo1
			add ebx, dword ptr[ecx+esi*4]
			inc esi
			jmp ciclo1
		fineciclo1:
			mov esi,0


		ciclo2:
				cmp esi,5
				je fineciclo2
				cmp dword ptr[edx+esi*4], ebx
				jg nonfaccionulla
				mov dword ptr[edx+esi*4],0
		nonfaccionulla:
				inc esi
				jmp ciclo2
		finecislo2:




	}

	for (int i = 0; i < 5; i++) {
		printf("%d ", b[i]);
	}
	getchar();
}*/


int main(void) {
	char str[255] = "blanchito baybe";
	int b;
	__asm{


	}

	for (int i = 0; i < 5; i++) {
		printf("%d ", str [i]);
	}
}