
#ifndef RNP_API_H
#define RNP_API_H

#ifdef RNP_STATIC
#  define RNP_API
#  define RNP_RNP_NO_EXPORT
#else
#  ifndef RNP_API
#    ifdef librnp_EXPORTS
        /* We are building this library */
#      define RNP_API 
#    else
        /* We are using this library */
#      define RNP_API 
#    endif
#  endif

#  ifndef RNP_RNP_NO_EXPORT
#    define RNP_RNP_NO_EXPORT 
#  endif
#endif

#ifndef RNP_RNP_DEPRECATED
#  define RNP_RNP_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef RNP_RNP_DEPRECATED_EXPORT
#  define RNP_RNP_DEPRECATED_EXPORT RNP_API RNP_RNP_DEPRECATED
#endif

#ifndef RNP_RNP_DEPRECATED_NO_EXPORT
#  define RNP_RNP_DEPRECATED_NO_EXPORT RNP_RNP_NO_EXPORT RNP_RNP_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef RNP_RNP_NO_DEPRECATED
#    define RNP_RNP_NO_DEPRECATED
#  endif
#endif

#endif /* RNP_API_H */
