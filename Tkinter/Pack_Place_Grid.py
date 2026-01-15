from tkinter import*
root = Tk() #window
root.title("My first GuI")
root.geometry("500x500+0+0")#set size of window
root.wm_iconbitmap("adi img.ico") #To change the icon logo
# root.resizable(False,False)

#Packed ka use jaha fixed size dene hote ho
# lb11 = Label(root,text="Code with Aditya",font=('times new roman',30,'bold'))
# lb11.pack(side=TOP)

# lb11 = Label(root,text="Code with Aditya",font=('times new roman',30,'bold'))
# lb11.pack(side=BOTTOM)

# lb11 = Label(root,text="Code with Aditya",font=('times new roman',30,'bold'))
# lb11.pack(side=LEFT)

# lb11 = Label(root,text="Code with Aditya",font=('times new roman',30,'bold'))
# lb11.pack(side=RIGHT)



# Bahut saare name chahiye jaha
# lb11 = Label(root,text="Code with Aditya",font=('times new roman',15,'bold'))
# lb11.grid(row=0,column=0)

# lbl1 = Label(root,text="Code with Aditya1",font=('times new roman',15,'bold'))
# lbl1.grid(row=1,column=0)


lbl1 = Label(root,text="Code with Aditya",font=('times new roman',15,'bold'))
lbl1.place(x=100,y=100)

root.mainloop() #To stay window