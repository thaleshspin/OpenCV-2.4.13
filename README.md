# OpenCV-2.4.13
This is a How to for OpenCV 2.4.13 installer applied to Rinobot users

1) Remove all previously installed opencv versions from your system (sudo apt-get autoremove libopencv-dev python-opencv)
2) Clone this repository (git clone https://github.com/thaleshsp2/OpenCV-2.4.13.git)
3) Downgrade your GCC version to 4.8 using all the comands in the GCC-4.8.txt (ignore errors)
	- You need to choose 4.8 as default
4) python compileOpencv_Ubuntu1X.py
(If you get problems with the compilation like an error with C++ version, add "set (CMAKE_CXX_STANDARD 11)" at the top of opencv-2.4.13/CMakeLists.txt)

HOW TO:
Compile a OpenCV project:
1) cd samples/examples
2) mkdir build
3) cd build
4) cmake ..
5) make
6) ./program ../path/to/your/data

OPTIONAL:

To install the local toolchain from naoqi:
1) cd samples/naoqi/sdk
2) chmod +x installer.sh
3) Place the naoqi-sdk-2.1.4.13-linux64.tar.gz file at this folder
3) ./installer.sh

APPLICATION:
To test the naoqi SDK + OpenCv 2.4.13 w/ SPQR SPL Team BallDetector example using cascade method:
1) cd samples/naoqi/BallDetector (Image or Video exemples)
2) qibuild init (only needed for the 1st time running on this folder)
3) qibuild configure -c rinobot-local
4) qibuild make -c rinobot-local
5) ./build-rinobot-local/sdk/bin/ballDetector ../path/to/your/data
	




