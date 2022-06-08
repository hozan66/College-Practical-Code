clear all
clc
v=input('vector=');

t=input('theta=');
m=[cosd(t) -sind(t);
    sind(t) cosd(t)];
a=m*v;
disp(a);

%vector=[2;-6]
%theta=30
%      4.7321
%     -4.1962 
   



