cmake_minimum_required(VERSION 3.14)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Wextra -Werror -O3 -mtune=native -march=native -flto")

project(lox LANGUAGES C)

set(SOURCES
	src/chunk.c
	src/compiler.c
	src/debug.c
	src/main.c
	src/memory.c
	src/object.c
	src/scanner.c
	src/table.c
	src/value.c
	src/vm.c
	)

add_executable(${PROJECT_NAME} ${SOURCES})
include_directories(${PROJECT_SOURCE_DIR}/include)
set_target_properties(${PROJECT_NAME} PROPERTIES C_STANDARD 23)
