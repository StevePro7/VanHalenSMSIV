@echo off
:: 1978

cd ..
cd banks

folder2c bank17 bank17 17

sdcc --debug -c --no-std-crt0 -mz80 --Werror --opt-code-speed --constseg BANK17 bank17.c

del *.asm > nul; del *.lst > nul; del *.sym > nul

cd ..
cd scripts