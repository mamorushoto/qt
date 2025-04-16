# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\gotocell_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\gotocell_autogen.dir\\ParseCache.txt"
  "gotocell_autogen"
  )
endif()
