cmake_minimum_required(VERSION 3.31)

project(SchoolTerminal__)

# Version C++
set(CMAKE_CXX_STANDARD 26)

# Inclure les headers
include_directories(headers)

# Ajouter le dossier source
add_subdirectory(src)

if(WIN32 AND NOT CMAKE_GENERATOR)
    set(CMAKE_GENERATOR "MinGW Makefiles" CACHE INTERNAL "" FORCE)
endif()