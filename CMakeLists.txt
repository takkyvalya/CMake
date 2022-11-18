cmake_minimum_required(VERSION 3.25) 

set(PROJECT_NAME testF)						 
project("${PROJECT_NAME}")			


set(CMAKE_CXX_STANDARD 17)			 
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

include_directories("inc/")			 

add_executable("${PROJECT_NAME}" LaboratoryWork№6.cpp
								 func.hpp
								 file.txt
								 func.cpp)	