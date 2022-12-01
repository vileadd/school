#NoEnv  ; Recommended for performance and compatibility with future AutoHotkey releases.
; #Warn  ; Enable warnings to assist with detecting common errors.
SendMode Input  ; Recommended for new scripts due to its superior speed and reliability.
SetWorkingDir %A_ScriptDir%  ; Ensures a consistent starting directory.

F8::
StartTime := A_TickCount
loop
{
loop
{
ControlSend,, {4 down}, ahk_exe javaw.exe
ControlSend,, {Space down}, ahk_exe javaw.exe
RandomSleep(30,400)
ControlSend,, {4 up}, ahk_exe javaw.exe
ControlSend,, {Space up}, ahk_exe javaw.exe
RandomSleep(100,800)
} Until A_TickCount - StartTime > 1000

loop, 25{
ControlSend,, {Space}, ahk_exe javaw.exe
Sleep 1000
}
Sleep 500

loop, 4{
ControlSend,, {3 down}, ahk_exe javaw.exe
Sleep 500
ControlSend,, {3 up}, ahk_exe javaw.exe
}

Sleep 5000
loop, 1{
ControlSend,, {Space down}, ahk_exe javaw.exe
Sleep 5000
ControlSend,, {S down}, ahk_exe javaw.exe
Sleep 3000
ControlSend,, {Space up}, ahk_exe javaw.exe
ControlSend,, {S up}, ahk_exe javaw.exe
}
Sleep 2000
ControlSend,, {1 down}, ahk_exe javaw.exe
Sleep 1000
ControlSend,, {1 up}, ahk_exe javaw.exe
ControlSend,, {a down}, ahk_exe javaw.exe
RandomSleep(340,390)
ControlSend,, {a up}, ahk_exe javaw.exe
Sleep 100
ControlSend,, {w down}, ahk_exe javaw.exe
RandomSleep(2650,2700)
ControlSend,, {w up}, ahk_exe javaw.exe
Sleep 100
ControlSend,, {d down}, ahk_exe javaw.exe
Sleep 100
ControlSend,, {d up}, ahk_exe javaw.exe
Sleep 100
ControlSend,, {w down}, ahk_exe javaw.exe
RandomSleep(1200,1250)
ControlSend,, {w up}, ahk_exe javaw.exe
Sleep 100
ControlSend,, {a down}, ahk_exe javaw.exe
Sleep 100
ControlSend,, {a up}, ahk_exe javaw.exe
Sleep 100
ControlSend,, {w down}, ahk_exe javaw.exe
Sleep 3000
ControlSend,, {w up}, ahk_exe javaw.exe
Sleep 100
ControlSend,, {d down}, ahk_exe javaw.exe
Sleep 100
ControlSend,, {d up}, ahk_exe javaw.exe
ControlSend,, {E}, ahk_exe javaw.exe
RandomSleep(3000,4500)
}
return

ControlSend,, {Enter}, ahk_exe javaw.exe
RandomSleep(30,100)
ControlSend,, any, ahk_exe javaw.exe
RandomSleep(30,100)
ControlSend,, alphas?, ahk_exe javaw.exe
RandomSleep(30,100)
ControlSend,, {Enter}, ahk_exe javaw.exe
RandomSleep(30,100)
return 




Pause::Pause
F9::Pause 
return

RandomSleep(min,max)
{
Random, random, %min%, %max%
Sleep %random%
}
;1200000