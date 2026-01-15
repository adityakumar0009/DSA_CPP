from tkinter import*
# import tkinter as tk
# root=tk.Tk()
root = Tk() #window
root.title("My first GuI")
root.geometry("500x500+0+0")#set size of window
root.wm_iconbitmap("adi img.ico") #To change the icon logo
root.resizable(False,False)
root.mainloop() #To stay window