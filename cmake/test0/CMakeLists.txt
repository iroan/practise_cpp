cmake_minimum_required(VERSION 3.1)
project(practice_cmake_test)
set (practice_cmake_test_version 0.0001)
configure_file(
	"${PROJECT_SOURCE_DIR}/config.h.in"
	"${PROJECT_BINARY_DIR}/config.h"
)
include_directories("${PROJECT_BINARY_DIR}")
add_executable(practice_cmake_test_exe demo.cpp)

