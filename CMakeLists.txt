message("Building Github info project...")

cmake_minimum_required(VERSION 3.29)

project(github_app VERSION 1.0 LANGUAGES CXX)

set(CMAKE_TOOLCHAIN_FILE "${CMAKE_BINARY_DIR}/conan_toolchain.cmake")

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_compile_options(-Wall -Wextra -Wpedantic -Werror)

add_executable(github_info_app main.cpp)

# target_include_directories(github_info_app PRIVATE ${CMAKE_CURRENT_LIST_DIR}/include)
find_package(github_info REQUIRED)

target_link_libraries(github_info_app PRIVATE github_info::github_info)