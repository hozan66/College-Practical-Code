clear
close
clc

% General Filtter
original_image=imread('cameraman.tif');
[row, col] = size(original_image);

% Noisy Image Without Using Built-in Function
salt_pepper_noise_image=original_image;
random_matrix=randi([0 255], row, col, 'uint8');

salt_pepper_noise_image(random_matrix <= 5)=0;
salt_pepper_noise_image(random_matrix >= 250)=255;

% Adding Zeros Padding
salt_pepper_noise_zero_border = zeros(row+2, col+2);
salt_pepper_noise_zero_border(2:end-1,2:end-1)=salt_pepper_noise_image(:,:);

% Note: Mask image must be square in size
mask=[1 1 1; 2 2 2; 1 1 1];
[row_mask, col_mask] = size(mask);

% Median, max, min, mode filter to smooth and reduce noise
[row_filter, col_filter] = size(salt_pepper_noise_zero_border);
median_filter_zero_border=zeros(row_filter, col_filter);
max_filter_zero_border=zeros(row_filter, col_filter);
min_filter_zero_border=zeros(row_filter, col_filter);
mode_filter_zero_border=zeros(row_filter, col_filter);

for i = 2 : row_filter - 1
    for j = 2 : row_filter - 1
        for p = 1 : row_mask
            for q = 1 : col_mask
                mask(p, q) = salt_pepper_noise_zero_border(p + i-2, q + j-2);
            end
        end
        median_filter_zero_border(i, j) = median(mask(:));
        max_filter_zero_border(i, j) = max(mask(:));
        min_filter_zero_border(i, j) = min(mask(:));
        mode_filter_zero_border(i, j) = mode(mask(:));
    end
end

% Removing Zeros Padding
median_filter=median_filter_zero_border(2:end-1, 2:end-1);
median_filter=uint8(median_filter);
max_filter=max_filter_zero_border(2:end-1, 2:end-1);
max_filter=uint8(max_filter);
min_filter=min_filter_zero_border(2:end-1, 2:end-1);
min_filter=uint8(min_filter);
mode_filter=mode_filter_zero_border(2:end-1, 2:end-1);
mode_filter=uint8(mode_filter);

% Display Images
subplot(2,3,1);
imshow(original_image); title('Original Image');
subplot(2,3,2);
imshow(salt_pepper_noise_image); title('Salt&Pepper Noise Image');
subplot(2,3,3);
imshow(median_filter); title('Median Filtered');
subplot(2,3,4);
imshow(max_filter); title('Max Filtered');
subplot(2,3,5);
imshow(min_filter); title('Min Filtered');
subplot(2,3,6);
imshow(mode_filter); title('Mode Filtered');
