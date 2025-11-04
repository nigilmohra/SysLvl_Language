// Header File

#include <stdio.h>
#ifndef BASIC_PRG

#define BASIC_PRG
  // Inline Function - compiler may insert the code directly where the function is called, avoiding a function call.
  static inline void printHelloInline(){
    printf("Hello, Inline World!\n");
  }
  // Normal Function Declaration
  void printHelloNormal();
#endif
