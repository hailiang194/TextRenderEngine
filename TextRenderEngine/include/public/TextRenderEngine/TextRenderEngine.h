#ifndef _TEXT_RENDER_ENGINE_TEXT_RENDER_ENGINE_H_
#define _TEXT_RENDER_ENGINE_TEXT_RENDER_ENGINE_H_

typedef int EngineChar_t;
typedef int Engine_Error;

#if defined(_WIN32)
    #if defined(BUILD_LIBTYPE_SHARED)
        #if defined(__TINYC__)
            #define __declspec(x) __attribute__((x))
        #endif
        #define EXTENDAPI __declspec(dllexport)     // We are building the library as a Win32 shared library (.dll)
    #elif defined(USE_LIBTYPE_SHARED)
        #define EXTENDAPI __declspec(dllimport)     // We are using the library as a Win32 shared library (.dll)
    #endif
#endif

#ifndef EXTENDAPI
    #define EXTENDAPI       // Functions defined as 'extern' by default (implicit specifiers)
#endif

#ifdef __cplusplus
extern "C" 
{
#endif

//Error codes
#define ENGINE_ERROR_OK (Engine_Error)0x0
#define ENGINE_ERROR_INITIALIZED (Engine_Error)0x100
#define ENGINE_ERROR_UNABLE_DESTROY (Engine_Error)0x101

EXTENDAPI Engine_Error initTextRenderEngine(void);
EXTENDAPI Engine_Error destroyTextRenderEngine(void);

#ifdef __cplusplus
}
#endif

#endif //!_TEXT_RENDER_ENGINE_TEXT_RENDER_ENGINE_H_