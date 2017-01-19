
#include(GTest.cmake)

message(STATUS "GTEST_BOTH_LIBRARIES is " ${GTEST_BOTH_LIBRARIES})

#include_directories(${GTEST_INCLUDE_DIRS})

file(GLOB FACTORIAL_TEST_FILES "*.cpp")
set(FACTORIAL_TEST_FILES ${FACTORIAL_TEST_FILES} PARENT_SCOPE)
message(STATUS "FACTORIAL_TEST_FILES is " ${FACTORIAL_TEST_FILES})

#add_executable(factorial_test factorialcomputertest_test.cpp ../src/factorialcomputer.cpp)
#target_link_libraries(factorial_test ${GTEST_BOTH_LIBRARIES})

#GTEST_ADD_TESTS(factorial_test "" factorialcomputertest_test.cpp)

