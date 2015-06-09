#include <jni.h>
#include <stdint.h>

#ifndef COM_GITHUB_JINAHYA_NATIVE_H
#define COM_GITHUB_JINAHYA_NATIVE_H

#ifdef __cplusplus
extern "C" {
#endif

#ifndef IS_BIG_ENDIAN1
#define IS_BIG_ENDIAN1 (*(uint16_t *)"\0\xFF" < 0x100)
#endif//IS_BIG_ENDIAN1

  inline int is_big_endian2() {
    const uint16_t v = 0x0001;
    return *((uint8_t *) (&v)) == 0x00;
  }
  //
  //#ifndef IS_BIG_ENDIAN2
  //#define IS_BIG_ENDIAN2 (uint16_t *)
  //#endif

#ifndef IS_BIG_ENDIAN
#define IS_BIG_ENDIAN IS_BIG_ENDIAN1
#endif//IS_BIG_ENDIAN

#ifdef __cplusplus
}
#endif

#endif//COM_GITHUB_JINAHYA_NATIVE_H