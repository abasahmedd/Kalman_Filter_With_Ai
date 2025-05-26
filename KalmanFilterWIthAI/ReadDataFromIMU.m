clear all;

%General Parameter
serialPort = "COM3";  
baudRate = 9600;
arduino = serialport(serialPort, baudRate);

%Data Parameter
N = 1000;  
accelData = zeros(N, 3);
gyroData = zeros(N, 3);
%Loop
for i = 1:N
    line = readline(arduino); 
    data = str2double(split(line, ','));    
    if length(data) == 6
        accelData(i, :) = data(1:3); 
        gyroData(i, :) = data(4:6);  
    end   
    pause(0.01); 
end

disp("Data is Recorded")
writematrix([accelData, gyroData], 'IMU_Data.csv');
clear arduino;
disp("Data is Saved");
