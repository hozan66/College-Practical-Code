% clear all
clear
clc

% g=rgb2gray(imread('peppers.png'));
g=[10 20 30 40;50 60 70 80;11 22 33 44;55 66 77 88];

[r, c]=size(g);
t=zeros(size(g)/2);
temp=1;
gemp=1;

for i=1:2:r
    for j=1:2:c
        t(temp,gemp)=g(i,j);
        gemp=gemp+1;
    end
    temp=temp+1;
    gemp=1;
end

disp(g);
disp(t); 

% img_resized=uint8(t);
% figure;
% imshow(g);
% figure;
% imshow(img_resized)




% [x, y]=size(g);
% v=ceil((1:x*2)/2);
% c=ceil((1:y*2)/2);
% b=g(v,c);
% display(v);
% display(c);
% 
% display(g);
% display(b);   
   