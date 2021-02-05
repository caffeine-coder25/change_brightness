A C++ project to change the brightness of the images.

INTRODUCTION:

This packet can be used to increase or decrease the intensity of brightness in images. This project is based on C++ and OpenCV library. 

ABOUT:

In this operation, the value of each and every pixel in an image should be increased/decreased by a constant.

If you want to increase the brightness of an image, you have to add some positive constant value to each and every pixel in the image. If you want to decrease the brightness of an image, you have to subtract some positive constant value from each and every pixel in the image.

The valid value range of every pixel in the image should be 0 - 255.

You must make sure that pixel values in the output image should not exceed the maximum allowable limit by adding some constant to the original image. If it exceeds the maximum limit, you must assign the maximum value instead of the correct value and in the same way, You must make sure that pixel values in the output image should not go below the minimum allowable limit after subtracting some constant from the original image. If it goes below the minimum limit, you must assign the minimum value instead of the correct value.

In this project, I have increased and decreases the brightness of the image by 50, You can choose any desired value, just make sure of maximum and minimum permissible limits of pixels.

REQUIREMENTS:

1. System should have OpenCV installed.
2. System should have GCC installed.
3. Any IDE (preferably Xcode or Visual Studio as setup of OpenCV will be easier in these)
4. Developer must give the correct path of the image that has to be processed.


CONCLUSION:

The output shows the original image and the image with the increased and decreased brightness.
Thanks & Happy Coding :)
