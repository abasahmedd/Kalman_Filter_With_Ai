clear all;
raw = readmatrix("IMU_Data.csv");     
x1 = raw(:,1); 
x2 = raw(:,2);                                 
x3 = raw(:,3);                                 
x4 = raw(:,4);                                 
x5 = raw(:,5);                                 
x6 = raw(:,6);                                 
t = (0:0.01:(length(x1)-1)*0.01)';            
plot(t,x1,'g');
hold on
plot(t,x2,'k');
hold on
plot(t,x3,'r');
hold on
plot(t,x4,'b');
hold on
plot(t,x5,'y');
hold on
plot(t,x6,'c');