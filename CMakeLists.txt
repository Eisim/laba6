cmake_minimum_required(VERSION 3.24)
SET (CMAKE_CXX_STANDARD 17)

project(expression2 CXX)

set(antlr4-bin ${CMAKE_CURRENT_SOURCE_DIR}/3rdparty/antlr4/runtime/Cpp/build/bin)


include_directories( 
${antlr4-bin}/lib 3rdparty/antlr4/runtime/Cpp/build/bin/bin/ 
${antlr4-bin}/include/
)

add_subdirectory(include)
add_subdirectory(samples)