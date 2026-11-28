#i read the documentation for writing a CMakeLists.txt file, but i didnt want to waste too much time writing this

#the two essential calls
cmake_minimum_required(VERSION 3.14) #pi :)
project(Veryn CXX) #yeah, this will be about Veryn

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)

include(FetchContent)
FetchContent_Declare(
    raylib
    GIT_REPOSITORY https://github.com/raysan5/raylib.git
    GIT_TAG 5.5
)
FetchContent_MakeAvailable(raylib)

#remember to add new .cpp files here as the project grows (e.g., main.cpp player.cpp world.cpp)
add_executable(${PROJECT_NAME}
    main.cpp
)

target_link_libraries(${PROJECT_NAME} PRIVATE raylib) #we're only using raylib, this won't be anything fancy
