cmake_minimum_required(VERSION 3.0)
project (Fibonacci)

enable_testing()

add_executable(Fibonacci Fibonacci.c)


file(GLOB_RECURSE TESTFILES RELATIVE "${CMAKE_CURRENT_SOURCE_DIR}" "*.ctest")
foreach(TESTFILE ${TESTFILES})
     add_test(NAME ${TESTFILE} WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
              COMMAND sh ${CMAKE_CURRENT_SOURCE_DIR}/${TESTFILE})
endforeach()

# A custom command, distclean, to remove files that are created
add_custom_target(distclean COMMAND rm -rf CMakeCache.txt CMakeFiles
                  CTestTestfile.cmake Makefile Testing cmake_install.cmake)