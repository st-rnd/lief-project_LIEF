set(LIEF_PYTHON_MACHO_SRC
  "${CMAKE_CURRENT_SOURCE_DIR}/init.cpp"
  "${CMAKE_CURRENT_SOURCE_DIR}/enums.cpp"
  "${CMAKE_CURRENT_SOURCE_DIR}/pyUtils.cpp"
)

set(LIEF_PYTHON_MACHO_HDR
  "${CMAKE_CURRENT_SOURCE_DIR}/pyMachO.hpp"
  "${CMAKE_CURRENT_SOURCE_DIR}/init.hpp"
  "${CMAKE_CURRENT_SOURCE_DIR}/enums.hpp"
)

target_sources(pyLIEF PRIVATE ${LIEF_PYTHON_MACHO_SRC} ${LIEF_PYTHON_MACHO_HDR})
add_subdirectory(objects)
