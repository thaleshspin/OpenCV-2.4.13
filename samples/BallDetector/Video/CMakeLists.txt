cmake_minimum_required(VERSION 2.6.4)
project(balldetector)
find_package(qibuild)

include_directories(".")
target_link_libraries(balldetector ${OpenCV_LIBS})
qi_create_bin(balldetector main.cpp)
qi_use_lib(balldetector 
    OPENCV2_CORE 
    OPENCV2_HIGHGUI 
    OPENCV2_IMGPROC 
    OPENCV2_VIDEO 
    OPENCV2_OBJDETECT 
    ALCOMMON 
    ALPROXIES ALVISION ALAUDIO)
