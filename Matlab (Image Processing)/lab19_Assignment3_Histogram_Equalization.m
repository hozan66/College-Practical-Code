close
clc
clear

% Hozan

origin_image=imread('pout.tif');
% origin_image=imread('coins.png');

[row, col]=size(origin_image);
equalization_image=origin_image;

% Finding the frequency and frequency ratio
bit=8;
frequency=zeros(1,2^bit);
frequency_ratio=zeros(1,2^bit);
for i=1:2^bit
    frequency(i)=length(find(origin_image==i-1));
    frequency_ratio(i)=frequency(i)/(row*col);
end

% Finding equalization values and assign it to the new matrix
equalization_list=zeros(1,2^bit);
sum=0;
for i=1:2^bit
    sum=sum+frequency_ratio(i);
    equalization_list(i)=round((2^bit-1)*sum);
    equalization_image(origin_image==(i-1))=equalization_list(i); % replacing values
end

equalization_list=uint8(equalization_list);

subplot(3,2,1), imshow(mat2gray(origin_image)), title('Origin Image');
subplot(3,2,2), imhist(origin_image), title('Origin Image Histogram');

equal_buil_in=histeq(origin_image); % using build in function
subplot(3,2,3), imshow(mat2gray(equal_buil_in)), title('Equalization Image using build-in function');
subplot(3,2,4), imhist(equal_buil_in), title('Equalization Image Histogram using build-in function');

subplot(3,2,5), imshow(mat2gray(equalization_image)), title('Equalization Image without using build-in function');
subplot(3,2,6), imhist(equalization_image), title('Equalization Image Histogram without using build-in function');
