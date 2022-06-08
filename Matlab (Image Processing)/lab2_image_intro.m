% clear all
clear
clc

i1=imread('concordorthophoto.png');
i2=imread('coins.png');
i3=imread('football.jpg');
display(i3(1,1,:)); % RGB values of element(1,1)

% image() is a MATLAB command that visualizes your matrix
% as simply a matrix of numbers. The colors used to represent
% each value might be meaningless to the representation of the matrix as an image.

% imshow() is an Image Processing Toolbox command that treats your matrix as an image.
% It assumes that the elements are pixel intensities, 
% and that you might want more control over the colormap,
% you probably don't want grid lines or axes tick marks,
% and you probably want to maintain the aspect ratio.

% display(imshow(i3)), figure, display(image(i3));

display(imshow(i1)), figure, display(imshow(i2)),
figure, display(imshow(i3));

%display(imwrite(i,'myimage.png')); %to save the image