from tkinter import*
root = Tk();
root.title("Code with Aditya")
root.geometry("500x500+0+0")
root.wm_iconbitmap("adi img.ico")

def click():
    text1 = "Address: " + text_box.get('1.0',END)
    lbl.config(text=str(text1))

#variables
name_var = StringVar()
    
entry = Entry(root,width=50,textvariable=name_var,font=('arial',15),bg="Grey")
entry.place(x=0,y=10,relwidth=1)    

text_box = Text(root,font=('arial,20'))
text_box.place(x=0,y=70,relwidth=0.50,relheight=0.25)
    
MyButton = Button(root,text="Click me",font=('arial',20),fg="gold",bg="black",command=click);
MyButton.place(x=200,y=300)

lbl = Label(root,text="",font=('arial',15))
lbl.place(x=200,y=400)

root.mainloop()  