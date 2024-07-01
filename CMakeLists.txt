cmake_minimum_required(VERSION 3.14)
project(BigArrayProject)

set(CMAKE_CXX_STANDARD 17)

# Указываем директорию для включаемых файлов
include_directories(
    ${PROJECT_SOURCE_DIR}/include
    ${PROJECT_SOURCE_DIR}/src
)

file(GLOB all_SRCS
    "${PROJECT_SOURCE_DIR}/src/*.cpp"
)

option(MATCH_TESTS "build tests (or no)" ON)

# Добавляем библиотеку
add_library(BigArrayLib ${all_SRCS})

# Создаем исполняемый файл и линкуем с библиотекой
add_executable(BigArrayProject ${PROJECT_SOURCE_DIR}/src/main.cpp)
target_link_libraries(BigArrayProject BigArrayLib)

if (MATCH_TESTS)
    enable_testing()
    add_executable(runTests ${PROJECT_SOURCE_DIR}/tests/tests.cpp)
    target_link_libraries(runTests BigArrayLib)
    add_test(NAME runTests COMMAND runTests)
endif()