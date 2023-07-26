import ctypes

motor = ctypes.cdll.LoadLibrary("/home/pi/code_base/RaspberryPi-Lane-Detecting-car/motor.so")

createMotorControls = motor.createMotorControls

createMotorControls.argtypes = [ctypes.c_int, ctypes.c_int, ctypes.c_int, ctypes.c_int]
createMotorControls.restype = ctypes.c_void_p

instance = createMotorControls(23, 24, 22, 27)

Forward = motor._ZN13MotorControls7ForwardEi

Forward(instance, 3)