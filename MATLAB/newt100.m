clear all
clc

f = Inline('x.^2-2');

x0=input('x0=');
x1=input('x1=');
disp('      i      x0          x1        x2');

for i=1:100
 if(abs(x0-x1)<=0.001)
    break;
 end
x2=x1-(f(x1)*(x1-x0)/(f(x1)-f(x0)));
disp([i x0 x1 x2]);

x0=x1;
x1=x2; 

end


