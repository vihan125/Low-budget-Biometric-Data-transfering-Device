import matplotlib.pyplot as plt
import numpy as np
from PIL import Image

class CImage:
    def create_image():
        f = open("result.txt","r")
        data=f.read().split("\n")
        f.close()


        image=[]
        line=[]

        for i in range(0,307200):
            if ((i+1)%640==0):
                line.append(int(data[i]))
                image.append(line)
                line=[]
            else:
                line.append(int(data[i]))



        d=np.array(image)
        plt.gray()
        plt.imsave("palm.jpg",d)
        img = Image.open('palm.jpg')
        img.show()
