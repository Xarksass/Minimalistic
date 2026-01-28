[MeterToDoLine{ID}]
Meter=Image
MeterStyle=StyleLineContainer

[MeterToDoDelete{ID}]
Container=MeterToDoLine{ID}
Meter=String
MeterStyle=StyleLineBtn | StyleLineBtnState{STATE}
Text=#icoClose#
LeftMouseUpAction=[!CommandMeasure MeasureScript Remove({ID})]

[MeterToDoText{ID}]
Container=MeterToDoLine{ID}
Meter=String
MeterStyle=StyleString | StyleLineText | StyleLineTextState{STATE}
Text="{TODO}"
ToolTipText="{TODO}"
ClipString=1
MouseOverAction=[!SetOption MeterToDoDelete{ID} MeterStyle "StyleLineBtn | StyleLineBtnStateOver"][!SetOption MeterToDoText{ID} MeterStyle "StyleString | StyleLineText | StyleLineTextStateOver"][!SetOption MeterToDoCrossed{ID} MeterStyle "StyleCrossedLineOver"][!Update]
MouseLeaveAction=[!SetOption MeterToDoDelete{ID} MeterStyle "StyleLineBtn | StyleLineBtnState{STATE}"][!SetOption MeterToDoText{ID} MeterStyle "StyleString | StyleLineText | StyleLineTextState{STATE}"][!SetOption MeterToDoCrossed{ID} MeterStyle "StyleCrossedLine{STATE}"][!Update]
LeftMouseUpAction=[!CommandMeasure MeasureScript Toggle({ID})]

[MeterToDoCrossed{ID}]
Meter=Shape
MeterStyle=StyleCrossedLine{STATE}
X=0
Y=(25*#Scale#)r
Shape=Line (60*#Scale#),0,(#ToDoW#*#Scale#),0 | Extend Modifier
DynamicVariables=1

[MeterReset{ID}]
Meter=Image
MeterStyle=ResetLine
