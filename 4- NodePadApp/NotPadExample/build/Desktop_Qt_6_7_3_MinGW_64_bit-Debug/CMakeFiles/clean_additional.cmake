# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\NotPadExample_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\NotPadExample_autogen.dir\\ParseCache.txt"
  "NotPadExample_autogen"
  )
endif()
