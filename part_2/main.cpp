#include<iostream>
#include<stdio.h>

#ifndef EM_PORT_ADD
#	if defined(__EMSCRIPTEN__)
#		include <emscripten.h>
#		if defined(__cplusplus)
#			define EM_PORT_ADD(rettype) extern "C" rettype EMSCRIPTEN_KEEPALIVE
#		else
#			define EM_PORT_ADD(rettype) rettype EMSCRIPTEN_KEEPALIVE
#		endif
#	else
#		if defined(__cplusplus)
#			define EM_PORT_ADD(rettype) extern "C" rettype
#		else
#			define EM_PORT_ADD(rettype) rettype
#		endif
#	endif
#endif


// 做个简单的函数，两个数值相加

EM_PORT_ADD(double) add(double a, double b) {
	return a + b;
}

int main() {
	return 0;
}