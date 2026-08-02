
####### Expanded from @PACKAGE_INIT@ by configure_package_config_file() #######
####### Any changes to this file will be overwritten by the next CMake run ####
####### The input file was config.cmake.in                            ########

get_filename_component(PACKAGE_PREFIX_DIR "${CMAKE_CURRENT_LIST_DIR}/../../" ABSOLUTE)

macro(check_required_components _NAME)
  foreach(comp ${${_NAME}_FIND_COMPONENTS})
    if(NOT ${_NAME}_${comp}_FOUND)
      if(${_NAME}_FIND_REQUIRED_${comp})
        set(${_NAME}_FOUND FALSE)
      endif()
    endif()
  endforeach()
endmacro()

####################################################################################

include(${CMAKE_CURRENT_LIST_DIR}/fmi4c-targets.cmake)

set(FMI4C_BUILT_SHARED ON)
set(FMI4C_INCLUDES_ZLIB OFF)
set(FMI4C_USES_SYSTEM_ZIP ON)

if (NOT ${FMI4C_USES_SYSTEM_ZIP})

    # fmi4c needs to find system zlib in the following cases
    #   Built shared but does not include zlib (Target fmi4c::zlibstatic missing)
    #   Built static but does not include zlib (Target fmi4c::zlibstatic missing)

    # fmi4c should not look for system zlib in the following cases
    #   Built shared and includes zlib         (Target fmi4c::zlibstatic missing)
    #   Built static and includes zlib         (Target fmi4c::zlibstatic exists)

    if (NOT TARGET fmi4c::zlibstatic)
        if(NOT (${FMI4C_BUILT_SHARED} AND ${FMI4C_INCLUDES_ZLIB}))
            message(STATUS "Looking for ZLIB for fmi4c")
            find_package(ZLIB MODULE)
            message(STATUS "ZLIB_FOUND: ${ZLIB_FOUND}")
            message(STATUS "ZLIB_INCLUDE_DIRS: ${ZLIB_INCLUDE_DIRS}")
            message(STATUS "ZLIB_VERSION: ${ZLIB_VERSION} ${ZLIB_VERSION_STRING}")
            message(STATUS "ZLIB_LIBRARIES: ${ZLIB_LIBRARIES}")
        endif()
    endif()

endif()

check_required_components(fmi4c)
