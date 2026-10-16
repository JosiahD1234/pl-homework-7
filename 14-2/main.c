#include "common.h"
#include "chunk.h"
#include "debug.h"

int main(int argc, const char* argv[]) {
  Chunk chunk;
  initChunk(&chunk);
  for (int i = 0; i < 256; i++) {
    addConstant(&chunk, i);
  }

  writeConstant(&chunk, 999, 123);

  disassembleChunk(&chunk, "test chunk");
  freeChunk(&chunk);
  return 0;
}
