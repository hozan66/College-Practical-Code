%write a function with name mynewton that find the root of (64)^(1/3) using
%NEWTON RAPHSON start with p1=3.8 , in which iteration the root appears? use
%e=0.001 write the result of last iteration.
clear all
clc
x0=input('x0=');
A=input('A=');
for i=1:100
    x1=mynewton1(x0,A);
     if(abs(x1-x0)<=0.001)
        break;
     end
    disp([i x0 x1]);
    x0=x1;
    
end