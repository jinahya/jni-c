#include <stdint.h>

#ifndef COM_GITHUB_JINAHYA_JNIC_JNIUTILSNATIVE_H
#define COM_GITHUB_JINAHYA_JNIC_JNIUTILSNATIVE_H

#ifdef __cplusplus
extern "C" {
#endif

  /* http://esr.ibiblio.org/?p=5095 */
#define IS_BIG_ENDIAN (*(uint16_t *)"\0\xFF" < 0x100)
  //#define IS_BIG_ENDIAN ((*(char*)&0x01) == 0)


  void ull2ca(unsigned long long, char * const, const int);
  void ull2cabe(unsigned long long, char * const, const int);

#ifdef __cplusplus
}
#endif

#endif /* COM_GITHUB_JINAHYA_JNIC_JNIUTILSNATIVE_H */