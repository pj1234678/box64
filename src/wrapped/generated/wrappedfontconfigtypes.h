/*******************************************************************
 * File automatically generated by rebuild_wrappers.py (v2.3.0.19) *
 *******************************************************************/
#ifndef __wrappedfontconfigTYPES_H_
#define __wrappedfontconfigTYPES_H_

#ifndef LIBNAME
#error You should only #include this file inside a wrapped*.c file
#endif
#ifndef ADDED_FUNCTIONS
#define ADDED_FUNCTIONS() 
#endif

typedef void* (*pFpV_t)(void*, ...);
typedef void* (*pFpA_t)(void*, va_list);

#define SUPER() ADDED_FUNCTIONS() \
	GO(FcObjectSetBuild, pFpV_t) \
	GO(FcObjectSetVaBuild, pFpA_t)

#endif // __wrappedfontconfigTYPES_H_
