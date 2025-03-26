#include <stdio.h>
#include <stdlib.h>
#include "TextRenderEngine/TextRenderEngine.h"

int main()
{
    Engine_Error initError;
    Engine_Error destroyError;
    initError = initTextRenderEngine();
    if(ENGINE_ERROR_OK != initError)
    {
        fprintf(stderr, "Failed to initialize Text Render, code=%d\n", initError);
        return EXIT_FAILURE;
    }
    printf("Initialized TextRenderEngine\n");
    destroyError = destroyTextRenderEngine();
    if(ENGINE_ERROR_OK != destroyError)
    {
        fprintf(stderr, "Failed to initialize Text Render, code=%d\n", initError);
        return EXIT_FAILURE;
    }
    printf("Uninitialized TextRenderEngine\n");
    return EXIT_SUCCESS;
}