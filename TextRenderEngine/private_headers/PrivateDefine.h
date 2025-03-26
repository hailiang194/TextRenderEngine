#ifndef _TEXT_RENDER_ENGINE_PRIVATE_HEADERS_PRIVATE_DEFINE_H_
#define _TEXT_RENDER_ENGINE_PRIVATE_HEADERS_PRIVATE_DEFINE_H_

#include <ft2build.h>
#include FT_FREETYPE_H

typedef unsigned int FlagType;

//bit value for CoreData.initFlags
#define INIT_LIBRARY_FLAG (FlagType)0x1

typedef struct CoreData
{
    FT_Library library;
    FlagType initFlags;
} CoreData;

CoreData Core = { 0 };

#endif //!_TEXT_RENDER_ENGINE_PRIVATE_HEADERS_PRIVATE_DEFINE_H_