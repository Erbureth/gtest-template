cmake_minimum_required(VERSION 2.6)
project(testing_template)

include(test/GTest.cmake)

add_subdirectory(src)
add_subdirectory(test)

message(STATUS "FACTORIAL_FILES in top-level is " ${FACTORIAL_FILES})
message(STATUS "FACTORIAL_TEST_FILES in top-level is " ${FACTORIAL_TEST_FILES})
message(STATUS "GTEST_BOTH_LIBRARIES in top-level is " ${GTEST_BOTH_LIBRARIES})

add_executable(factorial "main.cpp" ${FACTORIAL_FILES})


enable_testing()

add_executable(factorial_test ${FACTORIAL_TEST_FILES} ${FACTORIAL_FILES})
target_link_libraries(factorial_test ${GTEST_BOTH_LIBRARIES})

foreach(FACTORIAL_TEST_FILE ${FACTORIAL_TEST_FILES})
    message(STATUS "Adding tests from " ${FACTORIAL_TEST_FILE})
    GTEST_ADD_TESTS(factorial_test "" ${FACTORIAL_TEST_FILE})
endforeach()

#install(TARGETS testingtemplate RUNTIME DESTINATION bin)
