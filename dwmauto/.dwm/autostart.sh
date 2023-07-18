sleep 5 && exec ~/.screenlayout/configuses.sh &
nm-applet &
exec  /home/abu/.config/polybar/launch.sh --grayblocks &
exec  /home/abu/.config/polybar/grayblocks/scripts/pywal.sh /home/abu/wallpapers &
setxkbmap -layout us -variant intl &
xset r rate 200 50
picom &
sleep 8 && wal -R
