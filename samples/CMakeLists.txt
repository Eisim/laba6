project(samples)

file(GLOB srcs "*.cpp*")

add_executable(samples ${srcs})

target_include_directories(samples PUBLIC ../include 
${antlr4-bin}/bin
${antlr4-bin}/include/antlr4-runtime
)

target_link_libraries(samples PUBLIC  
${antlr4-bin}/lib/antlr4-runtime.lib
)


