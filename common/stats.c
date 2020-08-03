// Copyright 2020 @mkramerm
#include "common/stats.h"

#include <stdlib.h>
#include <stdio.h>

void helloWorld() {
  printf("Hello World \n");
  static int foo;
  foo = 42 + 1;
  printf("Hello World %i \n", foo);
}