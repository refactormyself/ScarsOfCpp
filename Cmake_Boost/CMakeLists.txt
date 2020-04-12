#cmake_minimum_required(VERSION 3.1)
#long story https://cliutils.gitlab.io/modern-cmake/chapters/basics.html

cmake_minimum_required(VERSION 3.1...3.15)

if(${CMAKE_VERSION} VERSION_LESS 3.12)
    cmake_policy(VERSION ${CMAKE_MAJOR_VERSION}.${CMAKE_MINOR_VERSION})
endif()

#even this will fail sometimes - 'aint no pain, 'thout 'dows

project(BoostedProject VERSION 1.0
		       DESCRIPTION "A boosted project of pain"
                       LANGUAGES CXX)

# The above describes our project. So we now want to tell CMake
# we want to 'make' or 'build' an executable a file out of a group of src files.
# Guess what ?!

#add_executable(exec_of_BoostedPrj main.cpp head.h) moved downstairs!

# okay maybe we are creating another painful to use but effecient library
# you only need to loose half of your brain cells trying to compile once you're done
# the world is yours to control with the rest half of your brain, even if you have
# actually forgotten why you were compiling the library in the first place.

#add_library(libBoostedPrj_v_0a1b2c main.cpp head.h)

# HERE COMES THE PAIN: TARGET
#target_include_directories(exec_of_BoostedPrj PUBLIC include)


set(Boost_USE_STATIC_LIBS OFF) #enable dynamic linking

# search for unit_test_framework
#find_package(Boost REQUIRED COMPONENTS unit_test_framework)
find_package(Boost REQUIRED)
include_directories(${Boost_INCLUDE_DIR})

# create an executable target
add_executable(exec_of_BoostedPrj main.cpp head.h)

# link Boost libraries to the new target
target_link_libraries(exec_of_BoostedPrj ${Boost_LIBRARIES})


