clear
close
clc

% General Filtter
original_image=imread('cameraman.tif');
[row, col] = size(original_image);

% Adding Noise
salt_pepper_noise=imnoise(original_image, 'salt & pepper', 0.03);

% Adding Zeros Padding
salt_pepper_noise_zero_border = zeros(row+2, col+2);
salt_pepper_noise_zero_border(2:end-1,2:end-1)=salt_pepper_noise(:,:);

% Note: Mask image must be square in size
mask=[0 1 0; 1 -4 1; 0 1 0];
[row_mask, col_mask] = size(mask);

% Laplacian filtered Image
[row_filter, col_filter] = size(salt_pepper_noise_zero_border);
laplacian_filter_zero_border=zeros(row_filter, col_filter);

for i = 2 : row_filter - 1
    for j = 2 : row_filter - 1
        sum_filter= 0;
        for p = 1 : row_mask
            for q = 1 : col_mask
                result = mask(p, q) * salt_pepper_noise_zero_border(p + i-2, q + j-2);
                sum_filter = sum_filter + result;
            end
        end
        laplacian_filter_zero_border(i, j) = sum_filter;
    end
end

% Removing Zeros Padding
laplacian_filter=laplacian_filter_zero_border(2:end-1, 2:end-1);
laplacian_filter=uint8(laplacian_filter);

% Final Step of Laplacian Filtered Image
laplacian_filter=original_image-laplacian_filter;

subplot(1,3,1);
imshow(original_image); title('Original Image');
subplot(1,3,2);
imshow(salt_pepper_noise); title('Salt&Pepper Noise Image');
subplot(1,3,3);
imshow(laplacian_filter); title('Laplacian Filtered Image');
