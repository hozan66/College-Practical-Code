%multiply two matrix
clear all
clc
a=input('a (first matriz):');
b=input('b (second matriz):');
[n m]=size(a);
[n1 m1]=size(b);
if(m==n1)
    c=zeros(n,m1);
     c(1:n,:)=a(1:n,:)*b(:,1:m1); %here like loop inside loop
    disp(c);
else
    disp('imposible');
end