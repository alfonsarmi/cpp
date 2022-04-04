#include <clang-c/Index.h>
#include <iostream>

auto main(int argc, const char* argv[]) -> int {
  if (argc < 2) {
    std::cout << "Invalid number of arguments!" << std::endl;
  }

  // excludeDeclsFromPCH = 1, displayDiagnostics = 1
  CXIndex Index = clang_createIndex(1, 1);

  // Expected arguments:
  // 1) The index to add the translation unit to,
  // 2) The name of the file to parse,
  // 3) A pointer to strings of further command line arguments to compile,
  // 4) The number of further arguments to compile,
  // 5) A pointer to a an array of CXUnsavedFiles structs,
  // 6) The number of CXUnsavedFiles (buffers of unsaved files) in the array,
  // 7) A bitmask of options.
  CXTranslationUnit TU = clang_parseTranslationUnit(
    Index,
    argv[1],
    argv + 2,
    argc - 2,
    nullptr,
    0,
    CXTranslationUnit_SkipFunctionBodies);

    // RAII?
    clang_disposeTranslationUnit(TU);
    clang_disposeIndex(Index);
}