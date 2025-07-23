:: Here we compile multiple files and running build.bat automatically runs MADLADS.exe too
::EVerytime we run this build.bat g++ will recompile all the files and overwrite MADLADS.exe 
:: echo off prevents displaying of commands as they run
@echo off 


g++ main.cpp Player.cpp Goblin.cpp Mage.cpp Orc.cpp -o MADLADS.exe

:: Here we check if the Compilation was successful or not
::So since MADLADS.exe is overwriiten each time this if else loop just checks
::if MADLADS.exe was created successfully or not
::NOTE - use  start cmd /k MADLADS.exe If you want the game to open in a new window and instead of /k use /c if u want the new window to auto close
IF EXIST MADLADS.exe (
    ::Displays this message if compilation was successful
    echo NOW RUNNING MADLADS... 
    start cmd /c MADLADS.exe
) ELSE (
    :: Displays message if some error occured and MADLADS Wasent created
    echo ERROR OCCURED
)
::echo. creates a new line 
::pause ensures the window remains open and also says press any key to continue for exitting the game
echo.

