enable_testing()

message("LLVM: ${LLVM_INCLUDE_DIRS}")

set(GTEST_INCLUDE_DIR /home/chfast/Projects/llvm/releases/3.8.1.src/utils/unittest/googletest/include)

find_package(GTest REQUIRED)

add_executable(foo foo.cc)
target_link_libraries(foo GTest::GTest GTest::Main)

add_test(AllTestsInFoo foo)
