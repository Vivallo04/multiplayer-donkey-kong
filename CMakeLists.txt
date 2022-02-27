cmake_minimum_required(VERSION 3.21)
set(CMAKE_TOOLCHAIN_FILE ${CMAKE_CURRENT_SOURCE_DIR}/vcpkg/scripts/buildsystems/vcpkg.cmake
        CACHE STRING "Vcpkg toolchain file")
project(multiplayer_donkey_kong)

set(CMAKE_CXX_STANDARD 20)

add_executable(multiplayer_donkey_kong main.cpp src/game/Game.cpp src/game/Game.hpp src/util/Utility.hpp src/util/Errors.hpp src/server/Server.cpp src/server/Server.hpp)
include_directories(assets usr/include c:/SDK/SFML-2.5.1/include/SFML)


# Configure Socket.io
add_compile_definitions(BOOST_DATE_TIME_NO_LIB, BOOST_REGEX_NO_LIB, ASIO_STANDALONE,
        _WEBSOCKETPP_CPP11_STL_, _WEBSOCKETPP_CPP11_FUNCTIONAL_)

# Configure SFML
set(SFML_ROOT c:/SDK/SFML-2.5.1)
set(CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake_modules")
find_package(SFML REQUIRED system window graphics network audio)

if (SFML_FOUND)
    include_directories(${SFML_INCLUDE_DIR})
    target_link_libraries(multiplayer_donkey_kong ${SFML_LIBRARIES}  ${SFML_DEPENDENCIES})
endif()

file(COPY assets DESTINATION ${CMAKE_BINARY_DIR})

# Copy dlls to build
if (WIN32)
    file(GLOB BINARY_DEP_DLLS "${SFML_INCLUDE_DIR}/../bin/*.dll")
    file(COPY ${BINARY_DEP_DLLS} DESTINATION ${CMAKE_BINARY_DIR})
    file(GLOB MINGW_DEP_DLLS "c:/SDK/mingw64/bin")
    file(COPY ${MINGW_DEP_DLLS} DESTINATION ${CMAKE_BINARY_DIR})
endif()