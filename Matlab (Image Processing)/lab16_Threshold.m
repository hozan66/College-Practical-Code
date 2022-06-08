% clear all
clear
clc
% Threshold


original=imread('cameraman.tif');
[row, col]=size(original);

new_mat=zeros(row, col);
for i=1:row
    for j=1:col
        if (original(i,j)<=150)
            new_mat(i,j)=original(i,j)+20;
        elseif (original(i,j)<=200 && original(i,j)>150)
            new_mat(i,j)=original(i,j)-20;
        else
            new_mat(i,j)=original(i,j);
        end
    end
end

subplot(1,2,1);
imshow(mat2gray(original));title('Original image');
subplot(1,2,2);
imshow(mat2gray(new_mat));title('Threshold image');