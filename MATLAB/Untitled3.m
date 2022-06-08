clear all
clc
n=input('input 1 for newton solution & input 2 for secant solution: ');
switch(n)
    case 1
        x0=input('x0=');
        mynewton(x0);
    case 2
        x0=input('x0=');
        x1=input('x1=');
        mysecant(x0,x1);
    otherwise
        disp('wrong choie')
end