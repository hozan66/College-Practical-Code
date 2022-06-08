% clear all
clear
clc
% Zoom-out using zero hold method

origin_image=[3 3 4;4 4 5;5 6 7;7 10 13; 10 15 20];
disp(origin_image);
[nn, mm]=size(origin_image);
n=ceil(nn/2);
m=ceil(mm/2);

new_image=zeros(n,m);
new_image(:,:)=origin_image(1:2:nn,1:2:mm);
disp(new_image);

