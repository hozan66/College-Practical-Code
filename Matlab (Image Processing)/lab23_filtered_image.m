clear
close
clc
% Note: double type for computational operations

% General Filtter
original_image=imread('cameraman.tif');
[row, col] = size(original_image);

% Adding Noise
salt_pepper_noise=imnoise(original_image, 'salt & pepper', 0.03);

% Adding Zeros Padding
salt_pepper_noise_zero_border = zeros(row+2, col+2);
salt_pepper_noise_zero_border(2:end-1,2:end-1)=salt_pepper_noise(:,:);

% Note: Mask image must be square in size
mask=[1 1 1; 1 1 1; 1 1 1 ];
[row_mask, col_mask] = size(mask);

% Filtered Image
[row_filter, col_filter] = size(salt_pepper_noise_zero_border);
filtered_image_zero_border=zeros(row_filter, col_filter);

for i = 2 : row_filter - 1
    for j = 2 : row_filter - 1
        sum = 0;
        for p = 1 : row_mask
            for q = 1 : col_mask
                result = mask(p, q) * salt_pepper_noise_zero_border(p + i-2, q + j-2);
                sum = sum + result;
            end
        end
        filtered_image_zero_border(i, j) = sum;
    end
end

% Removing Zeros Padding
filtered_image=filtered_image_zero_border(2:end-1, 2:end-1);
filtered_image=uint8(filtered_image);


subplot(1,3,1);
imshow(original_image); title('Original Image');
subplot(1,3,2);
imshow(salt_pepper_noise); title('Noisy Image');
subplot(1,3,3);
imshow(filtered_image); title('Filtered Image');
