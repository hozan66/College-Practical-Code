clear all
clc
t=0:0.1:2*pi;
x=cos(t);
y1=sin(t);
y2=sin(2*t);
y3=sin(3*t);
y4=sin(4*t);

subplot(2,2,1);
plot(x,y1,'r:s');

subplot(2,2,2);
plot(x,y2,'m-*');

subplot(2,2,3);
plot(x,y3,'k--d');

subplot(2,2,4);
plot(x,y4,'g-.+');