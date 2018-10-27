cmake_minimum_required(VERSION 2.6)
project(practice_cmake_test)
include_directories("${PROJECT_SOURCE_DIR}/sub")
add_subdirectory(sub)
set (EXTRA_LIBS ${EXTRA_LIBS} myprintf)
add_executable(practice_cmake_test_exe demo.cpp)
target_link_libraries(practice_cmake_test_exe ${EXTRA_LIBS}
