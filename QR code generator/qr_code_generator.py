import qrcode

# Data to be encoded in the QR code
data = "https://www.microsoft.com"

# Create a QR code object
qr = qrcode.QRCode(
    version=1,  # Size of the QR code (1 to 40)
    error_correction=qrcode.constants.ERROR_CORRECT_L,  # Error correction level
    box_size=10,  # Size of each box in the QR code
    border=4  # Border size
)

# Add data to the QR code
qr.add_data(data)
qr.make(fit=True)

# Create an image of the QR code
img = qr.make_image(fill="black", back_color="white")

# Save the QR code image
img.save("qrcode.png")

# Show the QR code
img.show()
