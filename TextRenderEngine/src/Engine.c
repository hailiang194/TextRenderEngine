#include "TextRenderEngine/TextRenderEngine.h"

#include "PrivateDefine.h"



Engine_Error initTextRenderEngine(void)
{
    FT_Error initError;
    if(Core.initFlags & INIT_LIBRARY_FLAG)
        return ENGINE_ERROR_INITIALIZED;

    initError = FT_Init_FreeType(&Core.library);
    if(FT_Err_Ok != initError)
    {
        return (Engine_Error)initError;
    }
    Core.initFlags |= INIT_LIBRARY_FLAG;
    return ENGINE_ERROR_OK;
}

Engine_Error destroyTextRenderEngine(void)
{
    if(!(Core.initFlags & INIT_LIBRARY_FLAG))
        return ENGINE_ERROR_UNABLE_DESTROY;
    FT_Error destroyErr = FT_Done_FreeType(Core.library);
    memset(&Core, 0x0, sizeof(CoreData)); 
    return ENGINE_ERROR_OK;
}