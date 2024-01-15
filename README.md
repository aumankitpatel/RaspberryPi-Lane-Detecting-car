# RaspberryPi-Lane-Detecting-car

## description
Raspberry Pi car made with Lane Detecting capabilities using OpenCV. Lane detection conducted by finding the centre of a masked region of a white color. The curvature of the lane in detected by comparing the current center of the lane to the center of the lane a certain distance ahead.
To ammend of the field of view of the camera causing distortion on the image the captured images were warped to be from an approxiamtely top view which allows for better lane detection as curvature can be better detected by the algorithm. 

Motor controls are perfomrd using the WiringPi library in C++ done using GPIO signals I am also currently working on implimenting PWM as well. 
