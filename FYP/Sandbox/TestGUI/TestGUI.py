import tkinter as tk
#import PyPDF2
from PIL import Image, ImageTk

root = tk.Tk()

canvas = tk.Canvas(root, width = 1024, height = 600)
canvas.grid(columnspan=255, rowspan = 149)

logo = Image.open('logo.png')
logo = ImageTk.PhotoImage(logo)
logo_label = tk.Label(image = logo)
logo_label.image = logo
logo_label.grid(column = 7, row = 0)

root.mainloop()