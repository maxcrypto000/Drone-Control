#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "fmi4c::fmi4c" for configuration "Debug"
set_property(TARGET fmi4c::fmi4c APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(fmi4c::fmi4c PROPERTIES
  IMPORTED_IMPLIB_DEBUG "${_IMPORT_PREFIX}/lib/libfmi4cd.dll.a"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/bin/libfmi4cd.dll"
  )

list(APPEND _cmake_import_check_targets fmi4c::fmi4c )
list(APPEND _cmake_import_check_files_for_fmi4c::fmi4c "${_IMPORT_PREFIX}/lib/libfmi4cd.dll.a" "${_IMPORT_PREFIX}/bin/libfmi4cd.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
