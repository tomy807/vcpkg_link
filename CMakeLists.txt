project(vcpkg_link)
cmake_minimum_required(VERSION 3.20.0)
set(CMAKE_PREFIX_PATH "/home/tomy807/vcpkg/installed/x64-linux/share")
set(TEST_BINARY ${PROJECT_NAME}_test)

add_executable(${TEST_BINARY} ./src/test.cpp)
find_package(fmt CONFIG REQUIRED)
target_link_libraries(${TEST_BINARY} PRIVATE fmt::fmt)