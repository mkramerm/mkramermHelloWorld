// Copyright 2020 @mkramerm
#include "common/file_test.h"

#include <stdio.h>
#include <iostream>

void readTestField() {
  std::ifstream inFile;
  inFile.open(
    "/Users/martinkramer/bazel/c_code_test/common/test_data/input.txt");

  if (!inFile) {
    std::cout << "Unable to open file datafile.txt" << std::endl;
    return;
  }

  int x;

  while (inFile >> x) {
    std::cout << x << std::endl;
  }
}
