#include <stddef.h>
#include <stdarg.h>
#include <stdint.h>
#include <setjmp.h>
#include <cmocka.h>


#include "../incl/mac.h"

int main(int argc, char* argv[] ) {
	int a = 100;
	int b = 20;
	assert_int_equal(max_p(&a, &b), 100);

	return 0;
}
