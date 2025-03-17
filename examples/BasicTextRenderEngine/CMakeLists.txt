project(BasicTextRenderEngine)


add_executable(${PROJECT_NAME} src/main.c)
if(BUILD_SHARED_LIBS)
    target_link_directories(${PROJECT_NAME} PUBLIC $<TARGET_FILE_DIR:TextRenderEngine>)
endif()
target_link_libraries(${PROJECT_NAME} PUBLIC TextRenderEngine)