clear all
clc
p=input('p=');
q=input('q=');
n=length(p);
m=length(q);

if(n>m)
    for i=1:n-m
        q=[0,q];
    end
    h=p+q;
    disp(h);
elseif(m>n)
    for i=1:m-n
        p=[0,p];
    end
    h=p+q;
    disp(h);
else
    h=p+q;
    disp(h);
end