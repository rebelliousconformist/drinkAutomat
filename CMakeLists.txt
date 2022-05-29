cmake_minimum_required(VERSION 3.0.0)
project(inh_poly VERSION 0.1.0)

enable_testing()

include_directories(include)

add_library(coin src/baseCoin.cpp 
src/derivedCoins.cpp )

add_library(drink src/baseDrink.cpp 
src/derivedDrink.cpp )

add_executable(inh_poly main.cpp 
src/DrinkSelector.cpp
src/PaymentSystem.cpp
src/automat.cpp)

target_link_libraries(inh_poly coin drink)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
