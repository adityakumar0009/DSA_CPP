from tkinter import*
root = Tk() #window
root.title("My first GuI")
root.geometry("500x500+0+0")#set size of window
root.wm_iconbitmap("adi img.ico") #To change the icon logo
# root.resizable(False,False)

title = Label(root,text="COURSE DETAILS",font=('times new roman',30,'bold'),bg='white',fg='red',bd=5,relief=RIDGE)
title.place(x=0,y=0,relwidth=1)

name = Entry(root,font=('times new roman',20,'bold'),borderwidth=2,highlightthickness=3,relief=RIDGE,bg='lightyellow',fg='blue',show='*')
name.place(x=0,y=100,relwidth=1)

btn = Button(root,text="COURSE DETAILS",font=('times new roman',20,'bold'),bg='blue',fg='white',bd=2,relief=RIDGE,activebackground='red',activeforeground='white',cursor='hand2')
btn.place(x=120,y=200,relwidth=0.13,width=200)

root.mainloop() #To stay window