clear all
clc
iteration=input('iteration=');
x0=input('x0=');
disp('      i         x0       x1');
disp('     ..         ..       ..');
for i=1:iteration
    
x1=x0-(f1(x0)/fd(x0));
if(abs(x0-x1)<=0.001)
    break;
end
disp([i x0 x1]);

x0=x1;
end
