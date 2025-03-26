project(TextRenderEngine VERSION 0.0.1)

set(ENGINE_SOURCES 
    src/Engine.c
)

add_library(${PROJECT_NAME} ${ENGINE_SOURCES})

if(BUILD_SHARED_LIBS)
    message(STATUS "Build shared lib for ${PROJECT_NAME}")
    if (WIN32)
        target_compile_definitions(${PROJECT_NAME}
                                   PRIVATE $<BUILD_INTERFACE:BUILD_LIBTYPE_SHARED>
                                   INTERFACE $<INSTALL_INTERFACE:USE_LIBTYPE_SHARED>
                                   )
    endif ()
    set_property(TARGET ${PROJECT_NAME} PROPERTY POSITION_INDEPENDENT_CODE ON)
else()
    message(STATUS "Build static lib for ${PROJECT_NAME}")
endif()

target_include_directories(${PROJECT_NAME}
    PUBLIC 
        $<INSTALL_INTERFACE:include>
        $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/include>
)

target_include_directories(${PROJECT_NAME} PRIVATE ${PROJECT_SOURCE_DIR}/private_headers)

add_subdirectory(vendors/freetype)

target_link_libraries(${PROJECT_NAME} PRIVATE freetype)