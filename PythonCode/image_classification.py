import cv2
print("Image conversion")
image = cv2.imread("E:/pythoncode/rose.jpeg")
print("original image ", image)
cv2.imshow("original image", image)


gray_img = cv2.cvtColor(image,cv2.COLOR_RGB2GRAY)
print("Gray",gray_img)
cv2.imshow("Gray_image", gray_img)

color_img = cv2.cvtColor(gray_img,cv2.COLOR_GRAY2BGR)
cv2.imshow("Color_imgae", color_img)




cv2.waitKey(0)
cv2.destroyAllWindows()