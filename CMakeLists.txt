cmake_minimum_required(VERSION 3.20)

project(SchoolTerminal__)

# Version C++
set(CMAKE_CXX_STANDARD 20)

# Inclure les headers
include_directories(headers)

# Ajouter le dossier source
add_subdirectory(src)