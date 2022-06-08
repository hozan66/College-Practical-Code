% this is the solution to putting 0s around an array
% clear all
clear
clc

% A = [1 2 3; 2 3 4; 5 6 7];
% display(length(A));

A=imread('cameraman.tif');
[row, col] = size(A);
newA = zeros(row+2, col+2);
% display(newA);
newA(2:end-1,2:end-1)=A;

mat_image=mat2gray(newA);
imshow(mat_image);
% display('===================');
% display(padarray(A,[1 1],0));