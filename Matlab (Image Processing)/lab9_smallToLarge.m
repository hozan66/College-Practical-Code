% clear all
clear
clc

% g=rgb2gray(imread('peppers.png'));
g=[10 20;30 40];
[x, y]=size(g);
v=ceil((1:x*2)/2);
c=ceil((1:y*2)/2);
b=g(v,c);
display(v);
display(c);

disp(g);
disp(b);
% imshow(g);
% figure;
% imshow(b);    
   