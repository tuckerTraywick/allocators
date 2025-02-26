#include "testing.h"
#include "allocators.h"

static void testArenaDestruction(void) {
	Arena *arena = ArenaCreate(NULL, 10*sizeof (int));
	ArenaDestroy(arena);
}

int main(void) {
	output = stdout;
	beginTesting();
		runTest(testArenaDestruction);
	endTesting();
	return 0;
}
