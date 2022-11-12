#include <stdio.h>


#ifndef EM_PORT
#	if defined(__EMSCRIPTEN__)
#		include <emscripten.h>
#		if defined(__cplusplus)
#			define EM_PORT(rettype) extern "C" rettype EMSCRIPTEN_KEEPALIVE
#		else
#			define EM_PORT(rettype) rettype EMSCRIPTEN_KEEPALIVE
#		endif
#	else
#		if defined(__cplusplus)
#			define EM_PORT(rettype) extern "C" rettype
#		else
#			define EM_PORT(rettype) rettype
#		endif
#	endif
#endif

EM_PORT(double)  add(double a, double b);

EM_PORT(double ) sub(double a, double b);

EM_PORT(double) compute(double a, double b, int type){

    if (type == 1) {
        return add(a, b);
    }
    if (type == 2) {
        return sub(a, b);
    }
    return NULL;

}