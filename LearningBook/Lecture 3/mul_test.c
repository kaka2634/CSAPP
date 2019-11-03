#include <inttypes.h>

typedef unsigned __int128 uint128_t;

uint128_t store_uprod(uint128_t *dest, uint64_t x, uint64_t y){
	*dest = x * (uint128_t)y;
	// the assembly code will be same if no return
	// Guess: because return type uinit128_t, the call function will get data from %rax and %rdx
	return *dest;
}

void main(){
	uint128_t dest;
	uint64_t x = 123;
	uint64_t y = 256;
	uint128_t result = store_uprod(&dest, x, y);
	result = result + dest;	
}

