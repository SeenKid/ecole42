// Created by SoloLearn

// Language: C
// Task Description: Make the following code work properly and print 2.
#include <stdio.h>

int magic( char *s) {
  int cnt = 0;
  while (*s++ != '\0') {
    if (*s == 'o') ++cnt;
  }
  return cnt;
}
int main() {
  printf("%d", magic("SoloLearn"));
  return 0;
}