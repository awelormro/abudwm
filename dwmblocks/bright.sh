#bin/bash
let brightness1=$(brightnessctl get) 
let brightness=$brightness1/96
printf "| 󰃠  %s %%  |" "$brightness"
