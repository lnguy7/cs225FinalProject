# cs225FinalProject
F22 CS225 Final (Katy Sick, Bella Cruz, Ivan Ramos, Lucas Nguyen)

GitHub Organization

Code:
    All code used to compile the final project (BTree, Graph, and ReadCSV) can be found in the src directory.
    CSV files used for the final project/testing and CMakeLists can be found in the lib directory.
    The code for main, which comprises the majority of the functionality of the project, is in the entry directory.
    Build contains the CMakeFiles for whoever is compiling the final project. Deleting and recreating the build directory may be required.
    When compiling the code using the terminal command make, compilation may freeze around 20%. Should this happen, ctrl+z to exit the file, then attempt to make again. This worked consistently to deal with a problem that happened consistently during the development process.

Tests:
    Test cases can be found in the tests directory, in the file tests.cpp in the tests directory. Contained are multiple test cases for multiple different parts of the project.

Input/Output Data:
    The input data used for the final project can be seen within files containing "large_twitch" in the lib directory.
    These can be altered/replaced if there is different/updated information compared to what is present.
    Output data is collected within main and can be found in the file "graph.txt" in the entry directory.
    The file "graph.txt" contains the full output of this project.

Written Report:
    The written report is named report.md and can be found in the main cs225FinalProject folder, directly below this README.

Running Instructions:

    1. Open cs225FinalProject from git in VSCode or a similar coding workspace, using a remote container from docker.
    2. Make sure you are in cs225FinalProject directory.
    3. If directory build is present, enter it. Otherwise, use the command "mkdir build" in the terminal to make a build directory.
    4. If a new build directory was made, use command "cmake .." in the terminal to start C++ compiler.
       If a new build directory was not made, make sure build files and cmake present are compatible. if not, delete build directory and take steps above.
    5. Move to build directory and run the command "make" in a terminal. If make freezes when it is 18% - 28% finished. Press Ctrl+z to exit the
       process and run the "make" command again.
    6. By default, main.cpp uses the files "large_twitch_features.csv" and "large_twitch_edges.csv", located in mthe lib directory.
       If different data is to be used, these files have to be altered, following the format they are currently in, or either of the constructors found in READCSV.h/READCSV.cpp can be used, with the default constructor needing to be altered if that is the one to be used.
    7. By default, output is saved in a file called "graph.txt" located in the entry directory. If this is to be altered, make corrections in 
       line 293 of main.cpp.
    8. To run the program, move to the build directory and make sure the code has been compiled by using the command "make" in a terminal.
       From there, do ./main in the terminal as well, and wait for the code to run to completion. This is signified by the message
       "Analysis Complete" in the terminal.
    9. Check results in file "graph.txt", located in entry directory, or in a custom output file.

Testing:

    Some premade test cases are present in the tests.cpp file located in the tests directory. These can be altered or deleted if desired. New test cases have to follow the template used by the preexisting ones, specifically, the header having the two string parameters and any boolean checks using the REQUIRE function. To run the tests.cpp file, run the command "make" using the same instructions as seen in steps 1-6 in the Running Instructions. Also similarly to normal running, custom CSV objects can be used by using the correct file in the constructor for a READCSV object. Once the code is compiled using "make", run the command "./test", instead of "./main" to run the test cases.