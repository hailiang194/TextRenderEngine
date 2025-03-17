cmake_minimum_required(VERSION 3.5)
project(TextRenderEngine)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake")

include(CMakeOptions)

add_subdirectory(TextRenderEngine)

if(${BUILD_TEXT_RENDER_ENGINE_EXAMPLES})
    add_subdirectory(examples)
endif()