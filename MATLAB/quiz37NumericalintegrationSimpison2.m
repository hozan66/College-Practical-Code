clear all
clc
%numerical integration (Simpison)
%2: if we don't have the table
f=inline('3*x.^2');

a=input('a=');
b=input('b=');
n=input('n=');
h=(b-a)/n;

fa=f(a);
fb=f(b);
s1=0;
s2=0;
for i=1:n-1
    if(rem(i,2)~=0)
        d=a+(h*i);
        s1=s1+4*f(d);
    else
        d=a+(h*i);
        s2=s2+2*f(d);
    end
end
sum=(h/3)*(fa+fb+s1+s2);
disp(sum);