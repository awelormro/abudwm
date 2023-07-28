#bin/bash
let brightness1=$(brightnessctl get) 
let brightness=$brightness1/2.55
printf "| 󰃠  %s %%  " "$brightness"
