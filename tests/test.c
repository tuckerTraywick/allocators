#include <stdlib.h>
#include "testing.h"
#include "logging.h"
#include "assertions.h"
#include "allocators.h"

void handleFailedReleaseAssertion(void) {
	abort();
}

void handleFailedDebugAssertion(void) {
	abort();
}

static void testArenaDestruction(void) {
	Arena *arena = ArenaCreate(NULL, 10*sizeof (int));
	ArenaDestroy(arena);
}

int main(void) {
	logDebugOutput = logInfoOutput = logWarningOutput = logErrorOutput = stdout;
	beginTesting();
		runTest(testArenaDestruction);
	endTesting();
	return 0;
}
