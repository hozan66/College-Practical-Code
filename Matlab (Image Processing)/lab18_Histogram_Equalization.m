close
clc
clear

% origin_image=imread('pout.tif');
origin_image=[
    0 1 1 2 2 3 4 4;
    0 1 1 2 2 3 4 4;
    0 1 1 2 2 3 4 4;
    0 1 1 2 2 3 4 4
    ];
[row, col]=size(origin_image);
equalization_image=origin_image;

% Finding the frequency and frequency ratio
bit=3;
frequency=zeros(1,2^bit);
frequency_ratio=zeros(1,2^bit);
for i=1:2^bit
    frequency(i)=length(find(origin_image==i-1));
    frequency_ratio(i)=frequency(i)/(row*col);
end
disp(frequency);
% frequency_ratio=[0.19 0.25 0.21 0.16 0.08 0.06 0.03 0.02];
disp(frequency_ratio);

% Finding equalization values
equalization_list=zeros(1,2^bit);
sum=0;
for i=1:2^bit
    sum=sum+frequency_ratio(i);
    equalization_list(i)=round((2^bit-1)*sum);
    equalization_image(origin_image==(i-1))=equalization_list(i);
end
disp(equalization_list);
disp(equalization_image);

% imshow(mat2gray(origin_image));
