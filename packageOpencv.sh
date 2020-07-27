#!/bin/bash

mkdir -p cv/include
mkdir -p cv/lib

cp -R opencv/opencv-2.4.13/release/install/include/opencv-2.4.13/opencv cv/include
cp -R opencv/opencv-2.4.13/release/install/include/opencv-2.4.13/opencv2 cv/include
cp opencv/opencv-2.4.13/release/install/lib/libopencv_* cv/lib/

