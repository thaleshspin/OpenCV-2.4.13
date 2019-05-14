#!/usr/bin/env python

from subprocess import call
import os

class cd:
    def __init__(self, newPath):
        self.newPath = os.path.expanduser(newPath)

    def __enter__(self):
        self.savedPath = os.getcwd()
        os.chdir(self.newPath)

    def __exit__(self, etype, value, traceback):
        os.chdir(self.savedPath)

print("Rinobot OpenCV Compiler")
print("")

print("Compiling OpenCV")
with cd("opencv"):
    cmd = "sh install16.sh"
    call(cmd.split(" "))
    

print("Done")