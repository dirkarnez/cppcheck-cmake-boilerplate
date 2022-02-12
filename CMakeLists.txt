cmake_minimum_required(VERSION 3.14)
set(CPPCHECK_XML_OUTPUT ON)
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -static")

project("cppcheck-cmake-boilerplate")

set(CMAKE_CXX_CPPCHECK "cppcheck") # the cppcheck.exe in %PATH%

add_executable(${PROJECT_NAME}
    "src/main.cpp"
)