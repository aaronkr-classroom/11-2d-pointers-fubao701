// 2d_ptr.c
#include <stdio.h>

int main(void) {
	short data = 3,
		* p = &data, // data 변수의 주소
		** pp = &p;  // 포인터 p의 주소 (2차원)

	printf("[Before  ] data: %d\n", data); //3
	*p = 40;
	printf("[Use up  ] data: %d\n")
}