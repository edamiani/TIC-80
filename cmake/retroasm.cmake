################################
# RetroAsm
################################

option(BUILD_WITH_RETROASM "RetroAsm Enabled" ${BUILD_WITH_ALL})
message("BUILD_WITH_RETROASM: ${BUILD_WITH_RETROASM}")

if(BUILD_WITH_RETROASM)

    add_library(retroasm ${TIC_RUNTIME} ${CMAKE_SOURCE_DIR}/src/api/retroasm.c)

    if(NOT BUILD_STATIC)
        set_target_properties(retroasm PROPERTIES PREFIX "")
    else()
        target_compile_definitions(retroasm INTERFACE TIC_BUILD_WITH_RETROASM)
    endif()

    target_link_libraries(retroasm PRIVATE runtime)
    target_include_directories(retroasm
        PRIVATE
        ${THIRDPARTY_DIR}/retroasm
        ${CMAKE_SOURCE_DIR}/include
        ${CMAKE_SOURCE_DIR}/src
    )

endif()