# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Chat_PRO_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Chat_PRO_autogen.dir\\ParseCache.txt"
  "Chat_PRO_autogen"
  )
endif()
