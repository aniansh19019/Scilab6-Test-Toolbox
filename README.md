This repository is a test toolbox for Scilab. It requires "thirdparty" directory which can be downloaded as "external-library.zip" file from the page: https://scilab.in/fossee-scilab-toolbox. The "thirdparty" directory contains compiled library for a simple "multiplication" function written in C. After copying the "thirdparty" directory to the toolbox directory, on the scilab console run "exec builder.sce" to build the toolbox and then run "exec loader.sce" to load the toolbox.  Type "help" in the scilab console and browse through the help content of "test_toolbox". The external-library.zip file also contains separate instructions to work with MinGW on Windows OS.

This toolbox overall demonstrates
1. How to add a function defined in C in scilab
2. How to add a function defined in Scilab in Scilab
3. How to write help for the added functions
4. How to create a toolbox out of the above functions.

# Instructions for running a demo
To compile the transpose library on Linux and Mac OS, use the following instructions:

```
cd ~/
git clone https://github.com/aniansh19019/Scilab6-Test-Toolbox
cd Scilab6-Test-Toolbox
cd test
./run.sh
```

To compile the library on Windows OS, execute the `test\run.bat` batch file.

To load and test the library, open scilab gui and execute the `Scilab6-Test-Toolbox/test/demo/transpose_demo.sce` script.

