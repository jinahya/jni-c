#include "com_github_jinahya_jnic_JniUtilsNative.h"

void ull2ca(unsigned long long value, char * const array, const int length) {
  int i = length - 1;
  for (i = length - 1; i >= 0; i--) {
    array[i] = (char) (value & 0xFF);
    value >>= 8;
    if (value == 0ULL) break;
  }
}
