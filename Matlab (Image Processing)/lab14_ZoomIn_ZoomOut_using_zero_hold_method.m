% Assignment number 2//
% Write a MATLAB m-file (without using built in function) to:
% 1- Zoom in/out an image by using zero order hold method 
% (use cameraman image)
% 2- Your program should display the original and result after 
% zoom in two different windows. 

% clear all
clear
clc
% Hozan
% Zoom-in using zero hold method
origin_image=imread('cameraman.tif');
[n, m]=size(origin_image);
n=n*2-1;
m=m*2-1;

zoomIn_image=zeros(n,m);
[row, col]=size(zoomIn_image);
zoomIn_image(1:2:row,1:2:col)=origin_image(:,:);

% Working on row
for i=1:2:row
    for j=2:2:col
        num=fix((zoomIn_image(i,j-1)+zoomIn_image(i,j+1))/2);
        zoomIn_image(i,j)=num;
    end
end

% Working on column
for i=2:2:row
    for j=1:col
        num=fix((zoomIn_image(i-1,j)+zoomIn_image(i+1,j))/2);
        zoomIn_image(i,j)=num;
    end
end

% Zoom-out using zero hold method
[nn, mm]=size(origin_image);
n1=ceil(nn/2);
m1=ceil(mm/2);
zoomOut_image=zeros(n1,m1);
zoomOut_image(:,:)=origin_image(1:2:nn,1:2:mm);

imshow(origin_image);title('Origin Image');
figure;
imshow(mat2gray(zoomIn_image));title('Zoom-In Image');
figure;
imshow(mat2gray(zoomOut_image));title('Zoom-Out Image');

