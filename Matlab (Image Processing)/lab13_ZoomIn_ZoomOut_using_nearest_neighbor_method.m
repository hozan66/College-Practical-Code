% Write a MATLAB m-file (without using built in function) to:
% 1- Zoom in/out an image by using nearest neighbor method 
% (use cameraman image)
% 2- Your program should display the original and result after 
% zoom in two different windows. 

% clear all
clear
clc
% Hozan
% Zoom-in using nearest neighbor method
origin_image=imread('cameraman.tif');
[row, col]=size(origin_image);
zoomIn_image=zeros(row*2,col*2);

for i=1:row*2
    for j=1:col*2
        n=i-fix(i/2);
        m=j-fix(j/2);
        zoomIn_image(i,j)=origin_image(n,m);
    end
end

% Zoom-out using zero hold method
[row1, col1]=size(origin_image);
zoomOut_image=zeros(fix(row1/2),fix(col1/2));
% n1=1;m1=1;


zoomOut_image(:,:)=origin_image(1:2:row,1:2:col);
% for i=1:2:row1
%     for j=1:2:col1
%         zoomOut_image(n1,m1)=origin_image(i,j);
%         m1=m1+1;
%     end
%     n1=n1+1;
%     m1=1;
% end

imshow(origin_image);title('Origin Image');
figure;
imshow(mat2gray(zoomIn_image));title('Zoom-In Image');
figure;
imshow(mat2gray(zoomOut_image));title('Zoom-Out Image');

