#ifndef _EDC_CRC32_H
#define _EDC_CRC32_H

#include <stdint.h>
#if defined(SF2000)
#include <sys/types.h>
#endif

#ifdef __cplusplus
extern "C" {
#endif

uint32_t EDCCrc32(const unsigned char*, int);

#ifdef __cplusplus
}
#endif

#endif
