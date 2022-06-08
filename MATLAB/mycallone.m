clear all
clc
n=input('press:1 for bisection&2 for falseposition&3 newton&4 secant:');
switch(n)
    case 1
        disp('bisection');
        a=input('a=');
        b=input('b=');
        mybisection(a,b);
    case 2
        disp('falseposition');
        a=input('a=');
        b=input('b=');
        myfalseposition(a,b);
    case 3
        disp('newton');
        x0=input('x0=');
        mynewton(x0);
    case 4
        disp('secant');
        x0=input('x0=');
        x1=input('x1=');
        mysecant(x0,x1);   
    otherwise
        disp('wrong choie');
end