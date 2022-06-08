clear
close
clc

% origin_image=imread('pout.tif');
% mat1=randi([1 1], 4, 4);
% mat2=randi([0 0], 4, 4);
% mat3=randi([1 1], 4, 4);

% show white, black, and white three matrices respectively in the same window
siz=input('Enter the size of matrix: ');
mat1=ones(siz);
mat2=zeros(siz);
mat3=ones(siz);

subplot(1,3,1), imshow(mat1), title('matrix 1');
subplot(1,3,2), imshow(mat2), title('matrix 2');
subplot(1,3,3), imshow(mat3), title('matrix 3');