from dronekit import connect
import csv
import time
from datetime import datetime

vehicle=connect('udp:127.0.0.1:15555')
filename = f"Mapping.csv"
with open(filename, 'w', newline='') as csvfile:
    csv_writer = csv.writer(csvfile)
    csv_writer.writerow(['UTC Time', "Latitude", "Longitude", "Altitude"])
while True:
    utc_time = datetime.utcnow()
    filename = "Mapping.csv"
    data = [utc_time.strftime("%Y-%m-%dT%H:%M:%S.%f")[:-3],
            vehicle.location.global_relative_frame.lat,
            vehicle.location.global_relative_frame.lon,
            vehicle.location.global_relative_frame.alt
        ]
    with open(filename, 'a', newline='') as csvfile:
        csv_writer = csv.writer(csvfile)
        csv_writer.writerow(data)
    time.sleep(1)

vehicle.close()
