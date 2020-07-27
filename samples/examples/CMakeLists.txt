cmake_minimum_required(VERSION 2.8)
project( opencv )
find_package( OpenCV REQUIRED )
include_directories( ${OpenCV_INCLUDE_DIRS} )

add_executable(text text.cpp)
target_link_libraries( text ${OpenCV_LIBS} )

add_executable(image image.cpp)
target_link_libraries( image ${OpenCV_LIBS} )

add_executable(frameCapture frame.cpp)
target_link_libraries( frameCapture ${OpenCV_LIBS} )

add_executable(displayVideo displayVideo.cpp)
target_link_libraries( displayVideo ${OpenCV_LIBS} )
