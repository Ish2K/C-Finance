import numpy as np
from sklearn.linear_model import LinearRegression

Xarr = np.array([65, 63, 67, 64, 68, 62, 70, 66, 68, 67, 69, 71]).reshape((-1, 1))
Yarr = np.array([68, 66, 68, 65, 69, 66, 68, 65, 71, 67, 68, 70])
model= LinearRegression().fit(Xarr,Yarr)

print("LinearRegression for Y on X : ")
print('intercept:', model.intercept_)
print('slope:', model.coef_)
print("Prediction for x=55 :",model.predict(np.array([55]).reshape((-1, 1))))
print("---------------",end="\n\n")


Xarr = np.array([65, 63, 67, 64, 68, 62, 70, 66, 68, 67, 69, 71])
Yarr = np.array([68, 66, 68, 65, 69, 66, 68, 65, 71, 67, 68, 70]).reshape((-1, 1))

model= LinearRegression().fit(Yarr,Xarr)

print("LinearRegression for X on Y : ")
print('intercept:', model.intercept_)
print('slope:', model.coef_)
print("Prediction for x=55 :",model.predict(np.array([55]).reshape((-1, 1))))
print("---------------",end="\n\n")
