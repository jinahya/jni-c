#include "com_github_jinahya_jnic_JniUtilsNative.h"
#include <stdio.h>

void ull2ca(unsigned long long value, char * const array, const int length) {
  int i = length - 1;
  for (i = length - 1; i >= 0; i--) {
    array[i] = (char) (value & 0xFF);
    value >>= 8;
    if (value == 0ULL) break;
  }
}

void ull2cabe(unsigned long long value, char * const array, const int length) {
  ull2ca(value, array, length);
  printf("IS_BIG_ENDIAN: %d\n", IS_BIG_ENDIAN);
  if (!IS_BIG_ENDIAN) {
    printf("IS_BIG_ENDIAN: %d\n", IS_BIG_ENDIAN);
    char temp;
    int s;
    int e = length - 1;
    const int half = length / 2;
    for (s = 0; s < half; s++) {
      temp = *(array + s);
      *(array + s) = *(array + e);
      *(array + e) = temp;
      e--;
    }
  }
}
