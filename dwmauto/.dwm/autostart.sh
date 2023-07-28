sleep 5 && exec ~/.screenlayout/configuses.sh &
nm-applet &
# exec  /home/abu/.config/polybar/launch.sh --grayblocks &
# exec  /home/abu/.config/polybar/grayblocks/scripts/pywal.sh /home/abu/wallpapers &
wal -i ~/wallpapers
xrdb -merge ~/.cache/wal/colors.Xresources &
setxkbmap -layout us -variant intl &
xset r rate 200 50
picom &
# slstatus &
dwmblocks &
sleep 8 && wal -R
