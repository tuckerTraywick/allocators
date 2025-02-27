#ifndef ASSERTIONS_H
#define ASSERTIONS_H

#include <stddef.h>
#include <stdio.h>

// Define this flag by passing it to your compiler.
#ifdef DISABLE_RELEASE_ASSERTIONS
	#define releaseAssert(expression)
#else
	#define releaseAssert(expression) if (expression) {} else {printReleaseAssertionFailure(__FILE__, __LINE__, __func__, #expression); handleFailedReleaseAssertion();}
#endif

// Define this flag by passing it to your compiler.
#ifdef DISABLE_DEBUG_ASSERTIONS
	#define debugAssert(expression)
#else
	#define debugAssert(expression) if (expression) {} else {printDebugAssertionFailure(__FILE__, __LINE__, __func__, #expression); handleFailedDebugAssertion();}
#endif

void printReleaseAssertionFailure(char *file, int lineNumber, const char *functionName, char *expression);

void printDebugAssertionFailure(char *file, int lineNumber, const char *functionName, char *expression);

// These functions need to be defined by the user if used.
void handleFailedReleaseAssertion(void);

void handleFailedDebugAssertion(void);

#endif // ASSERTIONS_H
