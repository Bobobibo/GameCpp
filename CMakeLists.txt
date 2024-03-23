cmake_minimum_required(VERSION 3.27)
project(123)

set(CMAKE_CXX_STANDARD 17)



cmake_minimum_required(VERSION 3.19)
project(123 C)
set(CMAKE_C_STANDARD 99)
add_executable(123


        square.cpp

        AllegroBase.cpp


)
target_link_libraries (123 allegro allegro_primitives )
