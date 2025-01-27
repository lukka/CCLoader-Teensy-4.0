# Determine the source file based on the operating system
if(APPLE)
    set(SOURCE_FILES ${CMAKE_CURRENT_SOURCE_DIR}/MacOSX/main.c)
elseif(WIN32)
    set(SOURCE_FILES ${CMAKE_CURRENT_SOURCE_DIR}/Windows/main.c)
elseif(UNIX)
    set(SOURCE_FILES ${CMAKE_CURRENT_SOURCE_DIR}/Linux/main.c)
else()
    message(FATAL_ERROR "Unknown platform")
endif()

# Add the executable
add_executable(CCLoader ${SOURCE_FILES})

# Specify target properties (optional, but useful)
set_target_properties(CCLoader PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"
    OUTPUT_NAME "CCLoader"
)
