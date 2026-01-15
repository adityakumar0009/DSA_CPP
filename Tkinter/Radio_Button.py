from tkinter import*
root = Tk() #window
root.title("My first GuI")
root.geometry("500x500+0+0")#set size of window
root.wm_iconbitmap("adi img.ico") #To change the icon logo
# root.resizable(False,False)

def gender_get():
    print(gender.get())

gender = StringVar()
male = Radiobutton(root,text='male',variable=gender,value='male',font=('times new roman',20,'bold'))
male.place(x=50,y=50)
gender.set('male')

female = Radiobutton(root,text='female',variable=gender,value='female',font=('times new roman',20,'bold'))
female.place(x=200,y=50)

btn = Button(root,text='Click me',font=('times new roman',20,'bold'),command=gender_get)
btn.place(x=150,y=100)

root.mainloop() #To stay window