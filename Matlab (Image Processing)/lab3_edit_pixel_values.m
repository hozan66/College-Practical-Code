% clear all
clear
clc
%f = [-0.5 0.5;0.75 1.5];

% display(im2uint8(f)); %multiply each element by 255

%h=uint8([25 50; 128 200]);
%g=im2double(h);  %divide each element by 255
%display(g);

i=imread('cameraman.tif');

% subplot(1,2,1);
% imshow(i);title('Image: i');
% subplot(1,2,2);
% imshow(i+50);title('Image: i+50');

% subplot(1,2,1);
% imshow(i);title('Image: i');
% subplot(1,2,2);
% imshow(i-80);title('Image: i-80');

% subplot(1,2,1);
% imshow(i);title('Image: i');
% subplot(1,2,2);
% imshow(i*3);title('Image: i*3');

% subplot(1,2,1);
% imshow(i);title('Image: i');
% subplot(1,2,2);
% imshow(i/2);title('Image: i/2');

subplot(1,2,1);
imshow(i);title('Image: i');
subplot(1,2,2);
imshow(255-i);title('Image: 255-i (Complement)');


