[MeterCPUCore1]
Meter=String
MeterStyle=StyleString | ColTitle | NextRow
Text="C1"
ToolTipText=#TTPCPUC1#

[MeterCPUCore2]
Meter=String
MeterStyle=StyleString | ColTitle | NextCol
Text="C2"
ToolTipText=#TTPCPUC2#

[MeterCPUCore3]
Meter=String
MeterStyle=StyleString | ColTitle | NextCol
Text="C3"
ToolTipText=#TTPCPUC3#

[MeterCPUCore4]
Meter=String
MeterStyle=StyleString | ColTitle | NextCol
Text="C4"
ToolTipText=#TTPCPUC4#

[MeterCPUCore5]
Meter=String
MeterStyle=StyleString | ColTitle | NextCol
Text="C5"
ToolTipText=#TTPCPUC5#

[MeterCPUCore6]
Meter=String
MeterStyle=StyleString | ColTitle | NextCol
Text="C6"
ToolTipText=#TTPCPUC6#

[MeasureCPU1LoadRaw]
Measure=Plugin
Plugin=UsageMonitor
Category=Processor
Counter=% Processor Time
Index=1

[MeasureCPU1Load]
Measure=Calc
Formula=MeasureCPU1LoadRaw

[MeasureCPU2LoadRaw]
Measure=Plugin
Plugin=UsageMonitor
Category=Processor
Counter=% Processor Time
Index=2

[MeasureCPU2Load]
Measure=Calc
Formula=MeasureCPU2LoadRaw

[MeasureCPU3LoadRaw]
Measure=Plugin
Plugin=UsageMonitor
Category=Processor
Counter=% Processor Time
Index=3

[MeasureCPU3Load]
Measure=Calc
Formula=MeasureCPU3LoadRaw

[MeasureCPU4LoadRaw]
Measure=Plugin
Plugin=UsageMonitor
Category=Processor
Counter=% Processor Time
Index=4

[MeasureCPU4Load]
Measure=Calc
Formula=MeasureCPU4LoadRaw

[MeasureCPU5LoadRaw]
Measure=Plugin
Plugin=UsageMonitor
Category=Processor
Counter=% Processor Time
Index=5

[MeasureCPU5Load]
Measure=Calc
Formula=MeasureCPU5LoadRaw

[MeasureCPU6LoadRaw]
Measure=Plugin
Plugin=UsageMonitor
Category=Processor
Counter=% Processor Time
Index=6

[MeasureCPU6Load]
Measure=Calc
Formula=MeasureCPU6LoadRaw

[MeasureCPU7LoadRaw]
Measure=Plugin
Plugin=UsageMonitor
Category=Processor
Counter=% Processor Time
Index=7

[MeasureCPU7Load]
Measure=Calc
Formula=MeasureCPU7LoadRaw

[MeasureCPU8LoadRaw]
Measure=Plugin
Plugin=UsageMonitor
Category=Processor
Counter=% Processor Time
Index=8

[MeasureCPU8Load]
Measure=Calc
Formula=MeasureCPU8LoadRaw

[MeasureCPU9LoadRaw]
Measure=Plugin
Plugin=UsageMonitor
Category=Processor
Counter=% Processor Time
Index=9

[MeasureCPU9Load]
Measure=Calc
Formula=MeasureCPU9LoadRaw

[MeasureCPU10LoadRaw]
Measure=Plugin
Plugin=UsageMonitor
Category=Processor
Counter=% Processor Time
Index=10

[MeasureCPU10Load]
Measure=Calc
Formula=MeasureCPU10LoadRaw

[MeasureCPU11LoadRaw]
Measure=Plugin
Plugin=UsageMonitor
Category=Processor
Counter=% Processor Time
Index=11

[MeasureCPU11Load]
Measure=Calc
Formula=MeasureCPU11LoadRaw

[MeasureCPU12LoadRaw]
Measure=Plugin
Plugin=UsageMonitor
Category=Processor
Counter=% Processor Time
Index=12

[MeasureCPU12Load]
Measure=Calc
Formula=MeasureCPU12LoadRaw

[MeterCPU1Load]
Meter=String
MeasureName=MeasureCPU1Load
MeterStyle=StyleString | ColBaseStyle | NextRow
ToolTipText=#TTPCPUT1#

[MeterCPU3Load]
Meter=String
MeasureName=MeasureCPU3Load
MeterStyle=StyleString | ColBaseStyle | NextCol
ToolTipText=#TTPCPUT3#

[MeterCPU5Load]
Meter=String
MeasureName=MeasureCPU5Load
MeterStyle=StyleString | ColBaseStyle | NextCol
ToolTipText=#TTPCPUT5#

[MeterCPU7Load]
Meter=String
MeasureName=MeasureCPU7Load
MeterStyle=StyleString | ColBaseStyle | NextCol
ToolTipText=#TTPCPUT7#

[MeterCPU9Load]
Meter=String
MeasureName=MeasureCPU9Load
MeterStyle=StyleString | ColBaseStyle | NextCol
ToolTipText=#TTPCPUT9#

[MeterCPU11Load]
Meter=String
MeasureName=MeasureCPU11Load
MeterStyle=StyleString | ColBaseStyle | NextCol
ToolTipText=#TTPCPUT11#

[MeterCPU2Load]
Meter=String
MeasureName=MeasureCPU2Load
MeterStyle=StyleString | ColBaseStyle | NextRow
ToolTipText=#TTPCPUT2#

[MeterCPU4Load]
Meter=String
MeasureName=MeasureCPU4Load
MeterStyle=StyleString | ColBaseStyle | NextCol
ToolTipText=#TTPCPUT4#

[MeterCPU6Load]
Meter=String
MeasureName=MeasureCPU6Load
MeterStyle=StyleString | ColBaseStyle | NextCol
ToolTipText=#TTPCPUT6#

[MeterCPU8Load]
Meter=String
MeasureName=MeasureCPU8Load
MeterStyle=StyleString | ColBaseStyle | NextCol
ToolTipText=#TTPCPUT8#

[MeterCPU10Load]
Meter=String
MeasureName=MeasureCPU10Load
MeterStyle=StyleString | ColBaseStyle | NextCol
ToolTipText=#TTPCPUT10#

[MeterCPU12Load]
Meter=String
MeasureName=MeasureCPU12Load
MeterStyle=StyleString | ColBaseStyle | NextCol
ToolTipText=#TTPCPUT12#
