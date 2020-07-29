cmake_minimum_required(VERSION 2.6.4)
project(ballDetector)
find_package(qibuild)

include_directories(".")
target_link_libraries(ballDetector ${OpenCV_LIBS})
qi_create_bin(ballDetector main.cpp)
qi_use_lib(ballDetector 
    OPENCV2_CORE 
    OPENCV2_HIGHGUI 
    OPENCV2_IMGPROC 
    OPENCV2_VIDEO 
    OPENCV2_OBJDETECT 
    ALCOMMON 
    ALPROXIES ALVISION ALAUDIO)
