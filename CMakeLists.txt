cmake_minimum_required(VERSION 3.0.0)
project(duplicate-either- VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(duplicate-either- main.c heuristics.c print.c problem.c solution.c solve.c timer.c)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
