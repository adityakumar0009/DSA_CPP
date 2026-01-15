from tkinter import*
root = Tk() #window
root.title("My first GuI")
root.geometry("500x500+0+0")#set size of window
root.wm_iconbitmap("adi img.ico") #To change the icon logo
# root.resizable(False,False)


def check_get_value():
    print(check_var.get())

# check_var = IntVar()
check_var = StringVar()
check_btn = Checkbutton(root,text='Agree terms & conditions',variable=check_var,onvalue="ON",offvalue="OFF",font=('arial',20,'bold'))
check_btn.place(x=50,y=50)
check_var.set("OFF")

btn = Button(root,text='Click me',font=('times new roman',20,'bold'),command=check_get_value)
btn.place(x=150,y=100)

root.mainloop() #To stay window