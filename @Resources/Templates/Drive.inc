[Rainmeter]
@include=#@#Rainmeter.inc
Update=5000
DragGroup=DriveGroup
Draggable=0
;OnRefreshAction=[!SetVariable "{FileName}Active" "1" #ROOTCONFIG#\Drives]
;OnCloseAction=[!SetVariable "{FileName}Active" "0" #ROOTCONFIG#\Drives]
;OnRefreshAction=[!CommandMeasure MeasureScript Activate('{LETTER}') #ROOTCONFIG#\Drives]
OnUpdateAction=[!CommandMeasure MeasureScript IsAlive('{LETTER}') #ROOTCONFIG#\Drives]
OnCloseAction=[!CommandMeasure MeasureScript Deactivate('{LETTER}') #ROOTCONFIG#\Drives]
LeftMouseDoubleClickAction=["{LETTER}:"]

[Metadata]
Name=Minimalistic Drives Disk {LETTER}:
Author=Xarksass
Information=Display Drive {LETTER}: Name and Usage/Load | - Generated Automatically | - You can change the size with the scroll of your mouse | - Double-clic to open Drive {LETTER}: root | Based on Extenda Simplistic Drive C by apexxx-sensei
Version=1.0.1
License=CC BY-NC-SA 4.0 | http://creativecommons.org/licenses/by-nc-sa/4.0/

[Variables]
Disk={LETTER}:
Scale=0.40

@include=#@#Templates\DriveTemplate.inc
