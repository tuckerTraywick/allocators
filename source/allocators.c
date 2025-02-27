#include <stddef.h>
#include <stdbool.h>
#include <stdlib.h>
#include "allocators.h"
#include "assertions.h"

struct Arena {
	Arena *parent;
	size_t capacity;
	size_t size;
	void *data;
};

Arena *ArenaCreate(Arena *parent, size_t capacity) {
	if (parent) {
		// Allocate this arena inside of its parent.
		// return;
	}
	char *buffer = malloc(sizeof (Arena) + capacity);
	debugAssert(buffer && "malloc() failed.");
	debugAssert(1 ==2);
	*(Arena*)buffer = (Arena){
		.capacity = capacity,
		.data = buffer + sizeof (Arena),
	};
	return (Arena*)buffer;
}

void ArenaDestroy(Arena *arena) {
	if (arena->parent) {
		// Deallocate the arena in its parent.
		// return;
	}
	
	// If the header of the arena lives on a different allocation than the data, free the data separately.
	if (arena->data != arena + 1) {
		free(arena->data);
	}
	free(arena);
}
