cmake_minimum_required(VERSION 3.0.0)
project(inh_poly VERSION 0.1.0)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/release-1.11.0.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

#gTest
add_executable(coinClassTest test/coin_test.cpp)
target_link_libraries(coinClassTest gtest_main coinLib)

include(GoogleTest)
gtest_discover_tests(coinClassTest)   #pass the exec name written above

#poly test
include_directories(include)

add_library(coinLib src/baseCoin.cpp 
src/derivedCoins.cpp )

add_library(drinkLib src/baseDrink.cpp 
src/derivedDrink.cpp )

add_executable(inh_poly main.cpp 
src/DrinkSelector.cpp
src/PaymentSystem.cpp
src/automat.cpp)

target_link_libraries(inh_poly coinLib drinkLib)



set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
