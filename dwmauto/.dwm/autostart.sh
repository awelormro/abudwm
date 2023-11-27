sleep 5 && exec ~/.screenlayout/configuses.sh &
xrandr --output HDMI-A-0 --mode 1920x1080 --output eDP --mode 1366x768 --rate 60.00 --right-of HDMI-A-0 &
nm-applet &
# exec  /home/abu/.config/polybar/launch.sh --grayblocks &
# exec  /home/abu/.config/polybar/grayblocks/scripts/pywal.sh /home/abu/wallpapers &
wal -i ~/wallpapers
xrdb -merge ~/.cache/wal/colors.Xresources &
setxkbmap -layout us -variant intl &
xset r rate 200 50
picom &
slstatus &
# dwmblocks &
xbanish &
sleep 8 && wal -R
