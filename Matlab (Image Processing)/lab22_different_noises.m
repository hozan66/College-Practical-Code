clear
close
clc

original_image=imread('cameraman.tif');

% Noises
salt_pepper_noise=imnoise(original_image, 'salt & pepper', 0.03);
gaussian_noise=imnoise(original_image, 'gaussian', 0.03);
speckle_noise=imnoise(original_image, 'speckle', 0.03);

subplot(2,2,1);
imshow(original_image); title('Original Image');
subplot(2,2,2);
imshow(salt_pepper_noise); title('Salt & Pepper Noise');
subplot(2,2,3);
imshow(gaussian_noise); title('Gaussian Noise');
subplot(2,2,4);
imshow(speckle_noise); title('Speckle Noise');

