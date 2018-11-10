@echo off
color 8E
echo Warning this will copy all your Visual Studio Project main cpp files
echo into a new folder called ~CPP FILES
timeout /t -1
for /d %%i in (*) DO (
	if "%%i" NEQ "~CPP FILES" (
	echo %%i/%%i/%%i.cpp 
	xcopy /y ".\%%i\%%i\%%i.cpp" ".\~CPP FILES\%%i.cpp*" 
	)
)
timeout /t -1


