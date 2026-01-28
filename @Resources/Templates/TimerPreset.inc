[MeterPreset{ID}Container]
Group=Presets
Meter=IMAGE
MeterStyle=TimerContainer
SolidColor=0,0,0,#PresetAlpha{ID}#
Hidden=#HidePresets#

[MeasurePreset{ID}Flashing]
Measure=Plugin
Plugin=ActionTimer
ActionList1=Repeat FadeOut,25,20 | Wait 1 | Repeat FadeIn,25,20
ActionList2=Wait 100 | Repeat Flashing,1100,10 | Wait 1 | Reset
Flashing=[!CommandMeasure MeasurePreset{ID}Flashing "Execute 1"][!UpdateMeasure MeasurePreset{ID}Flashing]
FadeIn=[!SetVariable PresetAlpha{ID} (Clamp((#PresetAlpha{ID}#+12.75),0,255))][!UpdateMeasure MeasurePreset{ID}Flashing][!UpdateMeter MeterPreset{ID}Container]
FadeOut=[!SetVariable PresetAlpha{ID} (Clamp((#PresetAlpha{ID}#-12.75),0,255))][!UpdateMeasure MeasurePreset{ID}Flashing][!UpdateMeter MeterPreset{ID}Container]
Reset=[!SetVariable PresetAlpha{ID} 255][!DisableMeasure MeasurePreset{ID}Timer][!CommandMeasure MeasurePreset{ID}Flashing "Stop 2"][!UpdateMeasure MeasurePreset{ID}Flashing]
IgnoreWarnings=1
DynamicVariables=1

[MeasurePreset{ID}Timer]
Measure=Calc
Formula=0
ifCondition=(MeasurePreset{ID}Timer <= 0)
ifTrueAction=[!CommandMeasure MeasurePreset{ID}Flashing "Execute 2"]
ifConditionMode=1
MinValue=0
MaxValue=100
DynamicVariables=1
Disabled=1

[MeterPreset{ID}TimerIcon]
Container=MeterPreset{ID}Container
Meter=String
MeterStyle=StyleIcon | TimerIcon
Text=#icoTimerEmpty#
MouseOverAction=[!SetOption MeterPreset{ID}TimerIcon Text #icoTimerPlay2#][!HideMeter MeterPreset{ID}Duration][!Update]
MouseLeaveAction=[!SetOption MeterPreset{ID}TimerIcon Text #icoTimerEmpty#][!ShowMeter MeterPreset{ID}Duration][!Update]
RightMouseDownAction=None
LeftMouseDownAction=[!CommandMeasure MeasureScript Start("{ID}")]

[MeterPreset{ID}TimerRing]
Container=MeterPreset{ID}Container
Meter=Roundline
MeasureName=MeasurePreset{ID}Timer
StartAngle=-1.58
RotationAngle=6.283
LineWidth=(10*#Scale#)
AntiAlias=1
X=(50*#Scale#)
Y=(54*#Scale#)
LineColor=#BaseColor#
LineLength=(26*#Scale#)
LineStart=0
Solid=1
DynamicVariables=1
Hidden=1

[MeterPreset{ID}Timing]
Container=MeterPreset{ID}Container
Meter=String
;MeasureName=MeasurePreset{ID}Timer
MeterStyle=StyleString
StringAlign=Center
Text=""
X=0r
Y=(50*#Scale#)R
Hidden=1

[MeterPreset{ID}Delete]
Container=MeterPreset{ID}Container
Meter=String
MeterStyle=StyleIcon | TimerDelete
LeftMouseDownAction=[!CommandMeasure MeasureScript Delete("{ID}")]

[MeterPreset{ID}Duration]
Container=MeterPreset{ID}Container
Meter=String
MeterStyle=StyleString | TimerDuration
Text="{MIN}"
LeftMouseDownAction=[!CommandMeasure MeasureScript Start("{ID}")]
