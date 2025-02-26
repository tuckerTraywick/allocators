#ifndef ALLOCATORS_H
#define ALLOCATORS_H

typedef struct Arena Arena;

Arena *ArenaCreate(Arena *parent, size_t capacity);

void ArenaDestroy(Arena *arena);

void *ArenaAllocate(Arena *arena, size_t size);

#endif
