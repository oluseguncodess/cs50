import os
import qrcode

# make qrcode
image = qrcode.make("https://github.com/oluseguncodess")

# save image as PNG
image.save("qr.png", "PNG")