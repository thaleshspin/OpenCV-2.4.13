#!/bin/bash

echo "Rinobot Naoqi Local Toolchain Setup"

echo "Initializing qibuild"
qibuild init
echo "Extracting"
tar -vzxf naoqi-sdk-2.1.4.13-linux64.tar.gz
echo ""
echo "Creating toolchain named as rinobot-local"      
qitoolchain create rinobot-local naoqi-sdk-2.1.4.13-linux64/toolchain.xml
echo "Adding config"
qibuild add-config rinobot-local -t rinobot-local
echo "Finished"
echo "To configure a project: qibuild configure -c rinobot-local"
echo "To make a project: qibuild make -c rinobot-local"
