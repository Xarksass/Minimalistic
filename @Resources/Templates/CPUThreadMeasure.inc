[MeasureCPU{ID}LoadRaw]
Measure=Plugin
Plugin=UsageMonitor
Category=Processor
Counter=% Processor Time
Index={ID}

[MeasureCPU{ID}Load]
Measure=Calc
Formula=MeasureCPU{ID}LoadRaw
