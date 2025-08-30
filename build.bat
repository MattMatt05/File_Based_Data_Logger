@echo off
REM Compile main.cpp and all cpp files in model folder
g++ -g -I src\main\model src\main\UI/main.cpp src\main\model/*.cpp -o src\main\UI/main.exe
