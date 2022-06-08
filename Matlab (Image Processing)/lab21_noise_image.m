clear
close
clc

original_image=imread('cameraman.tif');

% Noise With Built-in Function
noisy_image1=imnoise(original_image, 'salt & pepper', 0.03);

% Noisy Image Without Using Built-in Function
noisy_image2=original_image;
[row, col]=size(original_image);
random_matrix=randi([0 255], row, col, 'uint8');

noisy_image2(random_matrix <= 5)=0;
noisy_image2(random_matrix >= 250)=255;

subplot(1,3,1);
imshow(original_image); title('Original Image');
subplot(1,3,2);
imshow(noisy_image1); title('Noisy Built-in Function');
subplot(1,3,3);
imshow(noisy_image2); title('Noisy Image Without Built-in Function');

