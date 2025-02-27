#include <stddef.h>
#include <stdio.h>
#include "assertions.h"
#include "logging.h"

#ifndef DISABLE_RELEASE_ASSERTIONS
	void printReleaseAssertionFailure(char *file, int lineNumber, const char *functionName, char *expression) {
		printfError(ERROR_PREFIX LOG_FORMAT "Release assertion failed: '%s'.\n", file, lineNumber, functionName, expression);
	}
#endif

#ifndef DISABLE_DEBUG_ASSERTIONS
	void printDebugAssertionFailure(char *file, int lineNumber, const char *functionName, char *expression) {
		printfError(ERROR_PREFIX LOG_FORMAT "Debug assertion failed: '%s'.\n", file, lineNumber, functionName, expression);
	}
#endif
