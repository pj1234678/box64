/*******************************************************************
 * File automatically generated by rebuild_wrappers.py (v2.3.0.19) *
 *******************************************************************/
#ifndef __wrappedxsltTYPES_H_
#define __wrappedxsltTYPES_H_

#ifndef LIBNAME
#error You should only #include this file inside a wrapped*.c file
#endif
#ifndef ADDED_FUNCTIONS
#define ADDED_FUNCTIONS() 
#endif

typedef void (*vFp_t)(void*);
typedef void (*vFpp_t)(void*, void*);
typedef int32_t (*iFppp_t)(void*, void*, void*);
typedef int32_t (*iFpppp_t)(void*, void*, void*, void*);

#define SUPER() ADDED_FUNCTIONS() \
	GO(xsltSetLoaderFunc, vFp_t) \
	GO(xsltSetCtxtSortFunc, vFpp_t) \
	GO(xsltRegisterExtModuleFunction, iFppp_t) \
	GO(xsltSetSecurityPrefs, iFppp_t) \
	GO(xsltRegisterExtFunction, iFpppp_t)

#endif // __wrappedxsltTYPES_H_
