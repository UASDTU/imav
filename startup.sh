#!/bin/bash


echo "Aether" | sudo -S chmod 666 /dev/ttyACM0
echo "Aether" | sudo -S chmod 666 /dev/ttyACM1
sleep 8
cmd="mavproxy.py --master=/dev/ttyACM0 --out=192.168.192.7:14569 --out=192.168.1.7:14669 --out=127.0.0.1:14550 --out=127.0.0.1:14555 --out=127.0.0.1:15555 --out=192.168.192.4:15569"
cmd2="mavproxy.py --master=/dev/ttyACM1 --out=192.168.192.7:14569 --out=192.168.1.7:14669 --out=127.0.0.1:14550 --out=127.0.0.1:14555 --out=127.0.0.1:15555 --out=192.168.192.4:15569"
csv="cd /home/uas-dtu/ && python3 Mapping_csv.py"
sender="cd /home/uas-dtu/Desktop/mapping_final/ && python3 send_images.py"
gnome-terminal -- bash -c "$cmd"
gnome-terminal -- bash -c "$cmd2"
gnome-terminal -- bash -c "$csv"
gnome-terminal -- bash -c "$sender"

