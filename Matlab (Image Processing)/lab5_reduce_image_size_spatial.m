% clear all
clear
clc

% spatial domain
t=imread('cameraman.tif');

subplot(2,4,1);
imshow(t);

for i=1:7
    d=2.^i;
    g=fix(t/d);
    subplot(2,4,i+1);
    imshow(g);
end