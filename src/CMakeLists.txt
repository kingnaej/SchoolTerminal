# Tous les fichiers source
file(GLOB SOURCES "*.cpp")

add_executable(SchoolTerminal ${SOURCES})

install(TARGETS SchoolTerminal DESTINATION bin)

install(DIRECTORY "${CMAKE_SOURCE_DIR}/data" DESTINATION bin)