#generated by bfcmake
cmake_minimum_required(VERSION 3.0.0 FATAL_ERROR)

#name of project
project(jeSuisUnNom)


#version
set(jeSuisUnNom_MAJOR_VERSION 0)
set(jeSuisUnNom_MINOR_VERSION 0)
set(jeSuisUnNom_PATCH_VERSION 0)
set(jeSuisUnNom_VERSION ${jeSuisUnNom_MAJOR_VERSION}.${jeSuisUnNom_MINOR_VERSION}.${jeSuisUnNom_PATCH_VERSION})

#package dependecies
find_package(blc REQUIRED)
find_package(Threads REQUIRED)

#source files
set(SRC
	bfc/src/exit.cpp
	bfc/src/__dummy.cpp
	bfc/src/usage.cpp
	bfc/src/flag.cpp
	bfc/src/actorRep.cpp
	bfc/src/masterThread.cpp
	bfc/src/bfcmain.cpp
	)


#header files
set(HEADER
	bfc/bfc/exit.hpp
	bfc/bfc/bfcmain.hpp
	bfc/bfc/actorRep.hpp
	bfc/bfc/globals.hpp
	bfc/bfc/actor.hpp
	bfc/bfc/flag.hpp
	bfc/bfc/outColor.hpp
	bfc/bfc/factory.hpp
	bfc/bfc/bfc.hpp
	bfc/bfc/usage.hpp
	bfc/bfc/masterThread.hpp
	)


set(GCC_COVERAGE_COMPILE_FLAGS "")

#create executable target named : jeSuisUnNom.
add_executable(jeSuisUnNom ${SRC} ${HEADER})

#headers directory
target_include_directories(jeSuisUnNom PRIVATE header)

add_subdirectory(src/)
add_subdirectory(dep/)
#linking libraries
target_link_libraries(jeSuisUnNom PRIVATE rsa)
target_link_libraries(jeSuisUnNom PRIVATE libtommath)
target_link_libraries(jeSuisUnNom PRIVATE libtomcrypt)
target_link_libraries(jeSuisUnNom PRIVATE obj_jeSuisUnNom)

#compilation propriety
set_property(TARGET jeSuisUnNom PROPERTY CXX_STANDARD 17)

add_definitions(${GCC_COVERAGE_COMPILE_FLAGS})
SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${GCC_COVERAGE_COMPILE_FLAGS}")

#end of cmake

