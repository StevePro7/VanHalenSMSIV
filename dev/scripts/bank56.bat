:: bank56
@echo off

cd ..
cd banks
folder2c bank56 bank56 56

sdcc --debug -c --no-std-crt0 -mz80 --Werror --opt-code-speed --constseg BANK56 bank56.c

del *.asm > nul; del *.lst > nul; del *.sym > nul

cd ..
cd scripts
