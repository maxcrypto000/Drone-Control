# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file LICENSE.rst or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION ${CMAKE_VERSION}) # this file comes with cmake

# If CMAKE_DISABLE_SOURCE_CHANGES is set to true and the source directory is an
# existing directory in our source tree, calling file(MAKE_DIRECTORY) on it
# would cause a fatal error, even though it would be a no-op.
if(NOT EXISTS "C:/Users/maxbu/Desktop/uni/Verifica e validazione s/progetto/controllore/build/_deps/fmi4c-src")
  file(MAKE_DIRECTORY "C:/Users/maxbu/Desktop/uni/Verifica e validazione s/progetto/controllore/build/_deps/fmi4c-src")
endif()
file(MAKE_DIRECTORY
  "C:/Users/maxbu/Desktop/uni/Verifica e validazione s/progetto/controllore/build/_deps/fmi4c-build"
  "C:/Users/maxbu/Desktop/uni/Verifica e validazione s/progetto/controllore/build/_deps/fmi4c-subbuild/fmi4c-populate-prefix"
  "C:/Users/maxbu/Desktop/uni/Verifica e validazione s/progetto/controllore/build/_deps/fmi4c-subbuild/fmi4c-populate-prefix/tmp"
  "C:/Users/maxbu/Desktop/uni/Verifica e validazione s/progetto/controllore/build/_deps/fmi4c-subbuild/fmi4c-populate-prefix/src/fmi4c-populate-stamp"
  "C:/Users/maxbu/Desktop/uni/Verifica e validazione s/progetto/controllore/build/_deps/fmi4c-subbuild/fmi4c-populate-prefix/src"
  "C:/Users/maxbu/Desktop/uni/Verifica e validazione s/progetto/controllore/build/_deps/fmi4c-subbuild/fmi4c-populate-prefix/src/fmi4c-populate-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "C:/Users/maxbu/Desktop/uni/Verifica e validazione s/progetto/controllore/build/_deps/fmi4c-subbuild/fmi4c-populate-prefix/src/fmi4c-populate-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "C:/Users/maxbu/Desktop/uni/Verifica e validazione s/progetto/controllore/build/_deps/fmi4c-subbuild/fmi4c-populate-prefix/src/fmi4c-populate-stamp${cfgdir}") # cfgdir has leading slash
endif()
