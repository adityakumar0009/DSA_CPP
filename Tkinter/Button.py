from tkinter import*
root = Tk();
root.title("Code with Aditya")
root.geometry("500x500+0+0")
root.wm_iconbitmap("adi img.ico")

def click():
    lbl = Label(root,text="Please subscribe my channel!",font=('arial',15))
    lbl.pack()
    
MyButton = Button(root,text="Click me",font=('arial',20),fg="gold",bg="black",command=click);
MyButton.pack(padx=50,pady=50)

root.mainloop()