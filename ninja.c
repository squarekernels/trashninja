#include "ninja.h"

unsigned long size_of_addr(long long i) {
	unsigned long sizeof_ninja_version = sizeof(&i);
	return sizeof_ninja_version;
}
