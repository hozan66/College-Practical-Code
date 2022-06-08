clear 
clc
% Display the image in 7-bit planes only???

origin_image=imread('coins.png');
B=bitget(origin_image,7);
figure, imshow(logical(B)); title('7-bit plane Build-in Function');

% origin_image=255-origin_image;

[row, col]=size(origin_image);
Plane_image=zeros(row, col);
bit=7;
for i=1:row
    for j=1:col
        binary=dec2bin(origin_image(i,j),8);
        num=binary(end+1-bit);
        num=str2double(num);
        Plane_image(i,j)=num;
    end
end
Plane_image=uint8(Plane_image);
figure, imshow(mat2gray(Plane_image)); title('7-bit plane without Build-in Function');
