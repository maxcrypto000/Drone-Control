cmake_minimum_required(VERSION 3.14)
project(ControlloreSciame C)

# Impostiamo lo standard C11
set(CMAKE_C_STANDARD 11)

# FORZA IL LINKING STATICO DI GCC per evitare crash da DLL mancanti all'avvio
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -static -static-libgcc")
set(BUILD_SHARED_LIBS OFF CACHE BOOL "Forza librerie statiche" FORCE)

# Scarichiamo la libreria fmi4c
include(FetchContent)
FetchContent_Declare(
    fmi4c
    GIT_REPOSITORY https://github.com/robbr48/fmi4c.git
    GIT_TAG main
)
FetchContent_MakeAvailable(fmi4c)

# Indichiamo dove si trova il nostro codice sorgente principale
add_executable(controller src/main.c)

# Colleghiamo la libreria FMI al nostro eseguibile
target_link_libraries(controller PRIVATE fmi4c)