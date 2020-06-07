# OpenCV-2.4.13-Compiler-HowTo


1) Clone this repository (git clone https://github.com/thaleshsp2/OpenCV-2.4.13-Compiler-HowTo)
2) Downgrade your GCC version to 4.8 using all the comands in the GCC-4.8.txt (ignore errors)
	- You need to choose 4.8 as default
3) python compileOpencv_Ubuntu1X.py
(If you get problems with the compilation like an error with C++ version, add "set (CMAKE_CXX_STANDARD 11)" at the top of opencv-2.4.13/CMakeLists.txt)

OPTIONAL:
To use the OpenCV for the naoqi SDK:
1) ./packageOpencv.sh
2) cd cv
3) cp -r include/ lib/ ../path/to/your/naoqi/sdk
This will replace the opencv files in your sdk to solve some problems with versions.

APPLICATION:
To test the naoqi SDK + OpenCv 2.4.13 w/ SPQR SPL Team BallDetector example using cascade method:
1) cd BallDetector (Image or Video exemples)
2) qibuild init (only need for the 1st time running on this folder)
3) qibuild configure -c rinobot-local
4) qibuild make -c rinobot-local
5) ./build-rinobot-local/sdk/bin/ballDetector ../path/to/your/data
	




