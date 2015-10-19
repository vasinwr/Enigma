cmake_minimum_required(VERSION 3.3)
project(cenigma_vw214)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    plugboards/I.pb
    plugboards/II.pb
    plugboards/III.pb
    plugboards/IV.pb
    plugboards/null.pb
    plugboards/V.pb
    rotors/I.rot
    rotors/II.rot
    rotors/III.rot
    rotors/IV.rot
    rotors/V.rot
    rotors/VI.rot
    rotors/VII.rot
    Main.cpp
    makefile
    moby.txt.gz
    README.txt
    tests.py Rotor.cpp Rotor.h Reflector.cpp Reflector.h Plugboard.cpp Plugboard.h Machine.cpp Machine.h)

add_executable(cenigma_vw214 ${SOURCE_FILES})