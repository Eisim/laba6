project(include)

file(GLOB srcs "*.cpp*")
file(GLOB hdrs "*.h*")

add_executable(include ${srcs} ${hdrs})

include_directories(include ../3rdparty/antlr4/runtime/Cpp/build/bin/bin ../3rdparty/antlr4/runtime/Cpp/build/bin/include/antlr4-runtime
)

target_link_libraries(include PUBLIC  ../3rdparty/antlr4/runtime/Cpp/build/bin/lib/antlr4-runtime.lib ../3rdparty/antlr4/runtime/Cpp/build/bin/lib/antlr4-runtime-static.lib)
