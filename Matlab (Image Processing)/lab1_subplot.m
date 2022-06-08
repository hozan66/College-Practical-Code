% clear all
clear
clc
% Comment/Uncomment. Windows: Ctrl + R/Ctrl + T

x = linspace(-pi,pi,200);
y1=sin(x);
y2=cos(x);
y3=tan(x);
y4=sinh(x);
y5=cosh(x);
y6=tanh(x);

% there is no zero index in matlab
subplot(3,3,1.5);
plot(x,y1);title('sin');
subplot(3,3,2.5);
plot(x,y2);title('cos');

subplot(3,3,4);
plot(x,y3);title('tan');

subplot(3,3,5);
plot(x,y4);title('sinh');

subplot(3,3,6);
plot(x,y5);title('cosh');

subplot(3,3,7.5);
plot(x,y6);title('tanh');
