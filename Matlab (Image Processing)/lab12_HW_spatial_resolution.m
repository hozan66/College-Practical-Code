% clear all
clear
clc
% assignment Number: 1
% represent the image from 1 bit to 8 bit
% reduce the bit spatial domain

myImage=imread('cameraman.tif');
[row, col]=size(myImage);

redbit=myImage;

subplot(2,4,1);
disp(imshow(redbit));title('8 bit');

for k=1:7
    for i=1:row
        for j=1:col
                redbit(i,j)=fix(redbit(i,j)/2);
        end
    end
    
    subplot(2,4,k+1);
    disp(imshow(redbit));title('bit');

end


